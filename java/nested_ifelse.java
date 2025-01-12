import java.util.Scanner;

public class nested_ifelse {

    public static void main(String[] agg)
    {
        int a,b,c;
         Scanner obj=new Scanner(System.in);
        System.out.println("enter num a:");
         a=obj.nextInt();
        System.out.println("enter num b:");
         b=obj.nextInt();
        System.out.println("enter num c:");
        c=obj.nextInt();
       
       
       
        
        if(a>b)
        {
            if(a>c)
                {
                 System.out.println("Maximum Number:" +a);
                }
            else
            {
              System.out.println("Maximum Number:" +c);
            }
            
        }
        else
        {
            if(b>c)
                {
                 System.out.println("Maximum Number:" +b);
                }
            else 
            {
             System.out.println("Maximum Number:" +c);
            }
        }

    }
    
}
