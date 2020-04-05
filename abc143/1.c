#include <stdio.h>
int main(void){

int N, m;
scanf("%d", &N);
int a[N];
m = 0;
for(int i = 0;i<N;i++){
    scanf("%d", &a[i]);
}

for(int i = 0;i<N;i++){
    for(int j = i+1;j<N;j++){
        for(int k = j+1;k<N;k++){
            if(a[i]<a[j]+a[k] && a[j]<a[i]+a[k] && a[k]<a[j]+a[i])m++;
        }
    }
}



printf("%d\n", m);
    return 0;
}