#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
    printf("Welcome!\n");
    printf("I can store data of 3 students\n");
    for(int i=1;i<=3;i++){
        char sname[50];
        int sroll;
        float scgpa;
        printf("Enter the name of %d student:",i);
        scanf("%s",sname);
        printf("Enter the roll number of %d student:",i);
        scanf("%d",&sroll);
        printf("Enter the cgpa of %d student:",i);
        scanf("%f",&scgpa);
        struct student s;
    strcpy(s.name,sname);
    s.roll=sroll;
    s.cgpa=scgpa;

    printf("For student ");
    printf("%d",i);
    printf("\nName is:%s",s.name);
    printf("\nRoll number is:%d",sroll);
    printf("\nCgpa is:%f\n",scgpa);
    }

}