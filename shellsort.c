#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void shellsort()
{
    
}

int main()
{
    int n=6;
    int a[6]={5,2,6,8,11,1};
    printarray(a,n);
    printf("after quick sorting array.......");
    shellsort(a,0,n-1);
    printarray(a,n);
    return 0;
}