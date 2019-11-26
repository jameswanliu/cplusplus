//
// Created by james on 2019/11/26.
//


/**
 * 命名空间
 */
#include "namespace_demo.h"
#include <iostream>

using namespace std;


using namespace NAMESPACE_A;


void namespaces() {
    cout << "a =" << a << endl;
    cout << "c =" << NAMESPACE_B::c << endl;

    NAMESPACE_B::NAMESPACE_C::Student student = {"james", 23};
    cout << "name=" << student.b << "---age=" << student.age << endl;
}

int main() {
    namespaces();
}
