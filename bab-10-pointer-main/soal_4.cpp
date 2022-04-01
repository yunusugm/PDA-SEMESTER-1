#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string word;
  string *pointer_word = &word;

for (int i = 0; i < 5; i++) {
  cout << "Masukkan kalimat : ";
  getline(cin, word);
  
  reverse(word.begin(), word.end());
  cout << "Setelah dibalik : " << *pointer_word << endl;
} 
  return 0;
}
