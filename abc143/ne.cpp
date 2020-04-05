#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)
int main(){
int n,c;
cin >> n;
vector<int> v(n);
rep(i,n)cin >> v[i];
sort(v.begin(), v.end());
rep(b,n)rep(a,b){
int l = b+1;
int ab= v[a]+v[b];
int r = lower_bound(v.begin(), v.end(), ab)-v.begin();

}
}