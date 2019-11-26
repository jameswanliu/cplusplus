//
// Created by james on 2019/11/26.
//

#ifndef CPLUSPLUS_BASE_NAMESPACE_DEMO_H
#define CPLUSPLUS_BASE_NAMESPACE_DEMO_H


namespace NAMESPACE_A {
    int a = 10;
}


namespace NAMESPACE_B {
    int c = 20;
    namespace NAMESPACE_C {
        struct Student {
            char b[20] ;
            int age;
        };
    }

}


#endif //CPLUSPLUS_BASE_NAMESPACE_DEMO_H
