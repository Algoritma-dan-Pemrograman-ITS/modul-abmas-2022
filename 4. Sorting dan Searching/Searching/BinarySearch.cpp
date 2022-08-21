#include <iostream>
using namespace std;

int main(){
    int checkCount = 0, search = 200;

    int top = 1000, bottom = 1, mid;

    while(top >= bottom){
        mid = (top + bottom)/2;
        printf("Nilai variabel mid: %d\n", mid);
        checkCount++;
        if(mid == search) break;
        else if(mid > search) top = mid - 1;
        else bottom = mid;
    }

    printf("Ditemukan angka %d pada sekuens dengan %d pengecekan", mid, checkCount);

    return 0;
}