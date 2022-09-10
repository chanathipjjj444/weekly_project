#include<stdio.h>
int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

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
    default:
        printf("You got grade F");
        break;
    }
}