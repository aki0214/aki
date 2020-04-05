#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
    long long a,b,c;
    cin >>a>>b>>c;
    if(4*a*b<(c-a-b)*(c-a-b)&&c-a-b>=0){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}