#include<stdio.h>
int main(){
    int i,j,a,b,n;
    scanf("%d", &n);
    if (n%2 == 0 && n >=1 && n <= 1000)
    {
        a=n/2, b= n/2;
    for(i=1;i<= n; i++){
        for(j=1;j<=n-1; j++){
            if ((j==n/2 && (i == 1 || i == n))|| j == a || j ==b)
            {
                printf("*");
            }
            else printf("-");

        }
        if (i<n/2)
        {
            a-- , b++ ;
        }
        else if(i > n/2) {
            a++ , b--;
        }
        
        printf("\n");
    }
    }
    else if (n%2 != 0 && n >= 1 && n <= 1000) {
        a=n/2 + 1, b= n/2 + 1;
    for(i=1;i<= n; i++){
        for(j=1;j<=n; j++){
            if ((j==n/2 + 1 && (i == 1 || i == n))|| j == a || j ==b)
            {
                printf("*");            
            }
            else printf("-");

        }
        if (i<n/2+1)
        {
            a-- , b++ ;
        }
        else if(i >= n/2+1) {
            a++ , b--;
        }
        
        printf("\n");
    }

    return 0;
}
}