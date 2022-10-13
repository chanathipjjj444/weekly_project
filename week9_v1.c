#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int n_upper=0,n_lower=0,j;
    char my_string[100];
    char  right_now;
    scanf("%s", &my_string);

    for(int x=0;x<strlen(my_string);x++){
        right_now = my_string[x];
        if (isupper(right_now))
        {
            n_upper += 1;
        }
        else if(islower(right_now)){
            n_lower += 1;
        }
    }
        printf("the number of upper is %d\n",n_upper);
        printf("the number of lower is %d", n_lower);
    return 0;
}
//ุ65010179 ชนาธิป ใยเยี่ยม
