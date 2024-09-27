#include <stdio.h>

int main()
{
        int a,b,temp;
        int *a1,*b1;
        scanf("%d %d",&a,&b);
        a1=&a;
        b1=&b;
        temp=*a1;
        *a1=*b1;
        *b1=temp;
        printf("%d %d",a,b);

    return 0;
}
