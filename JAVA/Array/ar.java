package Array;
import java.util.*;
public class ar {
    public static void main(String args[]){
    Scanner s= new Scanner(System.in);
    System.out.println("Enter the number of elements for array: ");
    int a=s.nextInt();
    int arr[]=new int[a];
    System.out.println("Enter the "+a+" elements in array: ");
    for(int i=0;i<arr.length;i++){
    arr[i]=s.nextInt();
    }
    for(int i=0;i<arr.length;i++){
        System.out.println("Element entered at position [ "+i+" ] is : "+arr[i]);
    }
    System.out.println(maxEle(arr));
    }
    public static int maxEle(int arr[]){
        int x=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>x){
                x=arr[i];
            }
        }
        return x;
    }
}
