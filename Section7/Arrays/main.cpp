#include <iostream>

using namespace std;

int main() {

  char numbers[] {'a','e','i','o','u'};

  cout << "\nVowel displayed a: " << numbers[0];
  cout << "\nVowel displayed o: " << numbers[3] << endl;

  numbers[0] = 'b';

  cout << "\nVowel is now consinant: " << numbers[0] << endl;

  return 0;
}
