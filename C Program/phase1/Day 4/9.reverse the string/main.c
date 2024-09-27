#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    for(int i=strlen(arr);i>=0;i--){
        printf("%c",arr[i]);
    }

    return 0;
}
