//
// Created by james on 2019/11/26.
//

#include <iostream>

using namespace std;


class People {
public:
    People(const char *name, int age);

    void print() const;

protected:
    const char *m_name;
    int m_age;
};

People::People(const char *name, int age) : m_name(name), m_age(age) {}

void People::print() const {
    printf("name: %s, age: %d\n", m_name, m_age);
}

class Student : public People {
public:
    Student(const char *name, int age, float score);

    void print() const;

private:
    float m_score;
};

Student::Student(const char *name, int age, float score) : People(name, age), m_score(score) {}

void Student::print() const {
    printf("name: %s, age: %d, score: %g\n", m_name, m_age, m_score);
}





//int main() {
//    People *p = nullptr;
//    p = new People("ZhangSan", 25);
//    p->print();
//    delete p;
//
//    p = new Student("LiSi", 14, 87.5f);
//    p->print();
//    delete p;
//    return 0;
//}

//？？？怎么解释上面的结果 如果指针指向了派生类对象，那么就应该使用派生类的成员变量和成员函数，为什么结果不对

//通过基类指针只能访问派生类的成员变量，但是不能访问派生类的成员函数；为了消除这种尴尬，让基类指针能够访问派生类的成员函数，
// C++ 增加了虚函数（Virtual Function）；使用虚函数非常简单，只需要在函数声明前面增加virtual关键字；


//
//class People {
//public:
//    People(const char *name, int age);
//
//    virtual void print() const;
//
//    virtual ~People() {};//虚析构函数必须有方法体 否则会报错
//
//protected:
//    int age;
//    const char *name;
//};
//
//class Student : public People {//student 继承 people 时必须加上 public 修饰 否则new 会报错
//public:
//    Student(const char *name, int age, float score);
//
//    void print() const override;
//
//    virtual ~Student() override {};//虚析构函数 才可以添加overide 关键字 ，虚析构函数 必须加方法体 否则会报错
//
//private:
//    float score;
//};
//
//
//People::People(const char *name, int age) : age(age), name(name) {}
//
//void People::print() const {
//    cout << "people age = " << age << "name =" << name << endl;
//}
//
//Student::Student(const char *name, int age, float score) : People(name, age), score(score) {}
//
//void Student::print() const {
//    cout << "student name=" << name << "student age= " << age << "score=" << score << endl;
//}


int main() {


    People *people = nullptr;
    people = new People("zhangfei", 25);
    people->print();
    delete people;
    people = new Student("lisi", 22, 90);//student 继承 people 时必须加上 public 修饰 否则new 会报错
    people->print();//当没有使用虚函数时 打印的是 lisi 22.
    delete people;
    return 0;
}


//有了虚函数，基类指针指向基类对象时就使用基类的成员（包括成员函数和成员变量），指向派生类对象时就使用派生类的成员；
//换句话说，基类指针可以按照基类的方式来做事，也可以按照派生类的方式来做事，它有多种形态，或者说有多种表现方式，
// 我们将这种现象称为多态（Polymorphism）；


//C++中虚函数的唯一用处就是构成多态；

//C++提供多态的目的是：可以通过基类指针对所有派生类（包括直接派生和间接派生）的成员变量和成员函数进行“全方位”的访问，
// 尤其是成员函数；如果没有多态，我们只能访问成员变量；