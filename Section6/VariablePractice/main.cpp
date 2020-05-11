#include <iostream>

using namespace std;

int main() {
    
    int turnips_bought {0};
    int current_price_per_turnip {0};
    int initial_price_per_turnip {92};
    
    cout << "The initial price you bought each turnip for is: " << initial_price_per_turnip << endl;
    cout << "How turnips did you buy: ";
    cin >> turnips_bought;
    
    cout << "What is the current price: ";
    cin >> current_price_per_turnip;
    
    int initial_cost = turnips_bought * initial_price_per_turnip;

    cout << "Your initial cost is: " << initial_cost << endl;
    
    int current_total = current_price_per_turnip * turnips_bought;
    
    cout << "Your profit is: " << current_total - initial_cost;
    
    
    return 0;
}
