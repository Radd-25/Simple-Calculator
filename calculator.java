import java.util.Scanner;
public class calculator {

    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Calc v1.1");
    System.out.print("Input one : ");
    double a = scanner.nextDouble();
    System.out.print("Input two : ");
    double b = scanner.nextDouble();

    System.out.print("oprator (+,-,*,/) : ");
    String aritmatika = scanner.next();

    double hasil = 0;

    switch (aritmatika) {
        case "+":
            hasil = a + b;
            break;
        case "-":
            hasil = a - b;
            break;
        case "*":
            hasil = a * b;
            break;
        case "/":
                hasil = a / b;
            break;
        default:
            System.out.println("sys_error");
            break;
    }
    System.out.println("result : " + hasil);
    scanner.close();

    }
}
