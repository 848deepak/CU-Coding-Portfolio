package Function;
import java.util.*;
public class CheckPrime {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter a value for finding prime: ");
        int a=s.nextInt();
        findPrine(a);
    }
    public static boolean findPrine(int a){
        boolean x=true;
        for(int i=2;i<=Math.sqrt(a);i++){
            if (a%i==0){
                x=false;
                break;
            }
        }
        if(x){
            System.out.println(a+" is prime");
        }
        else{
            System.out.println(a+"is not a prime");
        }
        return true;
    }
}
