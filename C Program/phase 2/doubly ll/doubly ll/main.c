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
 void last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr=(struct node *) malloc(sizeof(struct node));  
   if(ptr==NULL)  
   {  
       printf("\nnode not created");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head==NULL)  
       {  
           ptr->next=NULL;  
           ptr->prev=NULL;  
           head=ptr;  
       }  
       else  
       {  
          temp=head;  
          while(temp->next!=NULL)  
          {  
              temp=temp->next;  
          }  
          temp->next=ptr;  
          ptr->prev=temp;  
          ptr->next=NULL;  
          }  
             
       }  
      display(); 
} 
void ranom()
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr=(struct node *)malloc(sizeof(struct node));  
   if(ptr==NULL)  
   {  
       printf("\n node not created");  
   }  
   else  
   {  
       temp=head;  
       printf("Enter the location");  
       scanf("%d",&loc);  
       for(i=0;i<loc;i++)  
       {  
           temp=temp->next;  
           if(temp==NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("Enter value");  
       scanf("%d",&item);  
       ptr->data=item;  
       ptr->next=temp->next;  
       ptr->prev=temp;  
       temp->next=ptr;  
       temp->next->prev=ptr;  
     display(); 
   }  
}  
 void dbeg()  
{  
    struct node *ptr;  
    if(head==NULL)  
    {  
        printf("\n Node not created");  
    }  
    else if(head->next==NULL)  
    {  
        head=NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        ptr=head;  
        head=head->next;  
        head->prev=NULL;  
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
display();  
}
void dlast()  
{  
    struct node *ptr;  
    if(head==NULL)  
    {  
        printf("\n Node not created");  
    }  
    else if(head->next==NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next!=NULL)  
        {  
            ptr=ptr->next;   
        }  
        ptr->prev->next=NULL;   
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}     
void dspecified()  
{  
    struct node *ptr,*temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr=head;  
    while(ptr->data!=val)  
    ptr=ptr->next;  
    if(ptr->next==NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(ptr->next->next==NULL)  
    {  
        ptr->next=NULL;  
    }  
    else  
    {   
        temp=ptr->next;  
        ptr->next=temp->next;  
        temp->next=ptr;  
        free(temp);  
        printf("\nnode deleted\n");  
    }     
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr=head;   
    if(ptr==NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data==item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr=ptr->next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
} 
void main ()  
{  
int choice =0;  
    while(choice != 9)  
    {  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Show\n8.search \n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beg();  
            break;  
            case 2:  
            last();  
            break;  
            case 3:  
            ranom();  
            break;  
            case 4:  
            dbeg();  
            break;  
            case 5:  
            dlast();  
            break;  
            case 6:  
            dspecified();  
            break;  
            case 7:  
            display();
            break;  
            case 8:
            search();
            break;
            case 9:  
            exit(0);  
            break;  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}