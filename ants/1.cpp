#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(double i = 1;i<n;i++)


int main(){
    double N;
    double p=0;
    cin >> N;
    rep(i,N){
    p+=6.0/(i*i);
    }
    printf("%.9f\n",sqrt(p));
    return 0;
}