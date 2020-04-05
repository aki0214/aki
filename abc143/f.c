#include <stdio.h>
void dec(int* num, int* m, int k, int N){
    int max, head;
    for(int j=0;j<k;j++){
        max = 0;
        if(j>0){head = m[j-1];
            for(int i=0;i<N;i++){
                if(max<num[i] && head>= num[i])max=num[i];
                m[j]=i;
            }
        }else{
            for(int i=0;i<N;i++){
                if(max<num[i])max=num[i];
                m[j]=i;
            }
        }
    }
    for(int i = 0;i<k;i++){
        num[m[i]]--;
    }
}


int solve(int* num, int k,int l, int N){
    int c=0;
    for(int i = 0;i<N;i++){
        if(num[i]>0){c++;
        }
    }
    if(c<k)return l;
    int m[k];
    dec(num, m, k, N);

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