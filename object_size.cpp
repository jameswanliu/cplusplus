//
// Created by james on 2019/11/26.
//

/**
 * 结构体存储时的规则
 * 1.每个成员的起始位置为该成员大小的整数倍 比如 int 0，4，8
 * 2.每个成员的所占大小为最大成员的整数倍
 *
 *
 */


#include <iostream>

using namespace std;

//#pragma pack(1)
class A {
public:
    A(int x = 0) {
        cout << "A" << x << endl;
    }

    void printA() {
        cout << "Hello A";
    }

private:
    char Data1[3];
    int Data2;
};

//#pragma pack(1)
class B : public A {
public:
    B(int x = 0) {
        cout << "B" << x << endl;
    }

    void printB() {
        cout << "Hello B";
    }

private:
    char Data1[3];
    int Data2;
};

//#pragma pack(1)
class C : public B {
public:
    C(int x = 0) {
        cout << "C" << x << endl;
    }

    void printC() {
        cout << "Hello C";
    }

private:
    char Data1[3];
    int Data2;
};

int main() {
    A a;
    B b;
    C c;

    //类对象大小=基类对象大小+自身成员大小。A当中三个字符变量3个字节，一个整形变量4个字节，考虑内存对齐因素(默认为4)，A类对象大小为8。
    // B类对象大小为A类对象大小基础上再加8，C类对象大小在B类对象大小基础上再加8。
    cout << "size of a:" << sizeof(a) << endl;
    cout << "size of b:" << sizeof(b) << endl;
    cout << "size of c:" << sizeof(c) << endl;
    return 0;
}

