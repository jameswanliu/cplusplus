//
// Created by james on 2019/11/26.
//



#include <iostream>


/**
 * 1. const 修饰基本类型 不可修改
 * 2.const char* p 常量指针 不可修改p 所指向的值
 * 3.char * const p 指针常量  不可以p 所对应的地址
 * 4.const int* function（int） 常指针函数
 * 5.const （*int） function(int) 常 函数指针
 * 6.int function（int）const 常成员函数 不能修改该对象的值
 * 7. 如果 常指针函数 的返回值要赋给一个指针变量 那么该指针变量也应该是const的 如果要将该const指针变量 转成普通指针变量 则
 *可以 使用const_cast
 *
 *
 *
 * 关于Const函数的几点规则：
　　a.const对象只能访问const成员函数,而非const对象可以访问任意的成员函数,包括const成员函数.
　　b.const对象的成员是不可修改的,然而const对象通过指针维护的对象却是可以修改的.
　　c.const成员函数不可以修改对象的数据,不管对象是否具有const性质.它在编译时,以是否修改成员数据为依据,进行检查.
　　e.然而加上mutable修饰符的数据成员,对于任何情况下通过任何手段都可修改,自然此时的const成员函数是可以修改它的




一、概念

　　当const在函数名前面的时候修饰的是函数返回值，在函数名后面表示是常成员函数，
 该函数不能修改对象内的任何成员，只能发生读操作，不能发生写操作。

二、原理：

　　我们都知道在调用成员函数的时候编译器会将对象自身的地址作为隐藏参数传递给函数，在const成员函数中，既不能改变this所指向的对象，
 也不能改变this所保存的地址，this的类型是一个指向const类型对象的const指针。
 *
 *
 *
 *
 *
 *
 * @return
 */

using namespace std;


const int *getdata(int x) {
    return &x;
}


int main() {


    const int a = 10;
    //a = 11; 报错 const 修饰的变量的值不可改变


    int j = 11;
    const int *b = &j;
    //*b = 11; //报错 提示 指针b  read-only available not assignable  const 修饰的指针不可改变其值

    int f = 12;
    int *const p = &j;
    // p = &f; //报错 zhi'zhi'zhen


    //   int * i = getdata(9);//报错 int * i 必须使用const 修饰
    const int *i = getdata(9);
    cout << "&i=" << &i << endl;


    const int *z = &j;

    int *h = const_cast<int *>(z);//通过 const_cast 将常指针转换为 指针



    return 0;
}