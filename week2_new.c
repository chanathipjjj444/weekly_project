#include<stdio.h>
int main(){
    int i,j,inp;
    printf("enter a number: ");
    scanf("%d", &inp);
    for(i=1;i<inp;i++){
        for(j=1;j<inp;j++){
            printf("*/");
        }
        printf("\n")
    }


}