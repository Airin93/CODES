#include<stdio.h>
struct info{
int id;
char name[20];
int salary;
}per[15];

void sort(struct info per[], int n)
{
  struct info temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(per[i].salary<per[j].salary)
            {
                temp=per[i];
                per[i]=per[j];
                per[j]=temp;
            }
        }
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        printf("Enter ID : ");
        scanf("%d",& per[i].id);
        printf("Enter Name : ");
        scanf("%s",& per[i].name);
        printf("Enter Salary : ");
        scanf("%d",& per[i].salary);
    }
    sort(per,n);
     printf("\nSorted Employee Information:\n");
    printf("%-20s %-10s %-10s\\n","ID", "Name", "Salary");
    printf("\n----------------------------------------- \n");
    for (int i = 0; i < n; i++) {
        printf("%-20d %-20s %-10.2d\n", per[i].id,per[i].name, per[i].salary);
    }

}

