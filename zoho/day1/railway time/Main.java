import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int[] rail=new int[4];
        for (int i=0;i<4; i++) {
            rail[i]=sc.nextInt();
            if(rail[i]>10){
                System.out.println("Invalid input");
                return;
            }
        }
        Arrays.sort(rail);
        if(rail[0]>=2){
            System.out.println("Invalid input");
                return;
        }
        
        int[] hr=new int[2];
        int n=4;
        for (int i=n-1;i>=0;i--){
            if (rail[i]<=2) {
                hr[0]=rail[i];
                rail[i]=-1;
                break;
            }
        }
        for (int i =n-1;i>=0;i--){
            if (rail[i]!=-1&&((hr[0]==2&&rail[i]<=3)||(hr[0]!=2&&rail[i]<=9))){
                hr[1]=rail[i];
                rail[i]=-1;
                break;
            }
        }
        int[] min=new int[2];
        for (int i=n-1;i>=0;i--){
            if (rail[i]!=-1&&rail[i]<=5){
                min[0]=rail[i];
                rail[i]=-1;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if (rail[i]!=-1) {
                min[1]=rail[i];
                rail[i]=-1;
                break;
            }
        }
        if (hr[0]!=-1&&hr[1]!=-1&&min[0]!=-1&&min[1]!=-1){
            System.out.printf("%d%d:%d%d", hr[0], hr[1], min[0], min[1]);
        }
        else {
            System.out.println("Invalid input");
        }
    }
}
