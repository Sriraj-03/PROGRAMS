import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n,m,j,i,c;
	    n=sc.nextInt();
	    m=sc.nextInt();
	    for(j=n;j<=m;j++){
	        c=0;
	        for(i=2;i<j;i++){
	        if(j%i==0)
	        c++;
	        
	    }
	      if(c==0)
	        System.out.println(j+" ");  
	    }
	}
}
