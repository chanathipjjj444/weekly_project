#include<stdio.h>  
#include<stdlib.h>  
 int main()    
{    
int a, b;
printf("please enter 2 number: ");
scanf("%d %d",&a,&b);       
a=a*b;   
b=a/b;    
a=a/b;      
printf("\nswapped a=%d b=%d",a,b);       
return 0;  
}   
