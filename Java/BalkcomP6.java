package balkcom;
import java.util.Scanner;
// Nick Balkcom
// Programming Assignment 6
// Write a program that creates an array of 10 integers. 
// Ask the user to enter the subscript (index) of an element, 
// then displays the element located at that subscript.
// If the subscript entered is out of bounds (less than 0 or greater than length - 1),
// display the message "Out of Bounds".
public class BalkcomP6 {
    public static void main (String args[]){
        Scanner input = new Scanner(System.in);
        int[] array = new int[10];
        for (int i = 0; i < array.length; i++){
            array[i] = i + 1;
        }
        
        System.out.println("Enter an integer between 1 and 10: ");
        int num = input.nextInt() - 1;
        
        try{
            int returned = returnSubscript(array,num);
            System.out.println("This index contains the number: " + returned);
        }
        catch(IndexOutOfBoundsException ex){
            System.out.println("Out of Bounds");
        }
    }
    public static int returnSubscript(int[] array, int index)throws IndexOutOfBoundsException{
        if (index < 0){
            throw new IndexOutOfBoundsException("Out of Bounds");
        }
        else if (index > (array.length - 1)){
            throw new IndexOutOfBoundsException("Out of Bounds");
        }
        else{
            return array[index];
        }
    }
}
