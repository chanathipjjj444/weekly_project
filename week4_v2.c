#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=1;j<=(2*n)-1; j++){
            if(j <= i || j>= 2*n-i || i==n){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<= 2*n-1;j++){
            if (j<= n-i || j >= n+i)
            {
                printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
    }
}
