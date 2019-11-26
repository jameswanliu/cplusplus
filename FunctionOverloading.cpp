//
// Created by james on 2019/11/26.
//

/**
 * 运算符重载
 */

#include <iostream>
#include "FunctionOverloading.h"

using namespace std;


void FunctionOverloading::print() const {
    cout << r_num <<"-and-"<< l_num << endl;
}


FunctionOverloading FunctionOverloading::operator+(FunctionOverloading &f) const {
    return FunctionOverloading(r_num + f.r_num, l_num + f.l_num);
}


int main() {
    FunctionOverloading A(2.0, 4.0), B(1.2, 2.8), D;
    D = A + B;
    D.print();


}

