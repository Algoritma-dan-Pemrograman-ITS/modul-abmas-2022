# Daftar Isi

-   [Looping](#looping)
-   [Array](#array)
-   [String](#string)

    -   [String di CPP](#string-di-cpp)
    -   [Concatenation pada string](#concatenation-pada-string)
    -   [String dan angka](#string-dan-angka)
    -   [Panjang string](#panjang-string)
    -   [Mengakses karakter pada string](#mengakses-karakter-pada-string)

# Looping

# Perulangan (Loop)
Perulangan atau looping memungkinkan kita untuk mengeksekusi potongan kode berulang-ulang hingga mencapai suatu kondisi. Ada 3 jenis perulangan dalam bahasa C, yaitu ```while```, ```do - while```, dan ```for```.

## Perulangan While
Perulangan while adalah bentuk perulangan yang paling sederhana. Sintaksnya adalah sebagai berikut.
```c++
//initial value misal, i = 0
while (<Ekspresi/Kondisi>) {
    // Potongan kode yang ingin dieksekusi
    .
    .
    .
    // increment/decrement misalnya, i++
}
```

Cara kerja perulangan while mirip dengan if. Jika pada if potongan kode akan dieksekusi sekali saja apabila ekspresi/kondisi bernilai TRUE, pada while potongan kode akan terus dieksekusi hingga ekspresi/kondisi menghasilkan FALSE.

### Contoh
```c++
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("Test Loop ke-%d \n",i);
        i++;
    }

    return 0;
}
```

Sehingga pada contoh di atas:
<ul>
<li> Pada awalnya, variabel i bernilai 0. </li>
<li> Sequence selanjutnya adalah while, dan i bernilai kurang dari 10 (TRUE), maka kode didalam while akan dijalankan, yakni print Test Loop ke-i. </li>
<li>Setelah melakukan print, variabel i akan di-increment, dan kembali ke statement while untuk memeriksa apakah i masih kurang dari 10 setelah di-increment.</li>
<li> Karena setelah i di-increment nilainya masih 1 dan kurang dari 10, maka while akan dijalankan lagi hingga i bernilai 10 yang berarti tidak memenuhi kondisi while.</li>
</ul>

# Array

## Motivasi
Misalnya, kita ingin menyimpan nilai 3 Siswa. kemudian, kita ingin mencari rata-ratanya. Kita bisa saja menggunakan program seperti ini. 

```c++
#include <stdio.h>

int main()
{   
    int nilaiSiswa1 = 70;
    int nilaiSiswa2 = 80;
    int nilaiSiswa3 = 90;
    
    printf("Rata-rata: %f\n", ( nilaiSiswa1 + nilaiSiswa2 + nilaiSiswa3 ) / 3.0;
}
```

Namun, bagaimana jika siswanya ada 50? Kalau diselesaikan dengan cara diatas, maka kita memerlukan 50 variabel. Maka dari itu, mari mengenal konsep array.

## Apa itu array?

ada berbagai kalimat yang mendefinisikan array, diantaranya:

> Array ialah variabel dengan satu nama, tetapi mengandung banyak nilai. akses nilainya dilakukan dengan indeks.- modul tlx toki


> Array adalah sebuah blok dari ruang yang berdekatan dalam memori yang telah dipartisi menjadi blok-blok kecil berukuran sama yang disebut element, yang masing-masing dapat menyimpan sejumlah data dengan tipe yang sama. misalnya int atau char dan diakses dengan menggunakan indeks. - cs50x
> 

Dengan aray, kita dapat menyimpan nilai dari tipe yang sama, yang lokasinya ditempatkan berturut-turut atau berdekatan.

- pada C++, index element array dimulai dari 0.
- jika array berisi n elemen, maka elemen ke-1 indeksnya 0, dan elemen terakhir index nya (n-1)


Misalnya, kita mempunyai array bernama `nilaiMahasiswa` yang menampung 4 elemen
![Frame 25](https://user-images.githubusercontent.com/79054230/185802517-c609fbba-3ddc-4d2b-b53f-913947464670.png)
- nilaiMahasiswa[0] = 80
- nilaiMahasiswa[1] = 90
- nilaiMahasiswa[2] = 85
- nilaiMahasiswa[3] = 70


## Deklarasi Array

`tipe nama[ukuran];`

- tipe → tipe data dari array. Dapat berupa int, double, bool, dll
- nama → nama dari Array. Aturan penamaannya sama seperti variabel biasa
- ukuran → ukuran dari array. Yang terdefinisi ialah 0 sampai (ukuran-1)

contoh:
`int nilaiSiswa[3]`

- yang terdefinisi hanya index nilaiSiswa[0] sampai nilaiSiswa[2]

`double harga_buku[5]`

- yang terdefinisi hanya index harga_buku[0] sampai harga_buku[4]
- mengakses harga_buku[-1], harga_buku[-2], harga_buku[5] dapat menyebabkan runtime error

## Inisialisasi Array (Deklarasi + Assign nilai)

contoh 1

```cpp
int nilaiSiswa[3] = {70, 80, 90};
//artinya,
// nilaiSiswa[0] -> 70
// nilaiSiswa[1] -> 80
// nilaiSiswa[2] -> 90
```

contoh 2

```cpp
int harga_buku[] = {2000, 3000}
// harga_buku[0] -> 2000
// harga_buku[1] -> 3000
```

## Assign nilai Array

Kita dapat meng-assign nilai array per-elemennya, seperti berikut

```cpp
int nilaiSiswa[3];

nilaiSiswa[0] = 70;
nilaiSiswa[1] = 80;
nilaiSiswa[2] = 90;
```

Kita pun dapat mengganti nilai array per-elemen

```cpp
int nilaiSiswa[3] = {70, 80, 90);

nilaiSiswa[0] = 60;
```

Kita juga dapat menginput nilai dari user menggunakan scanf

```cpp
scanf("%d", &nilaiSiswa[0]);
```

---

Contoh program menggunakan array

```cpp
#include <stdio.h>

int main()
{
    int nilaiSiswa[3];

		scanf("%d", &nilaiSiswa[0]);
		scanf("%d", &nilaiSiswa[1]);
		scanf("%d", &nilaiSiswa[2]);

    printf("Rata-rata: %f\\n", ( nilaiSiswa[0] + nilaiSiswa[1] + nilaiSiswa[2] ) / 3.0);
		return 0;
}
```

Kita dapat menggunakan looping pada array kita. Looping mungkin terasa berguna apabila jumlah elemen dari array itu banyak.

```cpp
#include <stdio.h>

int main()
{
    for(int i=0; i<3; i++){
				scanf("%d", &nilaiSiswa[i]);
		}
		
    printf("Rata-rata: %f\\n", ( nilaiSiswa[0] + nilaiSiswa[1] + nilaiSiswa[2] ) / 3.0);
		return 0;
}

```

Soal Latihan :

1. [Balik Daftar - tlx Toki courses Basic](https://tlx.toki.id/courses/basic/chapters/09/problems/B)
2. [Modus Terbesar - tlx Toki courses Basic](https://tlx.toki.id/courses/basic/chapters/09/problems/C)

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
