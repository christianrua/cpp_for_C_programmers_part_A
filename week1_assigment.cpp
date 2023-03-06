#include <iostream>
#include <vector>
using namespace std;

const int N = 40;

inline void sum(int *p, vector<int> d){
    *p = *p + d.back();    
}

int main(){
    int i;
    int accum = 0;
    vector<int> data;
    //https://www.geeksforgeeks.org/vector-in-cpp-stl/
    for(i = 0; i < N; ++i){
        data.push_back(i);
        sum(&accum, data);
        cout << "sum is " << accum;
    }
    return 0;
}