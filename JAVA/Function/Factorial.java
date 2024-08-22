package Function;
import java.util.*;
public class Factorial {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the value to find the factorial: ");
        int a=s.nextInt();
           System.out.println("The factorial of "+a+" is : "+findFactorial(a));
    }
    public static int findFactorial(int a){
        int x=1;
        for(int i=a;i>=1;i--){
            x=x*i;
        }
        return x;
    }
    
}
