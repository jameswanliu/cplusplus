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
        cout << "�����вι��캯��" << endl;
        this->age = age;
        this->name = (char *) malloc(sizeof(char) * 100);
        strcpy(this->name, name);
    }


    Student(const Student &student) {//��������Ķ������� ������Ӵ��const ����
        this->name = student.name;
        this->age = student.age;
        this->sex = student.sex;
        cout << "���ÿ������캯��" << endl;
    }


    Student() {
        cout << "����Ĭ�Ϲ��캯��" << endl;
    }


    ~Student() {
        cout << "������������" << endl;
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


//���캯�� ����������ʹ��
int main() {
    // Student student;//��һ��
//    Student *student1 = new Student(20, "james"); //�����вι��캯��
    //delete(student1);
    Student students(18, "kate");//������ �����вι��캯��


//
//    Student *student = (Student *) malloc(sizeof(Student));//������ ʹ�� malloc �����ڴ濪��ͨ��ָ�븳ֵ�� ע��malloc �����ڴ�  ������ù��캯��  free ���������������
//
//
//    student->setAge(22);
//    student->setName("kevin");
//
//    cout << "age=" << student->getAge() << endl;
//    cout << "name=" << student->getName() << endl;

    Student student3(students);//������

//    free(student);

    return 0;
}



