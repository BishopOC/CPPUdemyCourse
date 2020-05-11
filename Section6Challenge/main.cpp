
/*
Bishop's Carpet Cleaning Service
Charges:
  $25 per small room
  $35 per large room
  Sales tax 6%
  Estimates valid for 30 days

  Prompt user for the number of small and large rooms they would like cleaned
  and provide esimate such as:

Esimate for carpet cleaning service:
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
==========================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;


int main() {



  const int small_room_price {25};
  const int large_room_price {35};
  const double tax {0.06};
  const int expiry {30}; // Days
  int number_of_small_rooms {0};
  int number_of_large_rooms {0};

  cout << "Welcome to Bishops Room Cleaning Service" << endl;
  cout << "\nEnter how many small rooms you would like cleaned: " << endl;
  cin >> number_of_small_rooms;
  cout << "\nEnter how many large rooms you would like cleaned: " << endl;
  cin >> number_of_large_rooms;

  cout << "is git working?" << endl;
  cout << "Your price estimate is as follows:" << endl;
  cout << "\nNumber of small rooms: " << number_of_small_rooms << endl;
  cout << "Number of large rooms: " << number_of_large_rooms << endl;
  cout << "Price per small room: $" << small_room_price << endl;
  cout << "Price per large room: $" << large_room_price << endl;
  cout << "Cost: $" << (number_of_small_rooms * small_room_price) + (number_of_large_rooms * large_room_price) << endl;
  cout << "Tax: $" << ((number_of_small_rooms * small_room_price) + (number_of_large_rooms * large_room_price)) * tax << endl;
  cout << "=================================" << endl;
  cout << "Total Estimate: $" << ((number_of_small_rooms * small_room_price) + (number_of_large_rooms * large_room_price))
          + (((number_of_small_rooms * small_room_price) + (number_of_large_rooms * large_room_price)) * tax) << endl;
  cout << "This estimate is valid for " << expiry << "." << endl;

  return 0;
}
