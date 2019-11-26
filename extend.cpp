//
// Created by james on 2019/11/26.
//


/***
 *
 * 1) public继承方式
    基类中所有 public 成员在派生类中为 public 属性；
    基类中所有 protected 成员在派生类中为 protected 属性；
    基类中所有 private 成员在派生类中不能使用。

    2) protected继承方式
    基类中的所有 public 成员在派生类中为 protected 属性；
    基类中的所有 protected 成员在派生类中为 protected 属性；
    基类中的所有 private 成员在派生类中不能使用。

    3) private继承方式
    基类中的所有 public 成员在派生类中均为 private 属性；
    基类中的所有 protected 成员在派生类中均为 private 属性；
    基类中的所有 private 成员在派生类中不能使用。
 *
 *
 *
 *
 */




#include <iostream>

using namespace std;


//---------using 来改变权限的问题-----------
//using namespace std;

class A {
protected:
    int m_a;
    char m_b;
    float m_c;
private:
    char *m_d;
};

class B : public A {
public:
    using A::m_a;
protected:
    using A::m_b;
    //using A::m_d; // 基类的private成员在派生类中不可见
private:
    using A::m_c;
};




int main(){





    return 0;


}