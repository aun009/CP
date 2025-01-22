#include<bits/stdc++.h>
using namespace std;
#define ll long

bool prime(ll n) {
    for(int i=2; i*i <= n; i++) 
        if(n % i == 0)
            return false;

    return n > 1;
}

void seive(ll n) {
    bool primes[n+1];
    fill(primes, primes+n+1, true);
    primes[0] = primes[1] = false;

    for(int i=2; i<=n; i++) {
        if(primes[i]) {
            for(int j=i*2; j<=n; j++) {
                primes[j] = false;
            }
        }
    }
}

void seiveAdvanced(ll n) {
    bool primes[n+1];
    fill(primes, primes+n+1, true);
    primes[0] = primes[1] = false;

    for(int i=2; i*i <= n; i++) {
        if(primes[i]) {
            for(ll j = i*i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
}

void factorize(int n) {
    for(int i=2; i<=n; i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if(n > 1)
        cout << n << " ";
}


int main() {
    // cout << prime(1) << endl;
    factorize(13);
    int n = 1e9;
    int n2 = 1e9;
    cout << (4-9) % 4 << endl;

}