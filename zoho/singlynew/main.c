
#include <stdio.h>
#include <stdlib.h>
struct node{
    int item;
    struct node *next;
};
struct node *head;

void insertbeg(){
    struct node *ptr;
    int n;
    ptr=(struct node*)malloc(sizeof(struct node *));
    if(ptr==NULL)
    printf("error");
    else{
        scanf("%d",&n);
        ptr->item=n;
        ptr->next=head;
        head=ptr;
    }
    
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d  ",temp->item);
        temp=temp->next;
    }
    printf("\n");
}
void insertlast(){
    struct node *ptr,*temp;
    int n;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL){
        printf("Error");
    }
    else
    {
          scanf("%d",&n);
        if(head==NULL){
            ptr->item=n;
            ptr->next=NULL;
            head=ptr;
        }
        temp=head;
  
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ptr->item=n;
        temp->next=ptr;
        ptr->next=NULL;
    }
}
void searchandins(){
    int ele,f=0,n;
    struct node *temp,*ptr;
    scanf("%d",&ele);
    temp=head;
    if(temp==NULL){
        printf("no element in list\n");
    }
    else{
        while(temp!=NULL){
            
            if(temp->item==ele){
                f=1;
            break;}
            temp=temp->next;
        }
        if(f!=1)
        printf("No element present");
        else{
            ptr=(struct node*)malloc(sizeof(struct node *));
            scanf("%d",&n);
            ptr->item=n;
            ptr->next=temp->next;
            temp->next=ptr;
            
        }
    }
}

int main()
{
    insertlast();
    insertbeg();
    insertbeg();
    insertbeg();
    display();
    insertlast();
    insertlast();
    display();
    searchandins();
      display();
    return 0;
}
