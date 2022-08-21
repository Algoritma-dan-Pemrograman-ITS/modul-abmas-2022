#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {5, 2, 4, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n, greater<int>());

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}