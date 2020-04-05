#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)

int main(){
int N;
string S;
cin >>N;
cin >>S;
N=N%26;
rep(i,S.size()){
    if(S[i]+N<91)printf("%c", S[i]+N);
    if(S[i]+N>90)printf("%c", S[i]+N-26);
}

printf("\n");
    return 0;
}