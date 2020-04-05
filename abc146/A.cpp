#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)

int main(){
string you[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
string S;
cin >> S;
rep(i,7){
    if(you[i]==S)cout << 7-i<<endl;
}

    return 0;
}