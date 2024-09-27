#include<stdio.h>
int main(){
    int n,i,m=0,c=0,rem=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        m=a[i];
        while(m>0){
            rem=m%10;
            if(rem==6){
                c=1;
                break;
            }
            m=m/10;
        }
        if(c==1)
        printf("6 ");
        else
        printf("0 ");
        c=0;
    }
    return 0;
}
