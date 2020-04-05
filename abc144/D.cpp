#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1;i<n;i++)
int main(){
double a, b, x;
cin >>a>>b>>x;

cout << fixed << setprecision(10);
if(a*a*b<=2.0*x){
cout << atan(2.0*(b-x/(a*a))/a)/(2*M_PI)*360<<endl;
}else{cout << atan(a*b*b/2.0/x)/(2*M_PI)*360<<endl;
}
}