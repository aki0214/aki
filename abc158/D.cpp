#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
    int q,temp,f,rev=0;
    string s;
    string c,head,tail;
    cin >>s>>q;
    rep(i,q){
        cin >>temp;
        if(temp==1){rev = (rev+1)%2;
        }else{
            cin >>f>>c;
            if((rev+f)%2==0){
                tail+=c;
            }else{
                head+=c;
            }
        }
    }
    reverse(head.begin(),head.end());
    s=head+s+tail;
    if(rev%2==1){
        reverse(s.begin(),s.end());
    };

    cout <<s<<endl;
    return 0;
}