#include <iostream>

using namespace std;

int main() {

  int num1 {10}; //initialization
  int num2 {20}; //initialization

  num1 = num2; //assignment statement
  num1 = num2 = 1234; //chained assignment

  // num1 = "Frank"; error


  cout << "num1 is " << num1 << endl;
  cout << "num2 is " << num2 << endl;

  cout << endl;

  return 0;
}
