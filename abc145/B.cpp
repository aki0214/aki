#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)
int main(){
int n;
string a;
cin >> n;
cin >> a;
if(n%2 == 0){
    if(a.substr(0,n/2) ==a.substr(n/2, n)){
        printf("Yes\n");
        return 0;
        }
    }
    cout << "No" << endl;
}