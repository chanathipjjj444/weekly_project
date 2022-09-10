#include<stdio.h>
int main(){
    int score;
    printf("Enter yourr score: ");
    scanf("%d", &score);
    if(score >= 0 && score <= 59){
        printf("You got grade f");
    }
    else if (score > 59 && score <= 69)
    {
        printf("You got grade D");
    }
    else if (score > 69 && score <= 79)
    {
        printf("You got grade C");
    }
    else if (score > 79 && score < 89)
    {   
        printf("You got grade B");
    }
    else if(score > 89 && score <= 100){
        printf("Well done you got grade A!!");
    }
    else{
        printf("Please enter value between 0-100");
    }

}