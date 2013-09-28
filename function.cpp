// example function

#include <iostream>
using namespace std;

// declaration of function "add"

int add(int first_num, int second_num);  // function prototype

int main() {
  int first_number, second_number, result;
  // cin >> first_number;
  // cin >> second_number;
  cin >> first_number >> second_number;
  result = add(first_number, second_number);
  cout << "Result: " << result << endl;
  return 0;
}


int add (int first_num, int second_num) {
  int result = first_num + second_num;
  return result;
}
