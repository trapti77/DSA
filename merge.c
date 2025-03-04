#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void merge(int a[],int mid,int low,int high)
{
int k,i,j,R[100];
i=low;
j=mid+i;
k=low;
while(i<=mid&&j<=high)
{
   if(a[i]<a[j])
   {
R[k]=a[i];
i++;
k++;
   }
   else 
   {
    R[k]=a[j];
    j++;
    k++;
   } 
}
while(i<=mid)
{
    R[k]=a[i];
  i++;
  k++;  
}
while(j<=high)
{
    R[k]=a[j];
    j++;
    k++;
}
for(int i=low;i<=high;i++)
{
    a[i]=R[i];
}
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}
int main()
{
    int n=6;
    int a[6]={5,12,6,8,11,1};
    printarray(a,n);
    printf("after merge sorting array.......\n");
    mergesort(a,0,6);
    printarray(a,n);
    return 0;
}