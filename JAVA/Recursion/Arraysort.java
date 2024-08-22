package Recursion;
import java.util.*;
public class Arraysort {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int a=s.nextInt();
        int arr[]=new int[a];
        System.out.println("Enter the "+a+" elements: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=s.nextInt();
        }
        for(int i=0;i<arr.length;i++){
            System.out.println("Element enterted at position [ "+i+" ] is: "+arr[i]);
        }
        System.out.println(ifSorted(arr, 0));
    }
    public static boolean ifSorted(int arr[],int i){
        if(arr[i]==arr.length-1){
            return true;
        }
        if(arr[i]>arr[i+1]){
            return false;
        }
        return ifSorted(arr, i+1);
    }
}
