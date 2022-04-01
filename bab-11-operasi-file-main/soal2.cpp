#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
  int MAX = 100;
  char buffer[MAX + 1];
  ifstream open_file("nama_mhs.txt");

  while (open_file)
  {
    open_file.getline(buffer, MAX);
    cout << buffer << endl;
  }
  open_file.close();
  return 0;
}


