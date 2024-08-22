package Function;
import java.util.*;
public class PrimeRange {
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the number till where you wanna print Primes: ");
        int a=s.nextInt();
        primesInRange(a);
    }
    public static boolean findPrime(int a){
        for(int i=2;i<=Math.sqrt(a);i++){
            if(a%i==0){
               
                return false;
            }
        }
          return true;
        }
        public static void primesInRange(int a){
            for(int i=2;i<=a;i++){
                if(findPrime(i)){
                    System.out.println(i+" ");
                }
            }
        }
    }

