#include<stdlib.h>
#include<stdio.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;
void display()  
{  
    struct node *ptr;  
    printf("\n Doubly linked list\n");  
    ptr=head;  
    while(ptr!=NULL)  
    {  
        printf("%d -> ",ptr->data);  
        ptr=ptr->next;  
    }
    printf("NULL");
}  
void beg()  
{  
   struct node *ptr;   
   int item;  
   ptr=(struct node*)malloc(sizeof(struct node));  
   if(ptr==NULL)  
       printf("\nnode not created");  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next=NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next=head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   display();
   
}  }
int main(){
    beg();
    beg();
    beg();
    return 0;
}