package balkcom;
import java.util.Scanner;
// Nick Balkcom
// Programming Assignment 1
// Takes input from the user and calculates price of a trip
public class Balkcom {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter the driving distance: ");
        double distance = input.nextDouble();
        
        System.out.println("Enter the miles per gallon: ");
        int mpg = input.nextInt();
        
        System.out.println("Enter the price per gallon: ");
        double ppg = input.nextDouble();
        
        double trip = (distance*mpg) * ppg;
        System.out.print("The trip will cost: $" + trip);
    }
}
