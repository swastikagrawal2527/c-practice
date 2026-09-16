#include <stdio.h>

int printlength(char arr[]);

int main(){
    char name[50];
    printf("Enter your name(without giving any space):");
    fgets(name,50,stdin);
    printf("Length of your name is:%d",printlength(name));

    return 0;
}

int printlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}