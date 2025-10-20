
x = 0;
quarter = 0;
dimes = 0; 
nickels = 0;
pennies = 0;
sub1 = 0;
sub2 = 0;
sub3 = 0;
x = int(input("Enter  amount of change: "));
if(0 < x <= 100):
    quarter = x // 25;
    print("Quarters: ",quarter);
    sub1 = x % 25;
    dimes = sub1 // 10;
    print("Dimes: ",dimes);
    sub2 = sub1 % 10;
    nickels = sub2 // 5;
    print("Nickels: ",nickels);
    sub3 = sub2 % 5;
    pennies = sub3 // 1;
    print("Pennies: ",pennies);
else:
    print("Entered wrong value! Pplease pick number between 0 and 100.")
    