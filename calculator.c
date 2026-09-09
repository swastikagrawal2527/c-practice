#include<stdio.h>

float main(){
     printf("Welcome!\n");
    printf("I am a simple calculator\n");
    printf("Enter your 1st number then operator(+,-,*,/) then 2nd number");
    float n1;
    float n2;
    char op;
    scanf("%f",&n1);
    scanf("%c",&op);
    scanf("%f",&n2);
    if(op=='+'){
        printf("%f",n1+n2);
    }
    else if(op=='-'){
        printf("%f",n1-n2);
    }
    else if(op=='*'){
        printf("%f",n1*n2);
    }
    else if(op=='/'){
        printf("%f",n1/n2);
    }
    else{
        printf("Invalid operator");
    }
    printf("Thankyou");
}
   