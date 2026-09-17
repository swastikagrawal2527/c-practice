#include <stdio.h>

struct address{
    int hnum;
    int block;
    char city[100];
    char state[100];
};

void printinfo(struct address add);

int main(){
    struct address add[5];
    printf("Enter details of 1st person\nEnter house number:");
    scanf("%d",&add[0].hnum);
    printf("Enter block:");
    scanf("%d",&add[0].block);
    printf("Enter city:");
    scanf("%s",add[0].city);
    printf("Enter state:");
    scanf("%s",add[0].state);

    printf("Enter details of 2nd person\nEnter house number:");
    scanf("%d",&add[1].hnum);
    printf("Enter block:");
    scanf("%d",&add[1].block);
    printf("Enter city:");
    scanf("%s",add[1].city);
    printf("Enter state:");
    scanf("%s",add[1].state);

    printf("Enter details of 3rd person\nEnter house number:");
    scanf("%d",&add[2].hnum);
    printf("Enter block:");
    scanf("%d",&add[2].block);
    printf("Enter city:");
    scanf("%s",add[2].city);
    printf("Enter state:");
    scanf("%s",add[2].state);

    printf("Enter details of 4th person\nEnter house number:");
    scanf("%d",&add[3].hnum);
    printf("Enter block:");
    scanf("%d",&add[3].block);
    printf("Enter city:");
    scanf("%s",add[3].city);
    printf("Enter state:");
    scanf("%s",add[3].state);

    printf("Enter details of 5th person\nEnter house number:");
    scanf("%d",&add[4].hnum);
    printf("Enter block:");
    scanf("%d",&add[4].block);
    printf("Enter city:");
    scanf("%s",add[4].city);
    printf("Enter state:");
    scanf("%s",add[4].state);

    printinfo(add[0]);
    printinfo(add[1]);
    printinfo(add[2]);
    printinfo(add[3]);
    printinfo(add[4]);

}

void printinfo(struct address add){
    printf("adress is:%d,%d,%s,%s\n",add.hnum,add.block,add.city,add.state);
}