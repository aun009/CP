#include<bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    if(b == 0) return 1;

    int value = power(a, b/2);

    if(b % 2 == 0) return value * value;
    return a * value * value;
}

int gcd(int a, int b) {
    if(a == 0) return b;

    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


signed main() {
    cout << gcd(10, 35) << endl;
    cout << lcm(10, 35) << endl;
    cout << power(2, 10) << endl;
    return 0;
}