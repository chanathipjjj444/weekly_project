#include<stdio.h>
int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    if(score >= 0 && score <= 100){
        switch (score/10)
        {
        case 10:
            printf("You got grade A!!");
            break;
        case 9:
            printf("You got grade A!!");
            break;
        case 8:
            printf("You got grade B");
            break;
        case 7:
            printf("You got grade C");
            break;
        case 6:
            printf("You got grade D"); 
            break;
        case 5:
        printf("You got grade F"); 
        break;
            case 4:
        printf("You got grade F"); 
        break;
            case 3:
        printf("You got grade F"); 
        break;
            case 2:
        printf("You got grade F"); 
        break;
            case 1:
        printf("You got grade F"); 
        break;
            case 0:
        printf("You got grade F"); 
        break;

        }
        }
    else
        printf("Please enter a valid value between 0-100");
}
