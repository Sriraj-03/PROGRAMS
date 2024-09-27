#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    arr[0]=toupper(arr[0]);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==' '){
            arr[i+1]=toupper(arr[i+1]);
        }
    }
    printf("%s",arr);
    return 0;
}
