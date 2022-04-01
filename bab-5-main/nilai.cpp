#include <iostream>
using namespace std;

int main()
{
    string category, grade;

    cout << "Masukkan grade matakuliah (A - E) : ";
    cin >> grade;

    if (grade == "A" || grade == "a") {
        category = "Excellent";
    }
    else if (grade == "B" || grade == "b") {
        category = "Very Good";
    }
    else if (grade == "C" || grade == "c") {
        category = "Good";
    }
    else if (grade == "D" || grade == "d") {
        category = "Fair";
    }
    else if (grade == "E" || grade == "e") {
        category = "Poor";
    }
    else {
        cout << "Invalid Grade \n";
        category = "tidak ada";
    }
    
    cout << "Kamu masuk kategori " << category;
    return 0;
}
