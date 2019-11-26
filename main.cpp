#include <iostream>



/**
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
 */

using namespace std;

struct Teacher {
    char name[15];
    int age;
};


struct Teacher1 {
    int &age;
    int &num;
};


/**
 * 指针传值 修改age
 * @param p
 * @return
 */
Teacher teacher(Teacher *p) {
    p->age = 25;
}


/**
 * 引用传值 修改age
 * @param p
 * @return
 */
Teacher1 teacher(Teacher &p) {
    p.age = 22;
}


///**
// * 形参 不修改对象的值
// * @param t
// * @return
// */
//Teacher teacher(Teacher t) {
//    t.age = 25;
//}

//type &引用 别名
void testRefenerce() {

    int a = 100;

    int &b = a;//b 是a的别名


    int *p = &a;

    *p = 120;
    printf("a = %d b=%d *p=%d\n", a, b, *p);
    b = 180;
    printf("&  a = %d b=%d *p=%d\n", a, b, *p);//说明 b ，p，a 指向的内存地址都是一样的



    int c = 100;

    int *const j = &c;//定义一个指针常量 将 c的地址赋给这个指针常量 相当于 int &j= c
    c = 200;
    printf("c = %d j = %d\n", c, *j);


    const int *i = &c;//定义一个常量指针将 c的地址赋给 常量指针

    //*i = 200; 报错 因为常量指针的值不可改变



    int i1 = 30;
    int i2 = 40;
    const int *pi = &i1;
    pi = &i2; // 注意这里，pi可以在任意时候重新赋值一个新内存地址
    i2 = 80; //想想看：这里能用*pi = 80来代替吗？当然不能！
    // *pi = 80;
    printf("%d\n", *pi); //80






}


int main() {
    cout << "Hello, World!" << endl;
    Teacher teacher1 = {"james", 33};
//    Teacher1 t1= teacher(&teacher1);//指针传递
    Teacher1 t1 = teacher(teacher1);//引用传递
    printf("teacher age = %d\n", teacher1.age);

    testRefenerce();


    return 0;
}


