#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int maxele(int a[],int n)
{
int max=INT_MIN;
for(int i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
return max;
}

void countsort(int *a,int n)
{
    int i,j;
int  max=maxele(a,n);
int*count=(int*)malloc((max+1)*sizeof(int));
for(int i=0;i<n;i++)
{
    count[i]=0;
}
for(int i=0;i<n;i++)
{
    count[a[i]]=count[a[i]]+1;
}

i=0;
j=0;
while(i<=max)
{
    if(count[i]>0)
    {
        a[j]=i;
        count[i]=count[i]-1;
        j++;
    }
    else{
    i++;
    }
}
}
int main()
{
    int n=6;
    int a[6]={5,2,6,8,11,1};
    printarray(a,n);
    printf("after count sorting array.......\n");
    countsort(a,n);
    printarray(a,n);
    return 0;
}