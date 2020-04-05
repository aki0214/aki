#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
    long long h,w;
    cin >> h>>w;
    if(h>1&&w>1){
    cout << (h*w+1)/2 <<endl;
}else{
    cout << 1 <<endl;
}    return 0;


}