import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner (System.in);
	    int n,i,j;
	    n=sc.nextInt();
	    n=n+n;
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            if((i==j)||(i+j==n-1))
	            System.out.print("x");
	            else
	            System.out.print(" ");
	        }
	        System.out.println();
	    }
	}
}
