#include<stdio.h>
int main(){
    int i,j,n,a,l;
    scanf("%d", &n);
    a = 2*n-1;
    l = a;
    for(i=1;i <=a;i++){
        for(j=1;j<=a;j++){
            if(i ==1 || i == j|| i == 2*n-1|| j == l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        l--;
        printf("\n");
    } 
    return 0;
}
//  65010179 นาย ชนาธิป ใยเยี่่ยม  