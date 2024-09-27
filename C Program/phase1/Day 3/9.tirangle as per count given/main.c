#include <stdio.h>

int main()
{
     int n,i,j,temp;
    scanf("%d",&n);
    temp=n;
    for(i=0;i<=n;i++){
        
        for(j=0;j<i;j++){
            if(temp>0){
            printf("@ ");
                temp--;
            }
         
            }
            printf("\n");
}
    return 0;
}
