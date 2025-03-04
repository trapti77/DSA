#include<stdio.h>
#include<stdlib.h>
void printsort(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
/*void bubblesort(int* a,int n)
{
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    printf("\n");
}*/
void bubblesortadaptive(int* a,int n)
{
    int t;
    int isSorted=0;
    for(int i=0;i<n-1;i++)
    {
        printf("\n");
        printf("number of passes:%d",i+1);
        isSorted=1;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            isSorted=0;
            }
        }
        printf("\n");
        if(isSorted)
        {
            return;
        }
    }
    printf("\n");
}
int main()
{
    int n=6;
    int a[6]={3,4,7,1,12,9};
    printsort(a,n);
   // bubblesort(a,n);
   bubblesortadaptive(a,n);
    printsort(a,n);
     return 0;
}
/*
*/
