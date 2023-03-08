#include <iostream>
#include <vector>
using namespace std;

const int N = 40;

inline void sum(int& p,int n, vector<int> vec){
    p = 0;
    for(int i = 0; i < n; ++i){
        p += vec[i];
    }
}

int main(){
    int accum = 0;
    vector<int> data(N);
    for(int i = 0; i < N; ++i){
        data[i] = i;
        sum(accum, N,data);
        cout << "sum is " << accum << endl;
    }
    return 0;
}