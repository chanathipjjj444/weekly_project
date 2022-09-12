#include<stdio.h>
int main(){
    int i,j,n,a,b,c;
    scanf("%d", &n);
    if(n%2 == 0){
    c = n/2;
    b = c;
    a = c;
    for(i=1;i <= n/2; i++){
        for(j=1;j <n ; j++){
            if(j==a || j == b){
                printf("*");
            }
            else
            printf("-");
        }
        a--;
        b++;
        printf("\n");
    }
    a++;
    b--;
    for(i=1; i <= n/2; i++){
        for(j=1; j<n; j++){
            if (j==a || j ==b)
            {
                printf("*");
            }
            else printf("-");
        }
        a++;
        b--;
        printf("\n");
    }
    }
    else{
        c = n/2+1;
        b = c;
        a = c;
        for(i=1;i <= n/2+1; i++){
        for(j=1;j <=n ; j++){

            if(j==a || j == b){
                printf("*");
            }
            else
            printf("-");
        }
        a--;
        b++;
        printf("\n");
    }
    a+= 2;
    b-= 2;
    for(i=2; i <= n/2+1; i++){
        for(j=1; j<=n; j++){
            if (j==a || j ==b)
            {
                printf("*");
            }
            else printf("-");
        }
        a++;
        b--;
        printf("\n");
    }
    }
}