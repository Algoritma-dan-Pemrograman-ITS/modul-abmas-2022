#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 3, 6, 7, 2, 5, 2, 1, 9};
    int search = 5, flag = 0, n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        if(arr[i] == search)
            flag = 1;
    }

    if(flag == 0)
        printf("Tidak ditemukan angka %d pada sekuens", search);
    else if(flag == 1)
        printf("Ditemukan angka %d pada sekuens", search);

    return 0;
}