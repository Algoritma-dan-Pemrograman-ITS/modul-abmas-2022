#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString = "Hello";
    cout << "Nilai string awal : "  << myString << "\n";

    myString[1] = 'a';
    cout << "Nilai string akhir : "  << myString << "\n";
}