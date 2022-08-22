#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    // deklarasi string dengan nilai
    string my_string = "Aku adalah string.";
    cout << my_string << "\n\n";

    // deklarasi variabel string
    string my_string2;
    
    // input dan output teks pada variabel string
    cout << "Masukkan String: ";
    cin >> my_string2;
    cout << "Hasil input:\n" <<my_string2 << "\n\n";
    getchar(); // digunakan mengeliminasi enter pada saat input string

    // input dan output multiple teks pada variabel string
    cout << "Masukkan String (sebuah kalimat): ";
    getline(cin, my_string2);
    cout << "Hasil input:\n" <<my_string2 << "\n";
}