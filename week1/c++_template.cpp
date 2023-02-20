// #include <complex>
// template<class T>

// inline void swap(T& d, T& s){
//     T temp = d;
//     d = s;
//     s = temp;
// }

// int main(){
//     int m = 5, n = 10;
//     double x = 5.3, y = 10.6;
//     complex<double> r(2.4, 3.5), s(3.4, 6.7);
//     cout<<"inputs:" << m << ", "<< n << endl;
//     swap(m,n);
//     cout<<"outputs:"<< m << "," << n >> endl;
// }

// Take what you know about summing 'n' numbers (using a C array) and write that code,
// Debug in C++
// change to a template.
#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

struct number {
    int num;
};

int main(){
    struct number numbers_array[5] = {1,2,3,4,5};
    return 0;
}
