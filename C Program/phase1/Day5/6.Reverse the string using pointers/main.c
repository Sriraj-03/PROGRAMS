#include <stdio.h>
#include<string.h>
int main()
{
    char *c,arr[100];
    scanf("%[^\n]",arr);
    for(int i=strlen(arr);i>=0;i--){
        c=&arr[i];
        printf("%c",*c);
    }
    
    return 0;
}
