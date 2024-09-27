#include <stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int c=0;
    fgets(arr,100,stdin);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==' '){
            c++;
        }
    }
    printf("%d",c+1);
    return 0;
}
