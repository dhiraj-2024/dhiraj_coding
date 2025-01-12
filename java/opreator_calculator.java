import java.util.Scanner;

public class opreator_calculator {


public static void main(String[] dhiraj)
{
    int a,b,c,choice;
    
    Scanner s=new Scanner(System.in);
    System.out.print("Enter num1  :");
    a=s.nextInt();
    System.out.print("Enter num2 :");
    b=s.nextInt();
    
    System.out.print("Enter your choice :");
    choice=s.nextInt();

    switch(choice)
    {
       case 1:c=a+b;
       System.out.println("Addition "+c);
       break;
       case 2:c=a-b;
       System.out.println("Substraction "+c);
       break;
       case 3:c=a*b;
       System.out.println("Multiplication "+c);
       break;
       case 4:c=a/b;
       System.out.println(" Division "+c);
       break;
       case 5:c=a%b;
       System.out.println(" Remender "+c);
       break;
       default:
       System.out.println("Invalid choice.....");





    }
}
    
}
