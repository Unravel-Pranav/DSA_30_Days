import java.sql.SQLOutput;
import java.util.Scanner;

public class Starecase {
    public static void main(String[] args) {
        System.out.println("Enter the rows");
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=0;i<=row-1;i++)
        {
            for(int j=1;j<=row;j++)
            {
                if(j<row-i)
                {
                    System.out.print("x");
                }
                else {
                    System.out.print("#");
                }
            }
            System.out.print("\n");
        }
    }
}
