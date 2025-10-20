package balkcom;
import java.util.Scanner;
// Nick Balkcom
// Programming Assignment 2
// Takes input from the user and etermines whether it is divisible by 5 and 6, 
// whether it is divisible by 5 or 6, 
// and whether it is divisible by 5 or 6 but not both
public class BalkcomP2 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter an integer: ");
        int num = input.nextInt();
        
        if(num < 0){
            System.out.println("Error: Invalid Input!");
        }
        else{
            
            int num5 = num % 5;
            int num6 = num % 6;
            
            // 5 and 6
            System.out.println("Is your integer divisible by 5 and 6?");
            if(num5 == 0 && num6 == 0){
                System.out.println("True");
            }
            else{
                System.out.println("False");
            }
            // 5 or 6
            System.out.println("Is your integer divisible by 5 or 6?");
            if(num5 == 0 || num6 == 0){
                System.out.println("True");
            }
            else{
                System.out.println("False");
            }    
            // 5 or 6 but not both
            System.out.println("Is your integer divisible by 5 and 6?");
            if(num5 == 0 ^ num6 == 0){
                System.out.println("True");
            }
            else{
                System.out.println("False");
            }
        }
    }
}

