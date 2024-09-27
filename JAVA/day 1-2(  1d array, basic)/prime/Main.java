import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n,i,c=0;
	    n=sc.nextInt();
	    for(i=2;i<n;i++)
	    if(n%i==0)
	    c++;
	    if(c==0)
	    System.out.println(n+"is prime");
	    else
	    System.out.println(n+"is not prime");
	
	}
}
