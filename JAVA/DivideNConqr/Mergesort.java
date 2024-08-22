
package DivideNConqr;
import java.util.*;
public class Mergesort {
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int a=s.nextInt();
        int arr[]= new int[a];
        System.out.println("Enter the "+a+" terms for array: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=s.nextInt();
        }
        for(int i=0;i<arr.length;i++){
            System.out.println("Element entered at position [ "+i+" ] is: "+arr[i]);
        }
        mergeS(arr, 0, arr.length-1);
        for(int i=0;i<arr.length;i++){
            System.out.println("Sorted elements after using the technique of merge sort at position [ "+i+" ] is: "+arr[i]);
        }
    }
    public static void mergeS(int arr[],int st, int end){
        int mid= st+(end-st)/2;
        if(st>=end){
            return;
        }
        mergeS(arr, st, mid);
        mergeS(arr, mid+1, end);
        mergeit(arr, mid, end, st);
    }
    public static void mergeit(int arr[],int mid, int end, int st){
        int temp[]=new int[end-st+1];
        int i=st;
        int j=mid+1;
        int k=0;
        while(i<=mid && j<=end){
            if(arr[i]<arr[j]){
                temp[k]=arr[i];
                i++;
            }
            else{
                temp[k]=arr[j];
                j++;
            }
            k++;
            while(i<=mid){
                temp[k++]=arr[i++];
            }
            while(j<=end){
                temp[k++]=arr[j++];
            }

            for(i=st, k=0;k<temp.length;k++,i++){
                arr[i]=temp[k];
            }
            
        }
    }
}