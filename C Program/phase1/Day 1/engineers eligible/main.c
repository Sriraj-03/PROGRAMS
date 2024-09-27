#include <stdio.h>

int main()
{
    int t,e,m,p,c,bcs,ave,tot,count=0;
 printf("enter the tamil mark\n");
 scanf("%d",&t);
 printf("enter the english mark\n");
 scanf("%d",&e);
 printf("enter the maths mark\n");
 scanf("%d",&m);
 printf("enter the Physics mark\n");
 scanf("%d",&p);
 printf("enter the chemistry mark\n");
 scanf("%d",&c);
 printf("enter the B/CS mark\n");
 scanf("%d",&bcs);
 ave=p+c+bcs;
 tot=ave+t+e+m;
 if((((e>=70)&&(e<=100))&&((t>=60)&&(t<=100)))&&(((m>=80)&&(m<=100))&&((bcs>=75)&&(bcs<=100)))){
     if((ave>=200)&&(ave<=300)){
         count=1;
     }
     }
     if(((count==1)&&((tot>=430))&&(tot<=600)))
     printf("ELIGIBLE");
     else if(((count==1)&&((tot<=430))&&(tot<=600)))
     printf("WAITING LIST");
     else
     printf("NOT ELIGIBLE");

}
