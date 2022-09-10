#include<stdio.h>
int main(){
    int x=3, y=5,z;
    for(int num=1;x*num < 1000;num++){
        z += (x*num);
    }
    for(int num=1; x*num < 1000;num++){
        z += (y*num);
    }
    // for(int i =15,num=1;i*num < 1000;num++){
    //     z -= i*num;
    // }
    
    printf("%d",z);
}