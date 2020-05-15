#include <iostream>

using namespace std;

int main() {

  // int num {};
  // const int lower{10};
  // const int upper{20};

  cout << boolalpha;

  // cout << "Enter and integer - the bounds are " << lower << " and " << upper <<":";
  // cin >> num;

  // bool within_bounds {false};
  //
  // within_bounds = (num > lower && num < upper );
  //
  // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

  // bool outside_bounds{false};
  // outside_bounds = (num < lower || num > upper);
  // cout << " num " << " is outside bounds of " << lower << " and " << upper << ":" << outside_bounds << endl;

  // bool on_bounds{false};
  // on_bounds = (num == upper || num == lower);
  // cout << num << " is on bounds of " << lower << " or " << upper << ":" << on_bounds;

  bool wear_coat{false};
  double temperature{};
  int wind_speed{};

  const int wind_speed_for_coat{25};
  const double temperature_for_coat{45};

  cout << "\nEnter the current Temperature(F):" << endl;
  cin >> temperature;
  cout << "\nEnter the current wind speed(mph)" << endl;
  cin >> wind_speed;

  wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
  cout << "\nYou should wear a coat us OR: " << wear_coat;

  wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
  cout << "\nYou should wear a coat us AND: " << wear_coat;



  cout << endl;
  return 0;
}
