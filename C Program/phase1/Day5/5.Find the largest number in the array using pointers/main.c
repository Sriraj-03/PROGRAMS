#include <stdio.h>

int main()
{
    int *a,n=1,max=1;
    while(n>0){
    scanf("%d",&n);
    a=&n;
    if(max>*a)
    max=max;
    else
    max=*a;
    }
    printf("%d",max);


    return 0;
}

