//
// Created by kevin on 2019/11/23.
//


#include <string>
#include <iostream>
#include <cstring>


using namespace std;

int main() {

    char a[] = "adbdadfq";


    char b[] = "adf";
    string str1(a);
    string str2(b);
    int index = str1.find(str2);//找到 子串2 在原始string 中的坐标  方法一 使用find 函数查找
    cout << "find =:" << index << endl;




    /**
     * 方法二 使用strstr 字串函数 得到一个新的char 指针 =  adfg
     *
     * 新的char 指针 - a （首地址） = 坐标
     *
     */
    char *ret = strstr(a, b);

    if (ret != NULL) {
        int position = ret - a;
        cout << "position = " << position << endl;
    }





}
