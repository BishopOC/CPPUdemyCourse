#include <iostream>

using namespace std;

int main() {

  bool equal_result {false};
  bool not_equal_result {false};

  cout << boolalpha;

  int num1{}, num2{};
  cout << "Enter two numbers seperated by a space: ";
  cin >> num1 >> num2;
  equal_result = (num1 == num2);
  not_equal_result = (num1 != num2);
  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals)" << not_equal_result << endl;

  cout << endl;
  return 0;
}
