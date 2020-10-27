#include<iostream>

using namespace std;

long no_of_coins(int m){
    int d1 = 1, d2 = 5, d3 = 10;
    long r3 = m/d3;
    m -= r3*d3;
    long r2 = m/d2;
    m -= r2*d2;
    long r1 = m/d1;
    m -= r1*d1;
    long result = r1 + r2 + r3;
    return result; 
}

int main(){
    int m;
    cin >> m;
    cout << no_of_coins(m);
    return 0;
}