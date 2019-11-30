//
// Created by kevin on 2019/11/30.
//


#include <vector>
#include <stack>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>



/**
 * 向量（Vector）是一个封装了动态大小数组的顺序容器（Sequence Container）
 * 。跟任意其它类型容器一样，它能够存放各种类型的对象。可以简单的认为，向量是一个能够存放任意类型的动态数组。
 *
 *
 * 1.push_back 在数组的最后添加一个数据

2.pop_back 去掉数组的最后一个数据

3.at 得到编号位置的数据

4.begin 得到数组头的指针

5.end 得到数组的最后一个单元+1的指针

6．front 得到数组头的引用

7.back 得到数组的最后一个单元的引用

8.max_size 得到vector最大可以是多大

9.capacity 当前vector分配的大小

10.size 当前使用数据的大小

11.resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值

12.reserve 改变当前vecotr所分配空间的大小

13.erase 删除指针指向的数据项

14.clear 清空当前的vector

15.rbegin 将vector反转后的开始指针返回(其实就是原来的end-1)

16.rend 将vector反转构的结束指针返回(其实就是原来的begin-1)

17.empty 判断vector是否为空

18.swap 与另一个vector交换数据
 *
 */

using namespace std;


void printVector(vector<int> vec1) {
    vector<int>::iterator it = vec1.begin();
    for (it; it != vec1.end(); ++it) {
        cout << *it << endl;
    }
}

void printVector(vector<string> vec1) {
    vector<string>::iterator it = vec1.begin();
    for (it; it != vec1.end(); ++it) {
        cout << *it << endl;
    }
}
//
//int main() {


//    vector<int> vector1;//默认初始化，vec1为空
//
//    vector1.push_back(1);//vector 推入元素
//    vector1.push_back(9);
//    vector1.push_back(10);
//    printVector(vector1);
//
//    vector<int> vector2(vector1);//通过vector1 初始化vector2
//    printVector(vector2);
//
//    vector<int> vector3(vector1.begin(), vector1.end());//通过 vector1 begin 和 end 函数初始化vector3
//    printVector(vector3);
//
//
//    vector<int> vector4(10, 4);//定义长度为10 所有值都是 4 的vector
//    printVector(vector4);

//    vector<string> vector5(10, "h");//定义一个 string 类型的vector  长度为10  里面的值为null
//    vector5.insert(vector5.begin(), "c");//在开头插入一个 c
//    vector5.insert(vector5.end(), "c");//在末尾// 插入一个 c
//    printVector(vector5);

//    cout << vector5.capacity() << endl;//vector de 负载均衡数
//    cout << vector5.size() << endl;//容器大小

//    vector5.clear();//clear 后 负载均衡数还是 20 但没有了元素

//    vector5.pop_back();
//    const string *p = vector5.data();//data 函数取的是 第一个的值
//    cout << "data=" << *p << endl;

//    cout << "front=" << vector5.front() << endl;//取最前面的值
//    cout << "back=" << vector5.back() << endl;//返回最后一个值
//    vector5.erase(vector5.begin(), vector5.end());//删除一段元素 传入的是开始元素的指针 和 结尾元素的指针
//    vector5.erase(vector5.begin());//删除第一个元素 传入的是 第一个元素的指针
//    printVector(vector5);

//   vector<string>().swap(vector5);//交换函数 调用swap 函数后 capacity 为0
// cout << vector5.capacity() << endl;

//  printVector(vector5);//vector de 负载均衡数

//    return 0;

//}



//------------自适应容器--------------------------LIFO----------


void printStack(stack<int> stack) {
    while (stack.size() > 0) {
        cout << "top=" << stack.top() << endl;
        stack.pop();
    }

    cout << "stack is empty = " << stack.empty() << endl;//返回1 表示真 返回0表示假
}


struct Node {
    int prioritys;
    char names[20];

    Node(int priorty, char *name) {
        strcpy(names, name);
        prioritys = priorty;
    }
};


struct NodeCmp {
    bool operator()(const Node &na, const Node &nb) {//运算符重载 比较两个node 的大小
        if (na.prioritys != nb.prioritys)//如果不相等 比较优先级  否则比较两个的名字
            return na.prioritys <= nb.prioritys;
        else
            cout << "strcmp = " << strcmp(na.names, nb.names) << endl;
        return strcmp(na.names, nb.names);
    }
};


int main() {

    stack<int> stack;//栈先进后出
    stack.push(2);
    stack.push(5);
    printStack(stack);


    queue<int> queue1;//队列先进先出
    queue1.push(11);
    queue1.push(100);
    queue1.push(288);
    while (queue1.size() > 0) {
        cout << "front=" << queue1.front() << endl;
        queue1.pop();//弹出元素
    }


    priority_queue<string> priorityQueue1;//优先级队列  less 是结构体，有一个operator 函数方法进行比较操作



    priorityQueue1.push("aa");
    priorityQueue1.push("ab");
    priorityQueue1.push("abc");
    priorityQueue1.push("abb");//值最大的排在前面

    while (priorityQueue1.size() > 0) {
        cout << "top=" << priorityQueue1.top() << endl;
        priorityQueue1.pop();//弹出元素
    }


    priority_queue<Node, vector<Node>, NodeCmp> priorityQueue2;//less 是 结构体  ，使用自己写的结构体NodeCmp
    priorityQueue2.push(Node(5, "kevin"));
    priorityQueue2.push(Node(10, "james"));
    priorityQueue2.push(Node(10, "jame"));
    priorityQueue2.push(Node(6, "katy"));


    while (priorityQueue2.size() > 0) {
        cout << "name = " << priorityQueue2.top().names << ",priorty=" << priorityQueue2.top().prioritys << endl;
        priorityQueue2.pop();
    }


}