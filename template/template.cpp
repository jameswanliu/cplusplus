//
// Created by james on 2019/11/26.
//

#include <iostream>



/**
 * c++ 的编译过程https://www.cnblogs.com/mickole/articles/3659112.html
 *
 *
 * 模板方法 和 模板类
 *
 * 注意：
 *  1.模板类实例化对象时 左右必须加上泛型（这个与java 不同）
 *  2.模板函数 template <typename T>  模板类 template <class T>
 */

using namespace std;

template <typename T>

T sum (T a,T b){
    return a+b;
}


template <class T>
class Callbak{


public:
    void onSuccess(T msg){
        cout<<msg<<endl;
    }


    void onFail(T error){
        cout<<error<<endl;
    }
};


int main(){
    cout<<"sum ="<<sum(1.0,2.0)<<endl;


    Callbak<string>* callbak = new Callbak<string>();
    callbak->onSuccess("success");


    return 0;
}