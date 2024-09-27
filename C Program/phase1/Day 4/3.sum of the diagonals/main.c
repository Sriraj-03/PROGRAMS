#include <stdio.h>

int main()
{
   int n,m,i,j,sum=0;
   scanf("%d %d",&n,&m);
   int a[n][m],b[m][n];
   if(n==m){
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
          scanf("%d",&a[i][j]);
       }
   }
   
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
         if(i==j)
         sum=sum+a[i][j];
       }

    
   }       printf("\nthe sum of the diagonal is:%d",sum);}
   else{
       
    printf("invalid syntax");
   return 0;}
    return 0;
}
