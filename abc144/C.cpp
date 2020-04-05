#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1;i<n;i++)
int main(){
long n, min;
cin >> n;
min = n-1;
rep(i, sqrt(n)+1){
    if(n%i == 0 && i + n/i -2 < min)min = i + n/i -2;
}

cout << min<<endl;
}