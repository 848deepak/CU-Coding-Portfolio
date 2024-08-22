package Array;

public class kadane {
    public static void main(String args[]){
        int arr[]={-4,51,14,7,-32,-1,-8,34};
       System.out.println( kadanalgo(arr));

    }
    public static int kadanalgo(int arr[]){
        int x=Integer.MIN_VALUE;
        int cs=0;
        for(int i=0;i<arr.length;i++){
           cs+=arr[i];
           if(cs<0){
            cs=0;
           }
        }
        int y=Math.max(cs, x);
        return y;
    }
}
 
