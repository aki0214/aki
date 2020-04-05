#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)
double tow(int n){
    if(n == 1)return 1;
    return ((double)n)*tow(n-1);
}

int main(){
int n;
cin >> n;
double sum = 0;
int a[n], b[n];
rep(i,n)cin>>a[i]>>b[i];
rep(i,n){
    rep(j,i){
        sum += tow(n-1)*sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
    }
    for(int j = i+1;j<n;j++){
        sum += tow(n-1)*sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
    }
}
printf("%.10f\n", sum/tow(n));


}