import java.util.Scanner;
public class switchpr {
    public static void main(String args[])
    {
        char choice;    
        //System.out.println("Enter number to match it's Week day");
        do{
            System.out.println("Enter number to match it's Week day");
            Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            switch (n) 
            {
                case 1:
                    System.out.println("SUNDAY");
                    break;
                case 2:
                    System.out.println("MONDAY");
                    break;
                case 3:
                    System.out.println("TUESDAY");
                    break;
                case 4:
                    System.out.println("WEDNESDDAY");
                    break;
                case 5:
                    System.out.println("THURSDAY");
                    break;
                case 6:
                    System.out.println("FRIDAY");
                    break;
                case 7:
                    System.out.println("SATURDAY");
                    break;
                default:
                    System.out.println("Enter Your Choice");
                    break;
            }
        
            System.out.println("Do you want to continue (Y/N)?: ");
            // Scanner in = new Scanner(System.in);
            // String ch = in.newLine();
            //char choice;
            choice = input.next().charAt(0);
        }       
        while((choice!='n')&&(choice!='N'));    
    }
}    