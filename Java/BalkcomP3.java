package balkcom;
import java.util.Scanner;
// Nick Balkcom
// Programming Assignment 3
// Takes input from the user and displays length of s1 and s2, the first character of s2,
// concatenation of s1 and s2, changes s2 to uppercase, checks to see if s1 and s2 are equal,
// and checks to see if s1 is a substring of s2
public class BalkcomP3 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        // First string variable
        String s1 = input.next();
        System.out.print("Enter another string: ");
        // Second string variable
        String s2 = input.next();
        System.out.println("The length of the first string is: " + s1.length());
        System.out.println("The length of the second string is: " + s2.length());
        System.out.println("The first character of the second string is: " + s2.charAt(0));
        System.out.println("The concatenation of the first and second string is: " + s1 + " " + s2);
        System.out.println("The uppercase version of the second string is: " + s2.toUpperCase());
        if (s1.equalsIgnoreCase(s2))
            System.out.println("s1 and s2 are equal.");
        else
            System.out.println("s1 and s2 are not equal.");
        if (s2.contains(s1))
            System.out.println("s1 is a substring of s2.");
        else
            System.out.println("s1 is not a substring of s2.");
    }
}
