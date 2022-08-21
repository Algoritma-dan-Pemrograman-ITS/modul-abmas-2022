#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double arr[] = {5.2, 2.3, 4.4, 3.1, 1.7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n, greater<double>());
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}