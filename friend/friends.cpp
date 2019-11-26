//
// Created by james on 2019/11/26.
//
#include <iostream>
#include <math.h>


/**
 * 注意：
 * 1.友元关系不能传递
 * 2.友元关系不能继承
 * 3.友元关系是单向的
 */

using namespace std;

class Disdent {

public:
    Disdent(double a, double b) {
        this->x = a;
        this->y = b;
    }

    friend double disd(Disdent &a, Disdent &b); //disd 是 Disdent 的友元函数
private:
    double x, y;
};


double disd(Disdent &a, Disdent &b) {  //disd 是 Disdent 的友元函数 外部调用私有变量x 和y  时 直接使用 无需使用get 方法
    double i = a.x - b.x;
    double j = a.y - b.y;
    return sqrt(i * i + j * j);
}


int main() {
    Disdent p1(1.0, 1.0), p2(4.0, 5.0);
    cout << "the distance is:";
    cout << disd(p1, p2) << endl;//计算两点之间的距离
    return 0;
}


class A {

private:
    int x;

    friend class B;//B是A的友元类 ，B 中的成员函数 访问A类中的私有变量
};

class B {

public:
    void setX(int c);

private:
    A a;
};


void B::setX(int c) {
    a.x = c;
}

