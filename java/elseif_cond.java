import java.util.Scanner;

public class elseif_cond 
{
    
    public static void main(String[] avd)
    {
    int marks;
    System.out.print("Enter your marks :");
    Scanner kkk=new Scanner(System.in);

    marks=kkk.nextInt();

    if(marks>=35 && marks<=50)
    {
     System.out.println("You are pass :::");
    }
    else if (marks<=35)
    {
System.out.println("You are fail");
    }
    else if (marks>=50 && marks<=100)
    {
System.out.println("You are pass in first class :::");
    }
    else
    {
System.out.println("fail:::");
    }
    

    }
}

