package Recursion;
import java.util.*;
public class Power {
    public static void main(String args[]){
    Scanner s= new Scanner(System.in);
    System.out.println("Enter a term for finding its power: ");
    int a=s.nextInt();
    System.out.println("Enter the power : ");
    int b=s.nextInt();
        System.out.println(findPower(a, b));
    
}
    public static int findPower(int a,int b){
    if(b==0){
        return 1;
    }
    return a*findPower(a, b-1);
}
}
