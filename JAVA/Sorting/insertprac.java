package Sorting;

public class insertprac {
    public static void main(String args[]){
        int arr[]={21,12,4,57,49,67,31,1};
        insertionSort(arr);
        printArray(arr);
    }
    public static void insertionSort(int arr[]){
    for(int i=0;i<arr.length;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    }
    public static void printArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
