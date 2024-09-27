import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a;
		Scanner sc= new Scanner(System.in);
		a=sc.nextInt();
		if(((a%400==0)||(a%100!=0))&&(a%4==0))
		System.out.println("LEAP YEAR");
		else
		System.out.println("not a leap yr");
	}
}
