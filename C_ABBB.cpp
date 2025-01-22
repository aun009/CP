#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int TC;
    cin>>TC;

    while (TC--){
        string s;
        cin>>s;

        int stk=0;

        for(int x=0; x<s.size(); ++x){
            if (stk && s[x]=='B') stk--;
            else stk++;
        }
        cout<<stk<<endl;
    }
}