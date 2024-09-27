class porul{
    
public void print(int[] a,int n){
    for(int i=0;i<n;i++){
        System.out.print(a[i]+"  ");
    }
}
void max(int[] a,int n){
    int t=0,m=10000;
    for(int i=0;i<n;i++){
        if(t<a[i])
        t=a[i];
        if(m>a[i])
        m=a[i];
    }
    System.out.println();
    System.out.println("max "+t);
    System.out.println("min "+m);
}
int addsum(int[] a,int n){
    int t=0;
    for(int i=0;i<n;i++)
        t=t+a[i];
    return t;
    
}
void sorthalf(int[] a,int n){
    int mid=n/2;
    int i,temp=0;
    for(i=0;i<mid;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
        
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    }
    for(i=mid;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
        
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    }
    for( i=0;i<n;i++)
    System.out.print(" "+a[i]);
}

void secsm(int[] a,int n){
    int i,temp=0;
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
        
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    }
    System.out.println();
    System.out.println("Second smallest: "+a[1]);
}
int eve(int[] a,int n){
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        t++;
    }
    return t;
}
int odd(int[] a,int n){
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)
        t++;
    }
    return t;
}
int oc(int[] a,int n,int f){
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]==f)
        t++;
    }
    return t;
}
void allocc(int[] a,int n){
    int t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
            t++;
        }
        System.out.println(a[i]+" is occured "+t+" time/s");
        t=0;
    }
}
}