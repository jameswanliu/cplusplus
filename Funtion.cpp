//
// Created by james on 2019/11/26.
//

#include <string>
#include <cstring>
#include <iostream>


using namespace std;

class Student {
public:
    Student(int age, char *name) {
        cout << "调用有参构造函数" << endl;
        this->age = age;
        this->name = (char *) malloc(sizeof(char) * 100);
        strcpy(this->name, name);
    }


    Student(const Student &student) {//函数传入的对象引用 可以是哟个const 修饰
        this->name = student.name;
        this->age = student.age;
        this->sex = student.sex;
        cout << "调用拷贝构造函数" << endl;
    }


    Student() {
        cout << "调用默认构造函数" << endl;
    }


    ~Student() {
        cout << "调用析构函数" << endl;
        free(this->name);
        this->name = NULL;
    }


public:

    char *getName() {
        return this->name;
    }

    char *getSex() {
        return this->sex;
    }

    void setAge(int age) {
        Student::age = age;
    }

    void setName(char *name) {
        Student::name = name;
    }

    int getAge() {
        return age;
    }


    void printStudent() {
        cout << "student name=" << this->name << "age = " << age << "sex=" << sex << endl;
    }


private:
    int age;
    char *name;
    char *sex;
};


//构造函数 析构函数的使用
int main() {
    // Student student;//第一种
//    Student *student1 = new Student(20, "james"); //调用有参构造函数
    //delete(student1);
    Student students(18, "kate");//第三种 调用有参构造函数


//
//    Student *student = (Student *) malloc(sizeof(Student));//第四种 使用 malloc 进行内存开辟通过指针赋值， 注意malloc 开辟内存  不会调用构造函数  free 不会调用析构函数
//
//
//    student->setAge(22);
//    student->setName("kevin");
//
//    cout << "age=" << student->getAge() << endl;
//    cout << "name=" << student->getName() << endl;

    Student student3(students);//第五种

//    free(student);

    return 0;
}



