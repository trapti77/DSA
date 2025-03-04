#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  int x,y,z=0,p=0,q=0;

   for(int i=1;i<n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
        x=i;
        y=j;
           z=x&y;
          if(x&y>z && x&y<k)
          {
            z=x&y;
          }
          p= x|y;
          if(x|y>p&&x|y<k)
          {
          p= x|y;
          }
          q=x^y;
          if(x^y>q&&x^y<k)
          {
          q=x^y;
          }
           
       }
        
   }
   printf("%d\n%d\n%d\n",z,p,q);
   
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
