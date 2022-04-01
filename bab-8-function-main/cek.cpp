#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main() {
    string a="asdasd1"; //string a bernilai 1234
    int aa=atoi(a.c_str()); //mengubah string a menjadi integer,lalu ditampung di variabel integer aa
    cout << aa << endl; //1234
    cout << aa*2 << endl; //aa x 2 = 2468
    }