#include <stdio.h>
int main()
{
   int i,n,*a,sum=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       a=&arr[i];
       sum=*a+sum;
   }
   printf("\n%d",sum);
    return 0;
}
