package balkcom;
import java.util.Scanner;
// Nick Balkcom
// Programming Assignment 5
// Write a program that asks the user to enter an integer. 
// Store the integers in an array. Allow for up to 10 integers. 
// When the user enters -1, the program should end. 
// Print the number of integers entered as well as the number of times each integer was entered.
public class BalkcomP5 {
    public static void main (String args[]){
        Scanner input = new Scanner(System.in);
        int[] array = new int[10];
        int k = 0;
        for (int i = 0; i < 10; i++){
            System.out.println("Enter an integer between 1 and 50,(-1) to end");
            int num = input.nextInt();
            if(num > 0){
                array[k] = num;
                k++;
            }
            else if (num == -1){
                break;
            }
        }
        countNumbers(array);
    }
    public static void countNumbers (int[] array){
        // Setting length of array with out zeros
        int length = array.length;
        for(int x = 0; x < array.length; x++){
            if(array[x] == 0){
                length--;
            }
        }
        System.out.println("The number of integers was " + length);
        
        // Goes through each element once
        for (int j = 0; j < array.length -1; j++){
            int number = array[j];
            int numCount = 0;
            // Compares with another element
            for(int y = 0; y < array.length; y++){
                if(number == array[y]){
                    numCount++;
                }
            }
            // Prints how mant times element has occured
            if (number > 0){
                System.out.println(number + " occured " + numCount + " times");
            }
        }
        
    }
}
