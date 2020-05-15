#include <iostream>

using namespace std;

int main() {

  int num1 {200};
  int num2 {100};

  // cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

  int result {0};

  result = num1+num2;
  cout << num1 << " + " << num2 << " = " << result << endl;

  result = num1-num2;
  cout << num1 << " - " << num2 << " = " << result << endl;

  result = num1/num2;
  cout << num1 << " / " << num2 << " = " << result << endl;

  result = num1*num2;
  cout << num1 << " * " << num2 << " = " << result << endl;

  // result = num2/num1
  // cout << num1 << " / " << num2 << " = " << result << endl; compile error due to int and not double

  result = num1%num2;
  cout << num1 << " % " << num2 << " = " << result << endl; //modular operator displays remainder value

  num1 = 10;
  num2 = 3;

  result = num1%num2;
  cout << num1 << " % " << num2 << " = " << result << endl;

  result = num1 * 10 + num2; //c++ uses PEMDAS

  cout << 5/10 << endl; // using integers does not diplay actual value
  cout << 5.0/10.0 << endl; //using floats displays actual value

  cout << endl;


  return 0;
}
