import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    int a=0,b=1,n,c;
	    n=sc.nextInt();
	    System.out.print(a+" "+b+" ");
	    while(n>0){
	        c=a+b;
	        a=b;b=c;
	        System.out.print(c+" ");
	        n--;
	    }
	        
	    }
	}

