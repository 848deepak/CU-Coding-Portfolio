package Recursion;
import java.util.*;
public class fact {
    public static void main(String args[]){
    Scanner s= new Scanner(System.in);
    System.out.println("Enter a number for finding the factorial: ");
    int a=s.nextInt();
        System.out.println(findFact(a));
}
    public static int findFact(int a){
        if (a==0){
            return 1;
        }
        //int fnm1=findFact(a-1);
         int fn=a*findFact(a-1);
         return fn;
    }
}