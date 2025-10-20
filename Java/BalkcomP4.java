package balkcom;
// Nick Balkcom
// Programming Assignment 4
// Uses two methods for converting feet to meters and meters to feet,
// and makes a chart displaying feet 1-10 and meters 20-65 with increments of 5
public class BalkcomP4 {
    public static void main (String args[]){
        footMeterChart();
    }
    public static double footToMeter (double feet){
        double meter = 0.305 * feet;
        return meter;
    }
    public static double meterToFeet (double meter){
        double feet = 3.279 * meter;
        return feet;
    }
    public static void footMeterChart (){
        System.out.print("Feet\tMeter\n");
        for (double f = 1.0; f <= 10.0; f += 1.0){
             System.out.print(f);
             System.out.print(" \t" + footToMeter(f));
             System.out.println();
        }
        System.out.println();
        System.out.print("Meter\tFeet\n");
        for (double m = 20.0; m <= 65.0; m += 5.0){
             System.out.print(m);
             System.out.print(" \t" + meterToFeet(m));
             System.out.println();
        }
    }
}
