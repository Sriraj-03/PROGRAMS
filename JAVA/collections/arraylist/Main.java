
import java.util.ArrayList ;
import java.util.Collections; 
import java.util.Scanner; 


public class Main
{
   public static void main(String[] args) {
       
       // Initialization of ArrayList 
       ArrayList<Integer> list1 = new ArrayList<>(); 
       ArrayList<String> list2 = new ArrayList<>(); 
       ArrayList<Boolean> list3 = new ArrayList<>(); 
        
       
       
       // 1 . Add Element in it . 
       list1.add(1); 
       list1.add(2);
       list1.add(3); 
       
       System.out.println(list1);
       
       // 2. Get Element Element 
        int element = list1.get(1);
        System.out.println(element);
        
       // 3. Add element b/w -> Add Element at specific Index 
       list1.add(1,5);
       System.out.println(list1);
       
       // 4. Set Element At specific specific Index 
       list1.set(1 ,4) ;
       System.out.println(list1);
       
       // 5. Delete Element from an Index 
       list1.remove(2);
       System.out.println(list1);
       
       //  6. Size of the list 
       int size = list1.size();
       System.out.println(size);
       
       // 7. Iterate on the ArrayList 
       for( int i = 0 ; i< list1.size() ; i++){
           System.out.print(list1.get(i)); 
       }
       
       // sort the element 
       Collections.sort(list1);
       System.out.println(list1);
       
       System.out.println(list1.isEmpty());
       
       
       // Directaly Intialise a of n size  
         Scanner myObj = new Scanner(System.in);

       // Read the size of the array list
       int n = myObj.nextInt();

       // Initialize the ArrayList with an initial capacity of n
       ArrayList<Integer> list4 = new ArrayList<>(n);

       // Add elements to the ArrayList
       for (int i = 0; i < n; i++) {
           list4.add(i);
       }

       // Print the ArrayList
       System.out.println(list4);
       
       list4.add(8); 
       System.out.println(list4);
   
   }
}