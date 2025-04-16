import java.util.Scanner;
public class fibo{
public static void main(String[] args) {
int n , firstTerm = 0, secondTerm = 1;
System.out.println("Enter number :");
Scanner s=new Scanner(System.in);
n=s.nextInt();
 System.out.println("Fibonacci Series till " + n + " terms:");
 for (int i = 1; i <= n; ++i) {
System.out.print(firstTerm + ", ");
// compute the next term
int nextTerm = firstTerm + secondTerm;
firstTerm = secondTerm;
secondTerm = nextTerm;
    }
  }
}
