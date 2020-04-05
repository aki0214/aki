#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)

struct food {
  int  time;
  int  deli;
  int man;
};


int main(){
int n,t;
cin >> n >> t;
vector<food> a(n);
rep(i,n){cin >> a[i].time >>a[i].deli;
    a[i].man=a[i].time*a[i].deli;
    }
    sort(a.begin(),a.end(),[](const food& x, const food& y){
        return x.man > y.man;
    });
}
