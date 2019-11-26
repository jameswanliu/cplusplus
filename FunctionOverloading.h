//
// Created by james on 2019/11/26.
//


/**
 * 运算符重载
 *
 *class Type operator 运算符（class Type reference） const
 *
 */


class FunctionOverloading {

public:

    FunctionOverloading(double r = 0.0, double l = 0.0) : r_num(r), l_num(l) {}

    void print() const;

    FunctionOverloading operator+(FunctionOverloading &f) const;


private:
    double r_num;
    double l_num;

};

#ifndef CPLUSPLUS_BASE_FUNCTIONOVERLOADING_H
#define CPLUSPLUS_BASE_FUNCTIONOVERLOADING_H


#endif //CPLUSPLUS_BASE_FUNCTIONOVERLOADING_H
