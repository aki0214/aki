#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    string s;
    cin >>s;
    int len=s.size();
    rep(i,len/2) {
        if(s[i]!=s[len-i-1]) {
            cout << "No" <<endl;
            return 0;
        }
    }
    rep(i,len/4) {
        if(s[i]!=s[len/2-i-1]||s[len-i-1]!=s[len/2+i+1]) {
            cout << "No" <<endl;
            return 0;
        }
    }
    cout << "Yes" <<endl;
    return 0;
}