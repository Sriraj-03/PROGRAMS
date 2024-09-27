#include <stdio.h>
#include<stdlib.h>
int a[10],b[10],e=0,o=0,esum=0,osum=0;
struct node{
    int data;
    struct node *next;
};
struct node *head;
struct node *head1=NULL;
struct node *head2=NULL;
struct node *head=NULL;
void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr=(struct node*)malloc(sizeof(struct node));
    
    if(ptr==NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);
        if(item%2==0){
        ptr->data=item;  
        if(head1==NULL)  
        {  
            ptr->next=NULL;  
            head1=ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp=head1;  
            while(temp->next!=NULL)  
            {  
                temp=temp->next;  
            }  
            temp->next=ptr;  
            ptr->next=NULL;  
            printf("\nNode inserted");  
          
        } } 
        else
        {
           ptr->data=item;  
        if(head2==NULL)  
        {  
            ptr->next=NULL;  
            head2=ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp=head2;  
            while(temp->next!=NULL)  
            {  
                temp=temp->next;  
            }  
            temp->next=ptr;  
            ptr->next=NULL;  
            printf("\nNode inserted");  
          
        }   
        }
    }

}  
void display1()  
{  
    struct node *ptr;  
    ptr=head1;  
    printf("\n");
    if(ptr==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        while(ptr!=NULL)  
        {  
            printf("%d   ",ptr->data);  
            ptr=ptr->next;  
        }  
    }  
}

void display2()  
{  
    struct node *ptr;  
    ptr=head2;  
    printf("\n");
    if(ptr==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        while(ptr!=NULL)  
        {  
            printf("%d   ",ptr->data);  
            ptr=ptr->next;  
        }  
    }  
}

void display()  
{  
    struct node *ptr;  
    ptr=head1;  
    printf("\n");
    if(ptr==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        while(ptr!=NULL)  
        {  
            printf("%d   ",ptr->data);  
            ptr=ptr->next;  
        }  
    } 
    ptr=head2;  
    if(ptr==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        while(ptr!=NULL)  
        {  
            printf("%d   ",ptr->data);  
            ptr=ptr->next;  
        }  
    }  
    printf("NULL");
}
int main() {
    int n,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    lastinsert();
    printf("\nEVEN ELEMENTS:");
    display1();
    printf("\nODD ELEMENTS:");
    display2();
    printf("\nthe final list:\n");
    display();

    
    return 0;
}