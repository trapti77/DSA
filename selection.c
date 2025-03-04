
#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void selectionsort(int *a,int n)
{
    int min,t;
 for(int i=0;i<n;i++)
 {
    min=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[min]>a[j])
        {
            min=j;

        }
    }
    t=a[i];
    a[i]=a[min];
    a[min]=t;
 }   
}
int main()
{
    int n=6;
    int a[6]={13,12,5,3,2,1};
    printarray(a,n);
    printf("selection sort.............\n");
    selectionsort(a,n);
     printarray(a,n);
     return 0;
}