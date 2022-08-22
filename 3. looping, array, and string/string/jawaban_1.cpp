#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_string;
    cin >> my_string;

    for(int i=0; i<my_string.length(); i++){
        if(my_string[i] == 'a' || my_string[i] == 'o'){
            my_string[i] = '*';
        }
    }
    cout << my_string;
}