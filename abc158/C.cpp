#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
int a,b,ans=-1;
cin >>a>>b;
rep(i,10010){
    if(floor(i*0.08)==a&&floor(i*0.1)==b){
        if(i<10001)ans=i;
        break;
    }
}
cout <<ans<<endl;
    return 0;
}