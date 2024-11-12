#include<stdio.h>
int main(){
    int op1,op2;
    printf("Is the teacher talking ?");
    printf("\n 0 for yes , 1 for no\n");
    scanf("%d",&op1);
    printf("\n Are the students talking ?");
    printf("\n 0 for yes , 1 for no\n");
    scanf("%d",&op2);
        if ((op1==0) && (op2==0)){
                printf("Teacher: What the hell! Shut up!! ");
            }
            else if((op1==0) && (op2==1)){ 
                printf("Teacher: Happy! Happy! Happy!");
            }
        else if ((op1==1) && (op2==1))
            {
                printf("No teacher in the class!!");
            }
            else{
                printf("Teacher: Session ended!");
        }
}