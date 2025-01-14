#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t,n,a[30];
//clrscr();
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
   for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
    }
    }
printf("sorted numbers are given below\n");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}

getch();
}