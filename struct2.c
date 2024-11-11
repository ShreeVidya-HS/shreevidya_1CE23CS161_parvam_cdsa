#include<stdio.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;

    };
    struct person p1;
    printf("enter the name: ");
    fgets(p1.name,sizeof(p1.name),stdin);
    p1.name[strcspn(p1.name,"\n")]=0;
    printf("enter marks: ");
    scanf("%f",&p1.marks);
    printf("enter age: " );
    scanf("%d",&p1.age);
    printf("\nage: %d\n",p1.age);
    printf("name: %s\n",p1.name);
    printf("marks: %.2f\n",p1.marks);
    return 0;
}

