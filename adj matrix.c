#include<stdio.h>
int vertices;
int i,j;
int main()
{

    printf("Enter the number of vertices: ");
    scanf("%d",&vertices);
    int a[vertices][vertices];
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            a[i][j]=0;
        }
    }
    while(i!=-1 && j!=-1)
    {
        printf("Enter an edge from source to destination: ");
        scanf("%d %d",&i,&j);
        a[i][j]++;

    }
    printGraph(a);
}
void printGraph(int a[vertices][vertices])
{
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
