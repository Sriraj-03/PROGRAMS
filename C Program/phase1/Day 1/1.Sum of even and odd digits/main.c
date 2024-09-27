#include <stdio.h>
void sumofdigits(int num){
    int rem,temp,esum=0,osum=0;
    temp=num;
    while(temp>0)
    {
     rem=temp%10;
     if(rem%2==0)
     esum=esum+rem;
     else
     osum=osum+rem;
     temp=temp/10;
    }
    printf("Even sum=%d\nOdd sum=%d",esum,osum);
}
int main() {
    int a;
  scanf("%d",&a);
  sumofdigits(a);

    return 0;
}