#include <iostream>
using namespace std;

int main(){

  int num{0};
  const int target{10};

  cout << "Enter a number" << endl;
  cin >> num;

  if(num >= target){
    cout << "The number you enter is greater than " << target << endl;
    int diff{num - target};
    cout << num << " is " << diff << " greater than " << target << endl;
  } else {
    cout << "The number you entered is less than " << target << endl;
    int diff{target - num};
    cout << "The number you enter is " << diff << " less than " << target << endl;
  }

  cout << endl;
  return 0;
}
