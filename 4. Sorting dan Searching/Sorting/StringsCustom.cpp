#include <iostream>
#include <algorithm>
using namespace std;

bool compare (string s1, string s2){
    return s1.size() < s2.size();
}

int main(){
    string arr[] = {"aaa",
                    "aa",
                    "b",
                    "ab",
                    "aab"};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n, compare);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}