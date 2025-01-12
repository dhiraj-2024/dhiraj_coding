import java.util.Scanner;

public class ifcondn {
    public static void main(String[] dhi)
    {
        int pass;
        System.out.print("Enter your password:");
        Scanner obj=new Scanner(System.in);
        pass=obj.nextInt();

        if(pass==1234)
        {
            System.out.println("My name is : Dhiraj");
            System.out.println("My age is: 20");
            System.out.println("My contact number is: 7821957373");
            System.out.println("My address is : Nashik Adgaon");


        }
        else
        {
            System.out.println("Sorry your password is wrong::::");

        }
    }
}
