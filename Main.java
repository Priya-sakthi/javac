import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    int num ;
   System.out.println("Enter the number :");
  Scanner s=new Scanner(System.in);
 num=s.nextInt();
    boolean flag = false;
    for (int i = 2; i <= num / 2; ++i) {
      // condition for nonprime number
      if (num % i == 0) {
        flag = true;
        break;
      }
    }
    if (!flag)
      System.out.println(num + " is a prime number.");
    else
      System.out.println(num + " is not a prime number.");
  }
}