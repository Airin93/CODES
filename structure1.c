#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct student p1,p2,p3,p4;
    p1.id=1;
    strcpy(p1.name,"aishi");
    p1.salary=100.60;
    printf("person info: \n");
    printf("%-10d %-10s %-10f\n",p1.id,p1.name,p1.salary);

     p2.id=2;
    strcpy(p2.name,"eva");
    p2.salary=500.60;
    printf("person info: \n");
    printf("%-10d %-10s %-10f",p2.id,p2.name,p2.salary);
}








