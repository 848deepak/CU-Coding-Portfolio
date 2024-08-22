package Sorting;
public class select {
    public static void main(String[] args) {
        int arr[]={24,19,7,68,92,71};
        selectionSort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static void selectionSort(int arr[]){
        for(int i=0;i<arr.length-2;i++){
            int min=i;
            for(int j=i+1;j<arr.length-1;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
                    int temp=arr[min];
                    arr[min]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    

