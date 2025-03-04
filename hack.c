#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int s[n];
  int x,y,z,p,q;
  for(int i=1;i<=n;i++)
  {
     s[i];
  }
   for(int i=0;i<k;i++)
   {
       for(int j=0;j<n;j++)
       {
           x=i;
           y=j+1;
           z=x&y;
           p=x|y;
           q=x^y;
       }
        printf("%d\n",z);
       printf("%d\n",p);
        printf("%d\n",q);
   }
   
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
