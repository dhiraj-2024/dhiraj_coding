import java.util.Scanner;

public class while_loop {

    public static void main(String[] dhiraj)
    {
        int num;
        System.out.println("Enter any number : ");
        Scanner s=new Scanner(System.in);
        num= s.nextInt();
    
        while(num>0)
        {
         if(num%2==0)
         {
          System.out.println("Number is even :");
          break;
         }
        else
        {
          System.out.println("Number is odd :");
          break;
        }


        }

        
    
    }


}