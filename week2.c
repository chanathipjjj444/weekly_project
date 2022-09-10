#include<stdio.h>
int main(){
    int b,a,h,sum=0,day=0;
    // printf("Please enter a b h: ");
    scanf("%d %d %d",&a,&b,&h);
    while(1){
        sum += a;
        // printf("%d", sum);
        if(sum<h){
            sum -= b;
            // printf("%d",sum);
        }
        day +=1;
        if(sum >=h){
            printf("%d", day);
            break;
        }
    }
}