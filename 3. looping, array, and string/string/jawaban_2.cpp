#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_string;
    getline(cin, my_string);

    for(int i=my_string.length()-1; i>=0; i--){
        cout << my_string[i];
    }
}