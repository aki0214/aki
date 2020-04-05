#include <bits/stdc++.h>
using namespace std;

int solve(int* num, int k,int l, int N){
    int c=0;
    for(int i = 0;i<N;i++){
        if(num[i]>0){c++;
        }
    }
    if(c<k)return l;

    sort(num,num+N);
    for(int i = 0;i<k;i++){
        num[N-i-1]--;
    }

    return solve(num, k, l+1, N);
}


int main(void){
    int N;
    scanf("%d", &N);
    int a[N], num[N], numsave[N];
    for(int i = 0;i<N;i++){
        scanf("%d", &a[i]);
        num[i] = 0;
    }
    for(int i = 0;i<N;i++){
        num[a[i]-1]++;
    }
    for(int i = 0;i<N;i++){
        numsave[i]=num[i];
    }

    for(int k = 1;k <N+1;k++){
        for(int j = 0;j<N;j++){
            num[j]=numsave[j];
        }

        printf("%d\n", solve(num, k, 0, N));
    }

    return 0;
}