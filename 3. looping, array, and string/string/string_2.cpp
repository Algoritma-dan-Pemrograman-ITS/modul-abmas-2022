#include <iostream>
#include <string>

using namespace std;

int main()
{
    // contoh concatenation menggunakan operator "+"
    string firstName = "Michael";
    string lastName = "Alexander";
    string fullName = firstName + lastName;
    cout << fullName << "\n";

    // menambahakan spasi diantara string
    string firstName2 = "Michael";
    string lastName2 = "Alexander";
    string fullName2 = firstName2 + " " + lastName2;
    cout << fullName2 << "\n";
}