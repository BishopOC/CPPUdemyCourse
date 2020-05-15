/*
  Increment operator ++
  Decrement operator --

  Increments or decrements its operand by 1
  Can be used with integers, floating point types, and pointers

  Prefix ++num
  Postfix num++

  Do not overuse this operator
  Never use twice for the same variable in the same statement
*/

#include <iostream>

using namespace std;

int main() {

  int counter {10};
  int result {0};

// Example 1 - simple increment
  // cout << "Counter: " << counter << endl;
  //
  // counter = counter + 1;
  // cout << "Counter: " << counter << endl;
  //
  // counter++;
  // cout << "Counter: " << counter << endl;
  //
  // ++counter;
  // cout << "Counter: " << counter << endl;

// //Example 2 - preincrement
//   counter = 10;
//   result = 0;
//
//   cout << "Counter : " << counter << endl;
//   result = ++counter;
//   cout << "Counter : " << counter << endl;
//   cout << "Result : " << result << endl;
//
// //Example 3 - post-Increment
//   counter = 10;
//   result = 0;
//
//   cout << "Counter : " << counter << endl;
//   result = counter++;
//   cout << "Counter : " << counter << endl;
//   cout << "Result : " << result << endl;

// Example 4
  counter = 10;
  result = 0;

  cout << "Counter : " << counter << endl;
  result = ++counter + 10; //note preincrement

  cout << "Counter : " << counter << endl; // 11 due to preincrement
  cout << "Result : " << result << endl;

// Example 5
counter = 10;
result = 0;

cout << "Counter : " << counter << endl;
result = counter++ + 10; //note preincrement

cout << "Counter : " << counter << endl; // 11
cout << "Result : " << result << endl; //20 due to post-increment




  cout << endl;
  return 0;
}
