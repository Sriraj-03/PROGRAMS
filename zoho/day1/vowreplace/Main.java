import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        char[] a= s.toCharArray();
        int l=a.length;
        int c=0;
        char[] b= new char[l];
        for(int i=0;i<l;i++){
            
            if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U'){
                    b[c]=a[i];
                    c++;
                    a[i]='0';
            }
        }
        for(int i=0;i<l;i++){
            System.out.print(a[i]);
        }
        System.out.println();
         c=0;
        for(int i=l-1;i>=0;i--){
            if(a[i]=='0'){
                a[i]=b[c];
                c++;
            }
        }
        for(int i=0;i<l;i++){
            System.out.print(a[i]);
        }
    }
}