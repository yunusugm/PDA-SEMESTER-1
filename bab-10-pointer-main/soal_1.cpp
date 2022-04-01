#include <iostream>
using namespace std;

void misteri2(const char *);
int main() {
  const char *string = "Teknik Elektro dan Informatika";
  misteri2(string);
  cout << endl;
  return 0;
}
void misteri2(const char *s) {
  for ( ; *s != '\0'; s++) {
    cout << *s;
  }
}