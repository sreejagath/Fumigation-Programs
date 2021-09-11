import java.util.Scanner;
public class multiarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter limit: ");
        int limit = sc.nextInt();
        Object[] array = getArray(limit);
        int[][] s = addArray(array,limit);
        displayArray(s);
    }
    static Object[] getArray(int limit){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements of array 1 : ");
        int[][] arr1=new int[limit][limit];
        for(int i=0;i<limit;i++){
            for(int j=0;j<limit;j++)
            arr1[i][j]=sc.nextInt();
        }
        System.out.println("The array is: ");
        for(int i=0;i<limit;i++){
            for(int j=0;j<limit;j++){
                System.out.print(arr1[i][j]+" ");
            }System.out.println();
        }
        System.out.println("Enter the elements of array 2 : ");
        int[][] arr2=new int[limit][limit];
        for(int i=0;i<limit;i++){
            for(int j=0;j<limit;j++)
            arr2[i][j]=sc.nextInt();
        }
        System.out.println("The array is: ");
        for(int i=0;i<limit;i++){
            for(int j=0;j<limit;j++){
                System.out.print(arr2[i][j]+" ");
            }System.out.println();
        }
        return new Object[]{arr1,arr2};
    }
    static int[][] addArray(Object[] array,int limit){
        int[][] arr1=(int[][])array[0];
        int[][] arr2=(int[][])array[1];
        int[][] sum=new int[limit][limit];
        for(int i=0;i<limit;i++){
             for(int j=0;j<limit;j++)
             sum[i][j]=arr1[i][j]+arr2[i][j];
         }
         return sum;
    }
    static void displayArray(int[][] s){
        System.out.println("Sum of array 1 and array 2: ");
    for(int i=0;i<s.length;i++){
        for(int j=0;j<s[i].length;j++){
            System.out.print(s[i][j]+" ");
        }
        System.out.println();
    }
    }
}
