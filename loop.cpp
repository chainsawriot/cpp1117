// example function

#include <iostream>
using namespace std;

// declaration of function "add"
int main () {
int total = 0; int x =  0;
// cin >> x;
// while(x > 0) {
//   total = total + x;
//   cin >> x;
// }

 while(true) {
   cin >> x;
   if (x == 0) break;
   total += x;
}
 cout << "The total is: " << total << endl;
 return 0;
}
