import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int i,j,n;
	    n=sc.nextInt();
	    for(i=1;i<=n;i++){
	        for(j=i;j<n;j++){
	            System.out.print("  ");
	        }
	         for(j=1;j<=i;j++){
	            System.out.print("& ");
	        }
	        System.out.println();
	    }
	
	}
}
