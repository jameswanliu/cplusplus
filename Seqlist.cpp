//
// Created by kevin on 2019/11/30.
//

#include <iostream>
#include "Seqlist.h"


using namespace std;

template<class T>
Seqlist<T>::Seqlist(T a[], int n) {
    if (n > MAXSIZE) return ;
    for (int i = 0; i < n; i++) {
        data[i] = a[i];
    }
    length = n;
}

template<class T>
T Seqlist<T>::get(int i) {
    if (i < 1 || i < length) return data[0];
    return data[i - 1];
}

template<class T>
int Seqlist<T>::locate(T x) {

    for (int i = 0; i < length; i++) {
        if (x == data[i]) return i;
    }
    return 0;
}


template<class T>
bool Seqlist<T>::remove(int index) {
    for (int i = index; i < length; i++) {
        this->data[i] = this->data[i + 1];
    }
    this->length--;

    return true;
}


int main()//实例化
{
    int a[7] = {11, 12, 15, 9, 77, 81, 45};
    Seqlist<int> list(a, 7);
    int v = list.locate(77);
    cout <<"v =" << v << endl;
    int d = list.get(5);
    cout << "d =" << d << endl;
//    list.remove(1);
//    int d2 = list.get(3);
//    cout << "d2=" << d2 << endl;
    return 0;
}

