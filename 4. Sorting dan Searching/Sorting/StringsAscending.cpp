#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string arr[] = {"aaa",
                    "aa",
                    "b",
                    "ab",
                    "aab"};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}