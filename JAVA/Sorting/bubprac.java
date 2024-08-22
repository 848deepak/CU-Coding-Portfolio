package Sorting;

public class bubprac {
    public static void main(String args[]){
        int arr[]={7,28,91,32,54,17};
        bubbleSort(arr);
        findArray(arr);
    }
    public static void bubbleSort(int arr[]){
        for(int i=arr.length-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void findArray(int arr[]){
        for(int i=0;i<arr.length;i++){
        System.out.print(arr[i]+" ");
    }
}
}
