#include <iostream>

// This is a comment

/* 
 * this
 * is
 * a
 * multiline
 * comment
 * */

using std::cout;
using std::cin;
using std::endl;

int main() {
    int favorite_number;
    int least_favorite_number;
    cout << "What is your favorite number between 1-100?";
    cin >> favorite_number;
    cout << "What is your least favorite number between 1-100?";
    cin >> least_favorite_number;
    cout << "so what your saying is " << least_favorite_number << " can catch these hands, while "
    << favorite_number << " can just viiibe" << endl;
    return 0;
}
