#include <iostream>
#include <string>

using namespace std;
int main( ) {
  //cout << 120 * 3.14159 << endl;
  string str1 = "zebra";
  string str2 = "ant";
  bool check = str1 > str2; // the dictionary order of zebra is higher than ant
  cout << check << endl;
  return 0;
}
