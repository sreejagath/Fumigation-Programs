import java.util.Scanner;
public class GradeCounter {
    public static void main(String[] args){
        Scanner mark = new Scanner(System.in);
        System.out.println("Enter the marks \n");
        System.out.println("Written Test :");
        float writtenTest = mark.nextFloat();
        System.out.println("Lab Exams :");
        float labExams = mark.nextFloat();
        System.out.println("Assignments :");
        float assignments = mark.nextFloat();
        float grade= (writtenTest*70)/100+ (labExams*20)/100 + (assignments*10)/100;
        System.out.println("Your overall grade = "+grade);
    }
}