#include<stdio.h>
#include<string.h>
int main() {
    char a[100],b[100],c[100][100];
    int i,n,f=0,g=0,j;
    scanf("%s",a);
    n = strlen(a);
    b[0] = ' ';
    for(i=0;i<n;i++) { 
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u') {
            b[g] = a[i]; g+=1; } 
            else { 
                if(b[0]!=' ') {
                    for(j=0;j<g;j++) 
                    c[f][j] = b[j];
    f+=1; g = 0; b[0] = ' ';
    }
    }
    }
    if(b[0]!=' ') {
        for(i=0;i<g;i++) 
        c[f][i] = b[i];
        f+=1; }
        i = 0;
        int t = 1;
        while(i<n) {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
                printf("%c",a[i]); i+=1; }
                else {
                    printf("%s",c[f-t]); t+=1; int r = 0; 
        while(r==0) { 
            i+=1; if(a[i]=='a' || a[i]=='i' || a[i]=='e' || a[i]=='u' || a[i]=='o')
            r+=1; 
            
        }
        }
        }
    return 0;
}