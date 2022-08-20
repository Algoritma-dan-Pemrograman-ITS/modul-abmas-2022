# Daftar Isi

-   [Array](#array)
-   [Looping](#looping)
-   [String](#string)

    -   [String di CPP](#string-di-cpp)
    -   [Concatenation pada string](#concatenation-pada-string)
    -   [String dan angka](#string-dan-angka)
    -   [Panjang string](#panjang-string)
    -   [Mengakses karakter pada string](#mengakses-karakter-pada-string)

# Looping

# Array
Kita ingin menyimpan nilai 2 Siswa. kemudian, kita ingin mencari rata-ratanya. Kita bisa saja menggunakan program seperti ini. 

```c++
#include <stdio.h>

int main()
{   
    int nilaiSiswa1 = 70;
    int nilaiSiswa2 = 80;
    
    printf("Rata-rata: %f\n", ( nilaiSiswa[0] + nilaiSiswa[1] + nilaiSiswa[2] ) / 2.0;
}
```

Namun, bagaimana jika siswanya ada 50? Kalau diselesaikan dengan cara diatas, maka kita memerlukan 50 variabel. Maka dari itu, mari mengenal konsep array.

### Apa itu array
- Array adalah sebuah blok dari ruang yang berdekatan dalam memori 
- yang telah dipartisi menjadi blok-blok kecil berukuran sama yang disebut element, 
- yang masing-masing dapat menyimpan sejumlah data dengan tipe yang sama. misalnya int atau char 
- dan diakses dengan menggunakan indeks.
cs50x

dengan aray, kita dapat menyimpan nilai dari tipe yang sama, yang lokasinya ditempatkan berturut-turut atau berdekatan

array -> variabel dengan satu nama, tetapi mengandung banyak nilai. akses nilainya dilakukan dengan indeks. - modul toki

- pada C++, index element array dimulai dari 0.
- jika array berisi n elemen, maka elemen ke-1 indeksnya 0, dan elemen terakhir index nya (n-1)


### Deklarasi array

`tipe nama[size];`

contoh: 
`int nilaiSiswa[3]`
`double harga_buku[5]`

- Contoh program menggunakan array
```c++
#include <stdio.h>

int main()
{
    int nilaiSiswa[3];
    
    nilaiSiswa[0] = 70;
    nilaiSiswa[1] = 80;
    nilaiSiswa[2] = 90;
    
    printf("Rata-rata: %f\n", ( nilaiSiswa[0] + nilaiSiswa[1] + nilaiSiswa[2] + nilaiSiswa[3] ) / 3.0;
}
```

```c++
#include <stdio.h>

int main()
{
    int nilaiSiswa[3];
    
    nilaiSiswa[0] = 70;
    nilaiSiswa[1] = 80;
    nilaiSiswa[2] = 90;
    
    printf("Rata-rata: %f\n", ( nilaiSiswa[0] + nilaiSiswa[1] + nilaiSiswa[2] + nilaiSiswa[3] ) / 3.0;
}
```

Soal Latihan :
1. [Balik Daftar - tlx Toki courses Basic](https://tlx.toki.id/courses/basic/chapters/09/problems/B)


# String

**String** adalah sebuah cara dalam pemrograman yang berguna untuk menyimpan sebuah teks. Pada bentuk paling primitif contohnya dalam bahasa C, **String** adalah urutan dari karakter yang diakhiri oleh karatkter **null**. Karakter-karakter tersebut akan disimpan di dalam sebuah array, agar lebih memahami lihatlah contoh di bawah ini.

```c++
char c[] = "c string";
```

| <img src="https://cdn.programiz.com/sites/tutorial2program/files/c-string.jpg" width="400"> |
| :-----------------------------------------------------------------------------------------: |
|                        Diagram memori dari sebuah string pada mesin.                        |

Ketika _compiler_ (sistem yang menerjemahkan bahasa pemrograman menjadi bahasa mesin) menemukan sebuah urutan karakter diantara tanda petik `" "`, _compiler_ secara automatis menambahkan karakter `\0` (null) di akhir memori.

Bahasa C merupakan salah satu bahasa yang sangat dekat dengan bahasa mesin sehingga deklarasi **String** dilakukan secara demikian.

## String di CPP

Pada bahasa lain contohnya di C++, **String** berbentuk sebuah variabel tersendiri. Namun, cara pendeklarasian sebuah **String** pada bahasa C masih dapat digunakan.

Untuk dapat menggunakan variabel **String** beserta operasinya pada C++, diperlukan _import_ sebuah modul. Modul tersebut bernama `string`. Deklarasi nilai variabel string diapit oleh tanda petik `" "`. Contoh penulisannya sebagai berikut.

```c++
#include <iostream>
#include <string>

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
    cout << "Hasil input:\n" <<my_string2 << "\n";
    getchar(); // digunakan mengeliminasi enter pada saat input string

    // input dan output multiple teks pada variabel string
    cout << "Masukkan String (sebuah kalimat): ";
    getline(cin, my_string2);
    cout << "Hasil input:\n" <<my_string2 << "\n";
}
```

## Concatenation pada string

Seperti variabel yang lain, kita dapat melakukan operasi pada **String**, contoh operasi yang dapat dilakukan adalah **Concatenation**.

**Concatenation** adalah metode untuk menggabungkan dua buah string menjadi satu. Pada bahasa C++, **Concatentaion** dapat dilakukan dengan beberapa cara:

1. Menggunakan operator `+`

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // contoh concatenation menggunakan operator "+"
    string firstName = "Michael";
    string lastName = "Alexander";
    string fullName = firstName + lastName;
    cout << fullName << "\n";

    // menambahakan spasi diantara string
    string firstName2 = "Michael";
    string lastName2 = "Alexander";
    string fullName2 = firstName2 + " " + lastName2;
    cout << fullName2 << "\n";
}
```

2. Menggunakan fungsi `append()`

```c++
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
```

## String dan angka

C++ menggunakan operator `+` untuk melakukan operasi pada **String** dan pada angka. Perbedaannya adalah untuk angka maka dilakukan operasi penjumlahan sedangkan pada **String** dilakukan operasi **Concatenation**.

Jika kita menambahkan dua buah angka

```c++
#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int z = x + y;

    cout << z; // z akan bernilai 30 (sebuah angka)
}
```

Jika kita menambahkan dua buah string

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x = "10";
    string y = "20";
    string z = x + y;

    cout << z; // z akan bernilai 1020 (sebuah string)
}
```

Jika kita menambahkan string dan angka maka akan menimbulkan error.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x = "10";
    int y = 20;
    string z = x + y;

    cout << z; // error
}
```

## Panjang string

Untuk dapat mengetahui panjang dari **String**, terdapat beberapa cara:

1. Menggunakan fungsi `length()`

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Panjang dari String adalah: " << my_string.length();
}
```

2. Menggunakan fungsi `size()`

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Panjang dari String adalah: " << my_string.size();
}
```

## Mengakses karakter pada string

Kita dapat mengakses masing-masing karakter pada string menggunakan index di dalam kurung kotak `[ ]`. Hal ini dikarenakan **String** pada dasarnya merupakan sebuah karakter dalam sebuah array. Hal yang perlu diingat adalah **indeks pada array selalu dimulai dari 0** sehingga untuk mengakses karakter pertama pada **String** dapat dilakukan dengan index `str[0]`.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString = "Hello";
    cout << "Karakter pertama dari string adalah : "  << myString[0] << "\n";
}
```

Untuk mengubah salah satu karakter pada string, kita cukup melakukan *assignment* kembali nilai pada index yang kita inginkan.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString = "Hello";
    cout << "Nilai string awal : "  << myString << "\n";

    myString[1] = 'a';
    cout << "Nilai string akhir : "  << myString << "\n";
}
```
