#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector <int> vector1 {};
  vector <int> vector2 {};

  int push_back_value{0};
  cout << "Enter value of 10: " << endl;
  cin >> push_back_value;
  vector1.push_back(push_back_value);

  cout << "Enter value of 20: " << endl;
  cin >> push_back_value;
  vector1.push_back(push_back_value);

  cout<< "\nVector 1 contains: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  cout << "The size of vector 1 is " << vector1.size() << endl;



  cout << "Enter value of 100: " << endl;
  cin >> push_back_value;
  vector2.push_back(push_back_value);

  cout << "Enter value of 200: " << endl;
  cin >> push_back_value;
  vector2.push_back(push_back_value);

  cout<< "\nVector 2 contains: " << endl;
  cout << vector2.at(0) << endl;
  cout << vector2.at(1) << endl;
  cout << "The size of vector 2 is " << vector1.size() << endl;


  vector <vector<int>> vector_2d {};
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout <<"\n2D vector elements:" << endl;
  cout << vector_2d.at(0).at(0) << endl;
  cout << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(1).at(1) << endl;

  cout << "\nChanged element 0 of vector1 to 1000:" << endl;
  vector1.at(0) = 1000;

  cout <<"\nUpdated 2D vector elements:" << endl;
  cout << vector_2d.at(0).at(0) << endl;
  cout << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(1).at(1) << endl;

  cout<< "\nVector 1 contains: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;




  return 0;
}
