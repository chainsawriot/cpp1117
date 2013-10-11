// example function

#include <iostream>
#include <cmath>

using namespace std;

// declaration of function "add"

int add(int first_num, int second_num);  // function prototype
bool isPrime(unsigned int x);

int main() {
  unsigned int first_number;
  // cin >> first_number;
  // cin >> second_number;
  cin >> first_number;
  cout << "Result: " << isPrime(first_number) << endl;
  return 0;
}


int add (int first_num, int second_num) {
  int result = first_num + second_num;
  return result;
}

// bool isPrime(unsigned int x) {
//   unsigned int i = 2;
//   while( i < x - 1 ) {
//     if (x % i == 0) return false;
//     i = i + 1;
//   }
//   return true;
// }


bool isPrime(unsigned int x) {
  unsigned int i = 3;
  if (x == 2) return true;
  if (x % 2 == 0) return false;
  unsigned int maxBound = sqrt(x) + 0.5;
  while( i <= maxBound ) {
    if (x % i == 0) return false;
    i = i + 2;
  }
  cout << i << endl; // testing scoping in while loop
  return true;
}
