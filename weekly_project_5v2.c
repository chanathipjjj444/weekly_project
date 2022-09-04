#include<stdio.h>
#include<string.h>
int main(){
    char text[50],text2[50],temp,temp2;
    int i,j,k;
    scanf("%s", &text);
    k = strlen(text)-1;
    for(i=0;i<strlen(text);i++,k--){
        temp = text[i];
        temp2 = text[k];
        strncat(text2, &temp2, 1);
    }
    printf("%s",text2);
}
// 65010179 นายชนาธิป ใยเยี่ยม 