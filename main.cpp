#include <iostream>


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