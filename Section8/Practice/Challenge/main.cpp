//Section 8 Challenge
/*
Write a program that asks the user for the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to proved change for the user.

In the US:
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents
1 penny is 1 cent
*/

#include <iostream>

using namespace std;

int  main() {
  int cents{};
  const int dollar{100};
  const int quarter{25};
  const int dime{10};
  const int nickel{5};
  const int penny{1};

  int dollar_output{};
  int quarter_output{};
  int dime_output{};
  int nickel_output{};
  int penny_output{};

  cout << "Enter how many cents you have: ";
  cin >> cents;

  dollar_output = cents/dollar;

  quarter_output = (cents%dollar)/quarter;

  dime_output = ((cents%dollar)-
                 (quarter_output*quarter))/dime;

  nickel_output = ((cents%dollar)-
                   (quarter_output*quarter)-
                   (dime_output*dime))/nickel;

  penny_output = ((cents%dollar)-
                  (quarter_output*quarter)-
                  (dime_output*dime)-
                  (nickel_output*nickel))/penny;



  cout << "Dollars: " << dollar_output;
  cout << "\nQuarters: " << quarter_output;
  cout << "\nDimes: " << dime_output;
  cout << "\nNickels: " << nickel_output;
  cout << "\nPenny: " << penny_output;


  cout << endl;
  return 0;
}
