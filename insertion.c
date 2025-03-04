#include<stdio.h>
void printarray(int *a,int n)
{
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
}
void insertionsort(int* a,int n)
{
int key,j;
for(int i=0;i<n;i++)
{
    key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
}
int main()
{
    int n=6;
    int a[6]={3,12,7,65,54,1};
    printarray(a,n);
    insertionsort(a,n);
    printarray(a,n);
    return 0;
}