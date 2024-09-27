#include <stdio.h>
#include<stdlib.h>
int a[10];
int n=-1;
void push(){
    
    int item;
    if(n>10){
        printf("\nstack is full");
    }
    else{n++;
    scanf("\n%d",&a[n]);
    }
    
}
void pop(){
    if(n==-1)
    printf("\nthe stack is already empty\n");
    else
    n--;
}
void front(){
    if(n==-1)
    printf("\nempty");
    else
    printf("\n%d",a[n]);
}
void isfull(){
    if(n==10)
    printf("\nSTACK IS FULL");
    else
    printf("\nStack has %d elements left",(10-n));
}
void isempty(){
    if(n==-1)
    printf("\n stack is empty");
    else
    printf("\nStack is not full");
}
int main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
       printf("\n1.insert an element\n2.Delete an element\n3.front\n4.isfull\n5.isempty\n6.exit\n");  
        printf("\nEnter your choice");  
        scanf("%d",&choice);  
        
        switch(choice)  
        {  
            case 1:  
            push();  
            break;  
            case 2:  
            pop();  
            break;  
            case 3:  
            front();  
            break; 
            case 4: 
            isfull();
            break; 
            case 5:
            isempty();
            break;
            case 6:
            exit(0);
            break;
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    } 
}