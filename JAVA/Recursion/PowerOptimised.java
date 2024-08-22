package Recursion;
import java.util.*;
public class PowerOptimised {
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        System.out.println("Enter a value for finding its power: ");
        int a= s.nextInt();
        System.out.println("Enter the power: ");
        int b=s.nextInt();
        System.out.println(optimisedPower(a, b));
        
    }
    public static int optimisedPower(int a, int b){
        if(b==0){
            return 1;
        }
        int x=optimisedPower(a, b/2);
        int y=x*x;
        if(b%2!=0){
            return a*y;
        }
        return y;
    }
}
