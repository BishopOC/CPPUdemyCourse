#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector <char> vowels {'a','e','i','o','u'};
  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  vector <int> test_scores {100, 98, 89};
  cout << "\nVectors using array syntax" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << "\nVectors using array syntax" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

  cout << "\nEnter three test scores:" << endl;
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  cout << "\nUpdated test scores:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << "\nAdd score to vector:" << endl;
  int score_to_add{0};
  cin >> score_to_add;

  test_scores.push_back(score_to_add);

  cout << "\nAdd one more score to vector:" << endl;

  cin >> score_to_add;

  test_scores.push_back(score_to_add);

  cout << "\nTest scores are now:" << endl;

  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;

  cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
  // cout << "This should cause an exception " << test_scores.at(10) << endl;


// Example of 2D vector

  vector <vector<int>> movie_ratings
  {
      {1,2,3,4},
      {1,3,3,4},
      {1,3,4,5}
  };
  cout << movie_ratings.at(0).at(1) << endl; //vector syntac
  cout << movie_ratings[0][1] << endl; //array sytnax




  return 0;
}
