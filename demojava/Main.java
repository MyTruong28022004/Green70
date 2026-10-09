import functions.Add;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int res = Add.add(x,y);
        System.out.print(res);
        sc.close();
    }
}