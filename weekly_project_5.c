#include<stdio.h>
#include<string.h>
int main(){
    char text[50], temp;
    int len;
    scanf("%s",&text);
    for(int i=strlen(text);i>=0 ;i--){
        printf("%c",text[i]);
    }
}
// 65010179 นายชนาธิป ใยเยี่ยม 
