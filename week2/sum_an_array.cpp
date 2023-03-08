#include <iostream>
using namespace std;

template<class T> //T is generic type
T sum(const T data[], int size, T s =0){
    for(int i = 0; i < size; i++){
        s += data[i]; // += most work for T
    }
    return s;
}

template<class T>
T subs(const T data[], int size, T s = 0){
    for(int i = 0; i < size; i++){
        s -= data[i]; // += most work for T
    }
    return s;
}

template<class T>
T print_values(const T data[], int size, T s = 0){
    for(int i = 0; i < size; i++){
        cout << data[i] << endl; // += most work for T
    }
    return s;
}

int main(){
    cout << "template for sum()" << endl;
    int a[] = {1,2,3};
    double b[] = {2.1,2.2,2.3};
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;

    cout << "template for subs()" << endl;
    cout << subs(a,3) << endl;
    cout << subs(b,3) << endl;

    cout << "template for print_values()" << endl;
    cout << print_values(a,3) << endl;
    cout << print_values(b,3) << endl;

    return 0;
}