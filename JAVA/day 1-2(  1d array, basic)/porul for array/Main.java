import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n,i,sum,o,e,f,occ;
	    n=sc.nextInt();
	    porul p=new porul();
	    int[] a=new int[n];
	    for(i=0;i<n;i++)
	    a[i]=sc.nextInt();
	    p.print(a,n);
	    p.max(a,n);
	    sum=p.addsum(a,n);
	    System.out.println("Sum is "+sum);
	    p.sorthalf(a,n);
	    p.secsm(a,n);
	    o=p.odd(a,n);
	    e=p.eve(a,n);
	    System.out.println("odd is "+o);System.out.println("even is "+e);
	    f=sc.nextInt();
	    occ=p.oc(a,n,f);
	    System.out.println();
	    System.out.println("occurance of "+f+"  is "+occ);
	    System.out.println();
	    
	    p.allocc(a,n);
	    
	}


}

