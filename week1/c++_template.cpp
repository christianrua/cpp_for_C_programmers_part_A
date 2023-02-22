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

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T accumulate(T acc, T value){
    acc = acc + value;
    return acc;
}

//answer
template <class summable>
summable sum(const summable data[], int size, summable s=0){
    for(int i = 0; i < size; i++){
        s += data[i];
        //+= must work for summable
    }
    return s;
}

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};

    cout << sum<int>(myNumbers, 5);
    return 0;
}
