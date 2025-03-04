#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int partion(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l+1;
    int j=h;
    int t;

    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
     
    } while (i<j);
    t=a[j];
    a[j]=a[l];
    a[l]=t;

   return j;

}
void quicksort(int a[],int l,int h)
{
int part;
if(l<h)
{
part=partion(a,l,h);
quicksort(a,l,part-1);
quicksort(a,part+1,h);
}
}
int main()
{
    int n=6;
    int a[6]={5,2,6,8,11,1};
    printarray(a,n);
    printf("after quick sorting array.......");
    quicksort(a,0,n-1);
    printarray(a,n);
    return 0;
}