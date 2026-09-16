#include<stdio.h>

void printstring(char arr[]);

int main(){
    char firstname[20];
    char lastname[20];
    printf("Enter your first name:");
    scanf("%s",firstname);
    printf("Enter your last name:");
    scanf("%s",lastname);
    printf("Your name is:%s %s",firstname,lastname);
}