import java.util.*;
public class Main
{
	public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int s=0,t,n,r;
        n=sc.nextInt();
        t=n;
        while(t>0){
            r=t%10;
            s=s+r;
            t=t/10;
            
        }
        if(n%s==0)
		System.out.println("harshad");
		else
		System.out.println("not harshad");
	}
}
