#include <stdio.h>
int main(){
    printf("Welcome!\nI will tell you'r grade according to your marks\n");
    int marks[3];
    printf("Enter your marks in Maths:");
    scanf("%d", &marks[0]);

    printf("Enter your marks in Physics:");
    scanf("%d", &marks[1]);

    printf("Enter your marks in Chemistry:");
    scanf("%d", &marks[2]);

    for(int i=0;i<3;i++){
        if (marks[i]>=90){
        printf("Hurray you got A in: %d subject\n",i);
        }

        else if (marks[i]>=80 && marks[i]<=89){
        printf("Good you got B in: %d subject\n",i);
        }

        else if (marks[i]>=70 && marks[i]<=79){
        printf("You got C in %d: subject\n",i);
        }

        else{
            printf("You need improvement in:");
            printf("%d: subject",i);
        }
    }

}