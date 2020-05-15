#include <iostream>
using namespace std;
 int main() {

   //define conversion values in cents
   const int dollar_value{100};
   const int quarter_value{25};
   const int dime_value{10};
   const int nickel_value{5};
   const int penny_value{1};

   int change_amount{};

   //Solution 1: Not using modulo operator
   cout << "Enter change amount: " << endl;
   cin >> change_amount;

   int balance{},dollars{},quarters{},dimes{},nickels{},pennies{};

   dollars = change_amount / dollar_value;
   balance = change_amount - (dollars * dollar_value);

   quarters = balance / quarter_value;
   balance -= quarters * quarter_value;

   dimes = balance / quarter_value;
   balance -= dimes * dime_value;

   nickels = balance / nickel_value;
   balance -= nickels * nickel_value;

   pennies = balance;

   //Solution 2 using module

   dollars = change_amount / dollar_value;
   balance = change_amount % dollar_value;

   quarters = balance / quarter_value;
   balance %= quarter_value;

   dimes = balance / dime_value;
   balance %= dime_value;

   nickels = balance / nickel_value;
   balance %= nickel_value;

   pennies = balance;




   cout << endl;
   return 0;
 }
