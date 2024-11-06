#include<stdio.h>
int main(){
    int ch;
    printf("1. joe\n2. rachel\n3. monica\n4. chandler\n5. phoebe\n6. ross");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("dumb\nfoodie\nentertainer\n");
            break;
        case 2:
            printf("witty\nstylish\nconfident");
            break;
        case 3:
            printf("organised\ncompetitive\nclean-freak\n");
            break;
        case 4:
            printf("sarcastic\nawkard\n\ngoofy");
            break;
        case 5:
            printf("quirky\ncreative\nunfiltered");
            break;
        case 6:
            printf("intelligent\npassionate\nwhiny");
            break;
        default: printf("go die");
        break;
    }
}