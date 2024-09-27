#include <stdio.h>
int a[100];
 int choice,pos,n,ele,ser,in=0;
void search(int n,int ser ,int a[]){
    int f=0;
    for(int i=0;i<n;i++){
        if(ser==a[i]){
            printf("\nelement is found at  :%d ",i+1);
            f=0;
        }
    }
    if(f==1){
            printf("\n element is not found");
        }
}
void insert(int ele,int in,int a[]){
    a[in]=ele;
}
void position(int pos,int a[],int in,int ele){
    for(int i=in;i>pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=ele;
}

void print(int a[],int n){
    for(int i=0;i<n;i++)
    printf("%d    ",a[i]);
}
int main()
{  
do{
   start: printf("\n1.Create\n2.SEARCH\n3.insert at end\n4.delete at end\n5.insert at pos\n6.delete at pos\n7.display\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        {
            printf("\nenter the size:   ");
         scanf("%d",&n);
         printf("\narray is created");
         break;
        }
        case 2:
        {
            printf("\nenter the element to be searched:   ");
         scanf("%d",&ser);
         search(n,ser, a);
         break;
        }
        case 3:
        {
            printf("insert at the end");
            scanf("%d",&ele);
            insert(ele,in,a);
           in++;
            printf("\n element is added successfully");
            break;
            
        }
        case 4:
        {
            printf("\n delete at the end");
            if(pos<in)
            a[in-1]='\0';
            else
            a[pos]='\0';
           in--;
            printf("\n deletion at end is successfully");
            break;
        }
        case 5:
        {
            printf("\ninsert at the position");
            scanf("%d %d",&pos,&ele);
            if(in==0){
                printf("the array is empty");
                break;
            }
            if(pos>in){
                in=n-pos;
            }
            else
            in++;
            position(pos,a,in,ele);
            printf("\nelement has been added successfully");
            break;
            
        }
        case 6:{
            printf("\n delete at the position");
            scanf("%d",&pos);
        
            a[pos]='\0';
            printf("\nelement has been deleted");
            break;
        }
        case 7:
        {
                if(in==0){
                printf("the array is empty");
                break;}
                print(a,n);
                break;        
        }
        default:
        {
            printf("\n wrong choice try again\n");
            goto start;
        }
        
    }
}
while(choice>0&&choice>0);
   

    return 0;
}