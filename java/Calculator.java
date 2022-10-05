import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        System.out.println("Input your marks in given subjects");
        Scanner mark = new Scanner(System.in);
        System.out.println("Subject1");
        float a = mark.nextFloat();
        System.out.println("Subject2");
        float b = mark.nextFloat();
        System.out.println("Subject3");
        float c = mark.nextFloat();
        System.out.println("Subject4");
        float d = mark.nextFloat();
        System.out.println("Subject5");
        float e = mark.nextFloat();
        float per = (a + b + c + d + e)/5;
        System.out.println("The percentage of these subjects is");
        System.out.println(per);
    }
}
