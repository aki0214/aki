#include <stdio.h>
int solve(int s, int t, int l, int*a, int* b, int*c, int N, int M, int L, int times){
    if(s==t)return times;

    for(int i = 0;i<N;i++){
        if()
    }




}


int main(void){

    int N, M, L, Q;
    scanf("%d %d %d", &N, &M, &L);
    int a[M], b[M], c[M];
    for(int i = 0;i<M;i++){
        scanf("%d %d %d", &a[i], &b[i], &c[i],);
                if(a[i]>b[i]){
            int tem = a[i];
            a[i] = b[i];
            b[i] = tem;
        }
    }

    scanf("%d", &Q);
    int s[Q], t[Q];
    for(int i = 0;i<Q;i++){
        scanf("%d %d", &s[i], &t[i]);
        if(s[i]>t[i]){
            int tem = s[i];
            s[i] = t[i];
            t[i] = tem;
        }
    }

    for(int i = 0;i<Q;i++){
        printf("%d", solve(s[i], t[i], L, a, b, c, N, M, L, 0));
}
return 0;
}