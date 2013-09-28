#include <iostream>
#include <cmath>   // for the sqrt
using namespace std;

int main( ) {
  double a1, a2, a3;
  cout << "Enter the 3 marks:" << endl;
  cin >> a1 >> a2 >> a3;
  double m = (a1 + a2 + a3) / 3;
  double sd = sqrt((pow((a1 - m),2) + pow((a2 - m), 2) + pow((a3 - m),2)) / 3);
  cout << "The mean of the marks is\n" << m << "\nThe standard deviation is\n" << sd << endl;
  return 0;
}

