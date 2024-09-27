#include <stdio.h>

int main()
{
  int n,*a,**b;
  scanf("%d",&n);
    a=&n;
    b=&a;
    printf("%d %d %d",n,*a,**b);
    return 0;
}
