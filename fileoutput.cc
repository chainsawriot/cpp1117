#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
  ofstream xxx;
  // ofstream export; not working is because export is a reserved word.
  xxx.open("export.txt");
  xxx << "Go to hell!" << endl;
  xxx.close();
}
