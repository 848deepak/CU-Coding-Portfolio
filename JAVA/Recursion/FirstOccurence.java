package Recursion;
import java.util.*;
public class FirstOccurence {
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
            System.out.println("Element entered at position [ "+i+" ] is : "+arr[i]);
        }
        System.out.println("Enter the element you wanna find out: ");
        int key=s.nextInt();
        System.out.println("Element first occured at position: "+ifSorted(arr, key, 0));
    }
    public static int ifSorted(int arr[],int key,int i){
        if (i==arr.length) {
            return -1;
        }
        if(arr[i]==key){
            return i;
        }
        return ifSorted(arr, key, i+1);
    }
}
