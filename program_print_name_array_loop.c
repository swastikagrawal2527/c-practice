#include<stdio.h>

void printstring(char arr[]);

int main(){
    char firstname[]="Swastik";
    char lastname[]="Agrawal";

    printstring(firstname);
    printstring(lastname);
}

void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}