// Author: Johnny Wannamaker
// Description: Hello World in c++

#include <iostream>
using namespace std;

int hello1Function(string name1);
int hello2function(string name2);

int main()
{
  string name1 = "Johny Wannamaker";
  hello1Function(name1);
  
  string name2 = "Seongu Lee";
  hello2Function(name2);
  
  return 0;
}

