package DivideNConqr;

public class Sortrotatedaaray {
    public static void main(String args[]){
        int arr[]={7,9,12,17,27,49,69};
        int x=17;
        int u= sort(arr, 0, arr.length-1, x);
        System.out.println(u);
    }
    public static int sort(int arr[],int start, int end,int x){
        if(start>end){
            return -1;
        }
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<= x && x<=arr[mid]){
                return sort(arr, start, mid, x);
            }
            else{
                return sort(arr, mid+1, end, x);
            }
        }
        else{
            if(arr[mid]<=x && x<=arr[end]){
                return sort(arr, mid+1, end, x);
            }
            else{
                return sort(arr, start,mid-1,x);
            }
        }
    }
}
