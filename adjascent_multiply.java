import java.util.Scanner;
public class adjascent_multiply {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the limit");
        int limit = in.nextInt();
        System.out.println("Enter the elements");
        int[] arr = new int[limit];
        int[] result = new int[limit];
        for (int i=0;i<limit;i++){
            arr[i] = in.nextInt();
        }
        for (int i=0;i<arr.length-1;i++){
             arr[i] = arr[i]*arr[i+1];
         }
         for (int i=0;i<limit;i++){
            result[i] = arr[i];
        }
        System.out.println("Resultant array is : " );
        for (int i=0;i<arr.length-1;i++){
             System.out.print(result[i]+" ");
         }
    }
}