#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *n;
};

void add(struct node **h,int da){
    struct node *p;
    struct node *c;
    p=*h;
    c=(struct node*)malloc(sizeof(struct node));
    c->d=da;
    c->n=NULL;
    if(h==NULL){
      *h=c;   
    }
    else{
        while(p!=NULL)
        p=p->n;
    }
    p->n=c;
}

void head(struct node **h,int da){
    struct node *p,*c;
    p=*h;
    c=(struct node*)malloc(sizeof(struct node));
    c->d=da;
    *h=c;
    c->n=p;
}


void mid(struct node **h,int da,int pos){
    struct node *p,*c;
    p=*h;
    c=(struct node*)malloc(sizeof(struct node));
    c->d=da;
    for(int i=2;i<pos;i++){
        p=p->n;
    }
    c->n=p->n;
    p->n=c;
}

void end(struct node **h,int da){
    struct node *p,*c;
    p=*h;
    c=(struct node*)malloc(sizeof(struct node));
    c->d=da;
    while(p->n!=NULL){
        p=p->n;
    }
    c->n=NULL;
    p->n=c;
}
void headD(struct node **h){
    struct node *p=*h;
    if(*h==NULL){
        printf("Empty");
    }
    else{
        *h=(*h)->n;
    }
}

void headDM(struct node **h,int pos){
    struct node *p=*h;
    if(*h==NULL){
        printf("Empty");
    }
    else{
        for(int i=2;i<pos;i++){
            p=p->n;
        }
        p->n=p->n->n;
    }
}
void headDE(struct node **h){
    struct node *p=*h;
    if(*h==NULL){
        printf("Empty");
    }
    else{
    while(p->n->n!=NULL){
            p=p->n;
        }
        p->n=NULL;
    }
}

void Find(struct node *h,int key){
    while(h!=NULL){
        if(h->d==key){
        printf("The Element Is There");
        break;
    }
    h=h->n;
  }
}

int sum(struct node **h){
    struct node *t;
    t=*h;
    int sum=0;
    while(t!=NULL){
        sum+=t->d;
        t=t->n;
    }
    return sum;
}
void print(struct node *h){
    while(h!=NULL){
        printf("%d ",h->d);
        h=h->n;
    }
}
int main(){
    struct node *h=NULL;
    int d,p;
    do{
        scanf("%d",&d);
        if(d>0){
            add(&h,d);
        }
    }while(d>0);
    int a;
    printf("THE OPERATIONS:\n\t\t 1.Insert at head\n 2.Insert at middle\n 3.Insert at End\n 4.Delete at head\n 5.Delete at middle\n 6.Delete at end\n 7.Find a Element in the list\n 8.Sum of all Element in the List\n 9.Print the list\n 0.Exit\n ");
    do{
       scanf("%d",&a);
      switch(a){ 
       case(1):
       int ddd;
       printf("Enter a data:");
       scanf("%d",&ddd);
       head(&h,ddd);
       continue;
       case(2):
       int pp,dd;
       printf("Enter the data and position:");
       scanf("%d %d",&dd,&pp);
       mid(&h,dd,pp);
       continue;
       case(3):
       int d;
       printf("Enter a data");
       scanf("%d",&d);
       end(&h,d);
       continue;
       case(4):
       headD(&h);
       continue;
       case(5):
       int p;
       printf("Enter a position");
       scanf("%d",&p);
       headDM(&h,p);
       continue;
       case(6):
       headDE(&h);
       continue;
       case(7):
       int key;
       scanf("%d",&key);
       Find(h,key);
       continue;
       case(8):
       sum(&h);
       continue;
       case(9):
       print(h);
       continue;
      }
    }while(a);
    return 0;
}

