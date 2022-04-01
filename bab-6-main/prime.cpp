#include <iostream>
using namespace std;

int main() {
    int prime, i, loop;
    cout << "10 Bilangan Prima Pertama\n";
    
    for (prime = 1; prime <= 30; prime++) {
        loop = 0;
        for (i = 1; i <= prime; i++) {
            if (prime % i == 0) {
                loop++;
            }
        }
        if (loop == 2) {
            cout << prime << " ";
        }
    }
    return 0;
}