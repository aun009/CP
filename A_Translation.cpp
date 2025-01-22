#include<bits/stdc++.h>
//----------------------<><><><><><><><nacool><><><><><><><>-----------------------------//
using namespace std;

#define ONLINE_JUDGE nacool2004
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// Debugging helpers
#ifndef nacool2004
    #define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map<T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// Prime check
template <class T> bool isPrime(T n) {
    if (n <= 1) return false;
    for (T i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Binary exponentiation
template <class T> T binpow(T base, T exp, T mod) {
    T result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// GCD and LCM
template <class T> T gcd(T a, T b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

template <class T> T lcm(T a, T b) {
    return (a / gcd(a, b)) * b;
}

// Sieve of Eratosthenes
vector<bool> prime(1e6 + 5, true);

void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1e6 + 5; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 1e6 + 5; j += i) {
                prime[j] = false;
            }
        }
    }
}

// Ceil function
template <class T> T ceil(T numerator, T denominator) {
    return (numerator + denominator - 1) / denominator;
}

// Modular arithmetic helpers
ll mod_add(ll a, ll b, ll m) {return (((a % m + b % m) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {return (((a % m * b % m) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {return (((a % m - b % m) % m) + m) % m;}

// Solution function
void solve() {
    // TODO: Add logic for the problem here
    string s1,  s2;
    cin >> s1 >> s2;
    
    int n = s1.length();

    string s2_rev = s2;
    reverse(all(s2_rev));

    if(s1.length() != s2.length()) cout << "NO" << nline;
    else if(s1 == s2_rev) cout << "YES" << nline;
    else cout << "NO" << nline;

    return;  // End of the solution function
}

// Main function
int main() {
    fastio();
    #ifndef nacool2004
        freopen("Errorf.in", "w", stderr);
    #endif

    // ll t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}