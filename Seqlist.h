//
// Created by kevin on 2019/11/30.
//

#ifndef CPLUSPLUS_BASE_SEQLIST_H
#define CPLUSPLUS_BASE_SEQLIST_H

#define MAXSIZE  1000



template<class T>
class Seqlist {
public:
    Seqlist() { length = 0; };

    Seqlist(T a[], int n);

    int locate(T x);

    T get(int i);

    bool remove(int index);

private:
    T data[MAXSIZE];
    int length;
};


#endif //CPLUSPLUS_BASE_SEQLIST_H
