#include <iostream>
#include <string>
 
using namespace std;

int main(int argc, char* argv[])
{
  int i = 0;
  string mystring = "How are you doing?";  

  cout << "Hello, my dear world. " << mystring << endl << endl;

  cout << "Ÿou have entered " << argc << " argument(s)."  << endl << endl;

  for (i = 0; i < argc; i++)
  {
    cout << i << ": " << argv[i] << endl;
  }

  return 0;
}
