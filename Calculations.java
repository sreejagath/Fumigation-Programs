import java.util.Scanner;

public class Calculations {
public static void main(String[] args) {
        System.out.println("Enter two numbers : ");
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        System.out.println("Enter your selection : \n");
        System.out.println("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division");
        int selection= scanner.nextInt();
        MainCalculation calc = new MainCalculation();
        if(selection==1){
            int s = calc.addition(num1,num2);
            System.out.println("Result is : " + s);
        }
        else if(selection==2){
            int s = calc.substraction(num1,num2);
            System.out.println("Result is : " + s);
        }
        else if(selection==3){
            int s = calc.multiplication(num1,num2);
            System.out.println("Result is : " + s);
        }else if(selection==4){
            int s = calc.division(num1,num2);
            System.out.println("Result is : " + s);
        }else{
            System.out.println("Invalid Selection");
        }
    }
}
class MainCalculation{
    int addition(int num1,int num2){
        int sum = num1 + num2;
        return sum;
    }
    int substraction(int num1,int num2){
        int result = num1 - num2;
        return result;
    }
    int multiplication(int num1,int num2){
        int result = num1 * num2;
        return result;
    }
    int division(int num1,int num2){
        int result = num1 / num2;
        return result;
    }
}
