package Function;
import java.util.*;
public class Binomial {
    public static void main(String args[]){
        Scanner s =new Scanner(System.in);
       System.out.println("Enter the value of n: ");
       int n=s.nextInt();
       System.out.println("Enter the value of r: ");
       int r=s.nextInt();
       System.out.println("Binomial coefficient for given values of n and r is: "+binomial(n, r));

    }
    public static int findFactorial(int a){
        int x=1;
       for(int i=a;i>=1;i--){
        x*=i;
        }
        return x;
    }
    public static int binomial(int n, int r){
        int factn=findFactorial(n);
        int factr=findFactorial(r);
        int factnmr=findFactorial(n-r);
        int x=factn/(factr*factnmr);
        return x;
    }
}
