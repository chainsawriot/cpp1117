#include <iostream>
#include <cmath>   // for the sqrt
using namespace std;

int main( ) {
  double a, b, c;
  cout << "Enter the coefficients of the quadratic euations:" << endl;
  cin >> a >> b >> c;
  double root1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  double root2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  cout << "The roots of the equation is\n" << root1 << " " << root2 << endl;
  return 0;
}
