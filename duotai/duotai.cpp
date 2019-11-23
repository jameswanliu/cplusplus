//
// Created by kevin on 2019/11/23.
//

#include <iostream>
//多态就是程序运行时，父类指针可以根据具体指向的子类对象，来执行不同的函数，表现为多态。
/***
- 当类中存在虚函数时，编译器会在类中自动生成一个虚函数表 Virtual table
- 虚函数表是一个存储类成员函数指针的数据结构
- 虚函数表由编译器自动生成和维护
- virtual 修饰的成员函数会被编译器放入虚函数表中 （知道就可以 安卓不需要研究太深入）
- 存在虚函数时，编译器会为对象自动生成一个指向虚函数表的指针（通常称之为 vptr 指针）
 ***/



////什么是多多态，如何引入多态
//// 让基类指针能够访问派生类的成员函数，C++ 增加了虚函数（Virtual Function）；
//// 指针调用普通的成员函数时会根据指针的类型（通过哪个类定义的指针）来判断调用哪个类的成员函数，int* double*
//// 但是通过本节的分析可以发现，这种说法并不适用于虚函数，虚函数是根据指针的指向来调用的，指针指向哪个类的对象就调用哪个类的虚函数；

using namespace std;


class People {
public:
    People(const char *m_name, int age);

    virtual void print() const;

protected:
    const char *m_name;
    int age;
};

People::People(const char *m_name, int age) : m_name(m_name), age(age) {}


void People::print() const {
    printf("name: %s, age: %d\n", m_name, age);
}


class Student : public People {

public:
    Student(const char *name, int age, float scorce);

    // 父类虚函数必须要有 virtual 关键字
    // 子类有没有 virtual 关键字都可以
    virtual void print() const;

private:
    float scorce;


};


Student::Student(const char *name, int age, float scorce) : People(name, age), scorce(scorce) {

}

void Student::print() const {
    printf("name: %s, age: %d, score: %g\n", m_name, age, scorce);
}


int main() {

//
    People *p1 = nullptr;
//    p1 = new People("Jesson", 25);  people 是抽象类不能直接new 实例化
//    delete p1;


    p1 = new Student("Tom", 14, 87.5f);
    p1->print();//p指针指向派生类的时候，只能调用派生类的成员变量，不能调用派生类的成员函数

}


//virtual虚函数
//虚函数对于多态具有决定性的作用，有虚函数才能构成多态，这节我们来重点说一下虚函数的注意事项：
//1) 只需要在虚函数的声明处加上 virtual 关键字，函数定义处不加
//2) 可以只将基类中的函数声明为虚函数，当派生类中出现参数列表相同的同名函数时，自动成为虚函数
//3) 当在基类中定义了虚函数时，如果派生类没有定义新的函数来override此函数，那么将使用基类的虚函数
//4) 构造函数不能是虚函数；对于基类的构造函数，它仅仅是在派生类构造函数中被调用，这种机制不同于继承；也就是说，派生类不继承基类的构造函数，将构造函数声明为虚函数没有什么意义
//5) 析构函数有必要声明为虚函数



/**
 * C++中基类的析构函数为什么要用virtual虚析构函数
 */

//    直接的讲，C++中基类采用virtual虚析构函数是为了防止内存泄漏。
//    具体地说，如果派生类中申请了内存空间，并在其析构函数中对这些内存空间进行释放。假设基类中采用的是非虚析构函数，
//    当删除基类指针指向的派生类对象时就不会触发动态绑定，因而只会调用基类的析构函数，而不会调用派生类的析构函数。那么在这种情况下，
//    派生类中申请的空间就得不到释放从而产生内存泄漏。所以，为了防止这种情况的发生，C++中基类的析构函数应采用virtual虚析构函数。


/**
 * C++ 接口和抽象类 含有纯虚函数的类就是抽象类
 */

//virtual Type area() const = 0;
//纯虚函数和抽象类  包含纯虚函数的类称为抽象类（Abstract Class）；
//之所以说它抽象，是因为它无法实例化，也就是无法创建对象；
//抽象类通常是作为基类，让派生类去实现纯虚函数；派生类必须实现纯虚函数才能被实例化
//virtual float area() const = 0;


/**
 * 多态 和指针调用 虚函数 函数总结：
 */
//当通过指针访问类的成员函数时：
//如果该函数是非虚函数，那么编译器会根据指针的类型找到该函数；也就是说，指针是哪个类的类型就调用哪个类的函数；
//如果该函数是虚函数，并且派生类有同名的函数override它，那么编译器会根据指针的指向找到该函数；
// 也就是说，指针指向的对象属于哪个类就调用哪个类的函数，这就是多态；