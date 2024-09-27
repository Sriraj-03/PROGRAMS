import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a=1,c,b=1000;
		Scanner sc= new Scanner(System.in);
		System.out.println("1.withdraw\n\2.deposit\n3.check balance\n4.exit");
		
		while(a!=4){
		    a=sc.nextInt();
		switch(a){
		    case 1:{
		        c=sc.nextInt();
		       if (b<c)
		       System.out.println("insufficient balance");
		       else
		       b=b-c;
		break;}
		case 2:{
		    c=sc.nextInt();
		    if (c<0)
		    System.out.println("enter positive number");
		    else
		    b=b+c;
		    break;
		}
		case 3:
		    System.out.println("your balance is:"+b);
		    break;
		case 4:{
		    a=4;

		      System.out.println("thankyou");
		       break;}
		 default:
		    a=4;
		      
	}
}
}
}
