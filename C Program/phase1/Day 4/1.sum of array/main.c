#include <stdio.h>
void getting(int a,int b){
    int i,j;
    int arr[a][b];
     int sum=0,ar[a][b],br[a][b];
     printf("\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&br[i][j]);
        }
    }
     printf("\n");
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           sum=ar[i][j]+br[i][j];
           printf("%d ",sum);
       }
       printf("\n");
   }
}
int main()
{
   int n,m,p,q;
   scanf("%d %d",&n,&m);
   scanf("%d %d",&p,&q);
   if(m==q&&n==p){
       printf("Matrix sum can be performed");
       getting(n,m);
   }
   else{
       printf("matrix sum cannot be performed");
     return 0;
   }
  
    return 0;
}
