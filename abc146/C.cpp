#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)
#define ll long long
int main(){
ll a,b,x,mid,le=0,ri=1e9+1;
cin >>a>>b>>x;
while(1){
mid = (le+ri)/2;
cout << ri<<endl;
if(a*mid+b*((ll)floor(log10(mid)+1))<=x){
    le = mid;
}else{
    ri = mid;
}
if(le == ri)break;
}
cout<<le<<endl;
    return 0;
}