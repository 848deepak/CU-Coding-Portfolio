package Array;
import java.util.*;
public class Subar1 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements required for array: ");
        int a =s.nextInt();
        int arr[]=new int[a];
        System.out.println("Enter the "+a+" elements: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=s.nextInt();
        }
        for(int i=0;i<arr.length;i++){
            System.out.println("Element entered at position [ "+i+" ] is: "+arr[i]);
        }
        System.out.println("Max sum formed by elements is: "+Kadan(arr));    
    }

    public static int subArraySum(int arr[]){
        int currentsum=0;
        int maxsum=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                currentsum=0;
                for(int k=i;k<=j;k++){
                currentsum+=arr[k];
                }
                System.out.print(currentsum+" ");
                System.out.println();
                if(currentsum>maxsum){
                maxsum=currentsum;
                }
            }
        }
        return maxsum;
    }
    public static void subArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                for(int k=i;k<j;k++){
                    System.out.print(arr[k]+ " ");
                }
            }
        }
    }
    public static int Kadan(int arr[]){
        int currentsum=0;
        int maxsum=Integer.MIN_VALUE;
        int ncurrentsum=0;
        int nmaxsum=Integer.MAX_VALUE;
        for(int i=0;i<arr.length;i++){
            currentsum+=arr[i];
            if(currentsum<0){
                currentsum=0;
            }
            maxsum=Math.max(maxsum, currentsum);
        }
         if(currentsum==0){
            for(int i=0;i<arr.length;i++){
                ncurrentsum+=arr[i];
                nmaxsum=Math.min(nmaxsum, ncurrentsum);
                return nmaxsum;

            }
        }
       
        return maxsum;
    }
}
