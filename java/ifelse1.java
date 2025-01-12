import java.util.Scanner;

public class ifelse1 {
    

     public static void main(String[] avd)
    {
        int age;
        System.out.print("Enter your age :");
        Scanner obj=new Scanner(System.in);
        age=obj.nextInt();

        if(age>=20)
        {
            System.out.print("You can vote :");

        }
        else
        {
            System.out.print("You are not able to vote:");
        }

    }
}
