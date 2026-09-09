#include <stdio.h>

int main(){
    printf("Welcome!\n");
    printf("I will tell you the dates on which there is an official holiday in the year 2026\n");
    printf("Enter the Month(in integer format):");
    int month;
    scanf("%d",&month);
    if(month==1){
        printf("\nYou choose january\n");
        printf("There is an holiday on:5,9,20,26,30");
        printf("\nEnjoy your holidays!");
    }
    else if(month==2){
        printf("\nYou choose faburary\n");
        printf("There is an holiday on:4,9,10,21");
        printf("\nEnjoy your holidays!");
    }
    else if(month==3){
        printf("\nYou choose march\n");
        printf("There is an holiday on:14,19,20,25,29");
        printf("\nEnjoy your holidays!");
    }
     else if(month==4){
        printf("\nYou choose april\n");
        printf("There is an holiday on:1,9,11");
        printf("\nEnjoy your holidays!");
    }
     else if(month==5){
        printf("\nYou choose may\n");
        printf("There is an holiday on:14,15,20,28,29");
        printf("\nEnjoy your holidays!");
    }
     else if(month==6){
        printf("\nYou choose june\n");
        printf("There is an holiday on:5,9,10");
        printf("\nEnjoy your holidays!");
    }
     else if(month==7){
        printf("\nYou choose july\n");
        printf("There is an holiday on:7,17,27,29");
        printf("\nEnjoy your holidays!");
    }
     else if(month==8){
        printf("\nYou choose august\n");
        printf("There is an holiday on:10,15,29");
        printf("\nEnjoy your holidays!");
    }
     else if(month==9){
        printf("\nYou choose september\n");
        printf("There is an holiday on:8,9,15,25");
        printf("\nEnjoy your holidays!");
    }
     else if(month==10){
        printf("\nYou choose octuber\n");
        printf("There is an holiday on:2,10,19,21,25");
        printf("\nEnjoy your holidays!");
    }
     else if(month==11){
        printf("\nYou choose november\n");
        printf("There is an holiday on:12,14,20,25");
        printf("\nEnjoy your holidays!");
    }
     else if(month==12){
        printf("\nYou choose december\n");
        printf("There is an holiday on:14,20,25");
        printf("\nEnjoy your holidays!");
    }
    else{
        printf("You entered the wrong month!");
    }
}