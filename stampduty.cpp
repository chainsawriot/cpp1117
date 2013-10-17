#include <iostream>
using namespace std;

int main( ) {
  double p;
  cout << "Enter the price of transaction" << endl;
  cin >> p;
  double stamp;
  if (p <= 2000000) stamp = p * 0.015;
  else if (p > 2000000 && p <= 2176470) stamp = 30000 + ((p - 2000000) * 0.2);
  else if (p > 2176470 && p <= 3000000) stamp = p * 0.03;
  else if (p > 3000000 && p <= 3290330) stamp = 90000 + ((p - 3000000) * 0.2);
  else if (p > 3290330 && p <= 4000000) stamp = p * 0.045;
  else if (p > 4000000 && p <= 4428580) stamp = 180000 + ((p - 4000000) * 0.2);
  else if (p > 4428580 && p <= 6000000) stamp = p * 0.06;
  else if (p > 6000000 && p <= 6720000) stamp = 360000 + ((p - 6000000) * 0.2);
  else if (p > 6720000 && p <= 20000000) stamp = p * 0.075;
  else if (p > 20000000 && p <= 21739130) stamp = 1500000 + ((p - 20000000) * 0.2);
  else stamp = p * 0.085;
  cout << "The sample duty is HK$" << int(stamp) << endl;
  return 0;
}
