#include <iostream>
#include <string>

using namespace std;

int main()
{
    // contoh concatenation menggunakan operator "+"
    string firstName = "Michael";
    string lastName = "Alexander";
    string fullName = firstName.append(lastName);
    cout << fullName << "\n";
}