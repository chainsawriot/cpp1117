#include <iostream>
#include <fstream>     // for file access
#include <cstdlib> // For the exit() function
#include <string>

using namespace std;

int main(void)
{
  cout << "Please input the file name for raw data: ";
  string fname;
  cin >> fname;
  ifstream raw_data(fname.c_str()); // need to use C style string for file name
  if(raw_data.fail()) {
    cout << "Error reading file." << endl;
    exit(1);
}
  float total = 0;
  int num_data = 0;
  float x;
  while(true) {
    raw_data >> x;
    if(raw_data.eof())
      break;
    total += x;
    num_data += 1;
  }
  cout << "The average is: " << total / num_data << endl;
  raw_data.close();
}

