#include <iostream>
using namespace std;

int misteri3(const char *);
int main() { 
  char string[80];
  cout << "Ketik sebuah string : ";
  cin >> string;
  cout << misteri3(string) << endl; 
}

int misteri3(const char *s) { 
  int x = 0;
  for ( ; *s != '\0' ; s++)
  ++x;
  return x; 
}
