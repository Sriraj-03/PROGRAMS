import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int n,s=0,t,rem;
	    Scanner sc=new Scanner(System.in);
	    n=sc.nextInt();
	    t=n;
	    while(t>0){
	        rem=t%10;
	        s=(s*10)+rem;
	        t=t/10;
	    }
	    if(s==n)
		System.out.println("pali");
		else
			System.out.println("not plai");
	}
}
