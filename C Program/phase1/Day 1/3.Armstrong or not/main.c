#include <stdio.h>
#include <math.h>
int countdigits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
int isArmstrong(int n)
{
    int digits=countdigits(n); 
    int sum=0; 
    int temp=n;
    while (temp>0)
    {
        int d=temp%10;
        sum+=pow(d,digits); 
        temp /= 10;
    }
    return (sum==n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}
