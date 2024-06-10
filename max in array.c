#include<stdio.h>
int main()
 {
 int n,i,a[100],max;
 printf("Enter array size: ");
 scanf("%d",&n);
 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 max=a[0];
  for(i=0;i<n;i++){
    if(a[i]>max)
      max=a[i];
  }
  printf("Maximum elements = %d\n",max);
 }


                   //minimum in array
/*
#include<stdio.h>
int main()
 {
 int n,i,a[100],min=1000;
 printf("Enter array size: ");
 scanf("%d",&n);
 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }

  for(i=0;i<n;i++){
    if(a[i]<min)
      min=a[i];
  }
  printf("Minimum elements = %d\n",min);
 }
*/
