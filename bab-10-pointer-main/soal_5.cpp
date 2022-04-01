#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string word;
  string *pointer_word = &word;

for (int i = 0; i < 5; i++) {
  cout << "Masukkan kalimat : ";
  getline(cin, word);

  for (int i = 0; i <= word.length() - 1; i++) {
      if (i == 0) {
        word[i] = toupper(word[i]);
      } else {
        word[i] = tolower(word[i]);
      }
  }
  
  cout << "Huruf depan akan di kapital : " << *pointer_word << endl;
}
  return 0;
}