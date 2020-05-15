//Section 8
// Mixed Type Expression
/*
  Ask the user to enter 3 integers
  Calculate the sume of integers
  then calculate the avg of the 3 integers

  Display the 3 integers entered
  the sum of the 3 integers
  and the avg of the 3 integers
*/

#include <iostream>

using namespace std;

int main() {
  int total {0};
  int num1{}, num2{}, num3{};
  const int count{3};

  cout << "Enter 3 integers seperated by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;

  double average {0.0};

  average = static_cast<double>(total) / count; //casts total as a double and count is used to double divide

  cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
  cout << "The sume of the numbers is: " << total << endl;
  cout << "The average of the numbers is: " << average << endl;

  cout << endl;
  return 0;
}
