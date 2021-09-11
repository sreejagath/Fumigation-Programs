import java.util.Scanner;
public class IncomeTaxCalculation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the annual income : ");
        int income = sc.nextInt();
        if(income<250000){
            System.out.println("Income tax = 0");
        }
        else if(income>=250000&&income<500000){
            float tax = (income*5)/100;
            System.out.println("Income tax = " + tax);
        }
        else if(income>=500000&&income<1000000){
            float tax = (income*20)/100;
            System.out.println("Income tax = " + tax);
        }
        else if(income>=1000000&&income<5000000){
            float tax = (income*5)/100;
            System.out.println("Income tax = " + tax);
        }else{
            System.out.println("Undefined Range");
        }
    }
}
