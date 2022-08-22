# Daftar Isi

-   [Looping](#looping)
    -   [Perulangan While](#perulangan-while)
    -   [Perulangan Do While](#perulangan-do-while)
    -   [Perulangan For](#perulangan-for)
-   [Array](#array)
-   [String](#string)
    -   [String di CPP](#string-di-cpp)
    -   [Concatenation pada string](#concatenation-pada-string)
    -   [String dan angka](#string-dan-angka)
    -   [Panjang string](#panjang-string)
    -   [Mengakses karakter pada string](#mengakses-karakter-pada-string)

# Looping

Pada dunia pemrograman, sebuah perulangan (loop) merupakan sebuah urutan instruksi yang secara berulang dilakukan hingga sebuah kondisi dipenuhi. Untuk memahami lebih lanjut, perhatikan contoh di bawah ini.

Bayangkan kita memiliki situasi dimana diharuskan untuk mencetak sebuah kalimat sebanyak 5 kali. Cara yang dapat dilakukan adalah sebagai berikut

```c++
#include <iostream>

using namespace std;

int main()
{
   cout << "Hallo, namaku bukan namamu!" << endl;
   cout << "Hallo, namaku bukan namamu!" << endl;
   cout << "Hallo, namaku bukan namamu!" << endl;
   cout << "Hallo, namaku bukan namamu!" << endl;
   cout << "Hallo, namaku bukan namamu!" << endl;
}
```

Bayangkan jika kita diharuskan mencetak kalimat tersebut sebanyak 1000 kali. Maka cara tersebut sangat tidak efisien. Karena alasan tersebut, kita akan menggunakan **Loop**.

Secara umum, loop digunakan untuk melakukan sebuah proses, seperti mencari data, mengubah data, dll. Sebuah **Loop** memiliki tiga komponen penting:

1. *Control variable*
<br> *control variable* merupakan sebuah *counter* dari sebuah **Looping**. Salah satu fungsi dari *Control variable* yaitu sebagai penanda berapa kali sebuah loop telah dilakukan. *Control variable* harus diinisiasi di awal sebagai penentu apakah sebuah **Loop** perlu dilakukan

2. *Loop condition*
<br> *loop condition* merupakan sebuah kondisi yang akan menentukan apakah sebuah **Looping** akan berlanjut atau berhenti

3. *Update control variable*
<br>  *Control variable* harus di-update. Jika tidak, maka program akan melakukan *Infinite Loop*

*Infinite loop* adalah sebuah kondisi dimana program berjalan tanpa henti karena sebuah **Loop** tidak memiliki/mencapai kondisi yang diinginkan.

Terdapat 3 jenis pengulangan pada bahasa C++, yaitu `while`, `do-while`, dan `for`. Setiap pengulangan memiliki 3 komponen yang telah disebutkan di atas walaupun memiliki perbedaan dalam cara penulisannya.

## Perulangan While

Perulangan while adalah bentuk perulangan yang paling sederhana. Struktur dari pengulangan ini adalah sebagai berikut

```c++
#include <iostream>

using namespace std;

int main()
{   
    int i = 1; // control variable
    
    while (i <= 10) { // loop condition
    
        // task yang akan dikerjakan
        cout << "Loop ke-" << i << endl;

        i++; // update control variable
    }
}
```
Cara kerja pengulangan `while` di atas adalah sebagai berikut

1. Inisiasi awal *control variable* `int i = 1`
2. Pengecekan apakah *control variable* memenuhi *loop condition*
3. Jika iya, maka dilakukan instruksi yang ada di dalam **Loop**
4. Setelah selesai, dilakukan update *control variable* dengan cara menambahkan 1 pada *control variable*
5. Setelah rangkaian **Loop** pertama selesai, maka dilakukan pengecekan lagi, apakah *control variable* memenuhi *loop condition*. Jika iya, maka kembali lagi ke langkah ke-3. Jika tidak, maka **Loop** selesai dan berlanjut ke baris program di luar loop selanjutnya 

## Perulangan Do While

Perulangan do-while adalah bentuk selanjutnya dari pengulangan. Pengulangan ini mirip dengan pengulangan `while`, perbedaannya adalah pengulangan `do-while` **Pasti dijalankan minimal 1 kali**, berbeda dengan pengulangan `while` yang dilakukan pengecekan kondisi awal terlebih dahulu. Struktur dari pengulangan ini adalah sebagai berikut

```c++
#include <iostream>

using namespace std;

int main()
{   
    int i = 1; // control variable
    
    do { // loop condition
    
        // task yang akan dikerjakan
        cout << "Loop ke-" << i << endl;

        i++; // update control variable
    } while (i <= 10);
}
```

Pada program di atas, setelah dilakukan inisialisasi *control variable*, **Loop** akan langsung berjalan tanpa melakukan pengecekan terlebih dahulu. Setelah 1 rangkaian **Loop** selesai, baru dilakukan pengecekan apakah *control variable* memenuhi *loop condition*. Untuk lebih memahami perbedaannya, perhatikan kedua contoh berikut

```c++
#include <iostream>

using namespace std;

int main()
{   
    int i = 11; // control variable
    
    while (i <= 10) { // loop condition
    
        // task yang akan dikerjakan
        cout << "Loop ke-" << i << endl;

        i++; // update control variable
    }
}
```

```c++
#include <iostream>

using namespace std;

int main()
{   
    int i = 11; // control variable
    
    do { // loop condition
    
        // task yang akan dikerjakan
        cout << "Loop ke-" << i << endl;

        i++; // update control variable
    } while (i <= 10);
}
```

Jika kedua program di atas di-run, maka pengulangan `while` tidak akan menghasilkan output apapun. Hal ini disebabkan *control variable* tidak memenuhi *loop condition* pada saat pengulangan akan pertama kali dijalankan. 

Berbeda dengan pengulangan `do-while`, pengulangan akan dijalankan sekali sebelum berhenti. Hal ini disebabkan pengulangan `do-while` melakukan pengecekan pemenuhan *loop condition* di akhir pengulangan sehingga program pasti akan dijalankan minimal 1 kali.

Cara kerja pengulangan `do-while` di atas adalah sebagai berikut

1. Inisiasi awal *control variable* `int i = 11`
2. Melakukan instruksi yang ada di dalam **Loop**
3. Setelah selesai, dilakukan update *control variable* dengan cara menambahkan 1 pada *control variable*
4. Pengecekan apakah *control variable* memenuhi *loop condition*
5. Jika iya, maka kembali ke langkah ke-2. Jika tidak, maka **Loop** selesai dan berlanjut ke baris program di luar loop selanjutnya

## Perulangan For

Perulangan `for` merupakan jenis perulangan yang paling berbeda dnegan kedua perulangan sebelumnya. Perulangan ini memiliki 3 komponen yang telah disebutkan pada awal perulangan. Struktur dari pengulangan ini adalah sebagai berikut

```c++
#include <iostream>

using namespace std;

int main()
{   
    /*
        for(control variable; loop condition; update control variable){

        }
    */
    for(int i=1; i<=10; i++){
        // task yang akan dikerjakan
        cout << "Loop ke-" << i << endl;
    }
}
```
Cara kerja pengulangan `for` di atas adalah sebagai berikut

1. Inisiasi awal *control variable* `int i = 1`
2. Pengecekan apakah *control variable* memenuhi *loop condition*
3. Jika iya, maka dilakukan instruksi yang ada di dalam **Loop**
4. Setelah selesai, dilakukan update *control variable* dengan cara menambahkan 1 pada *control variable*
5. Setelah rangkaian **Loop** pertama selesai, maka dilakukan pengecekan lagi, apakah *control variable* memenuhi *loop condition*. Jika iya, maka kembali lagi ke langkah ke-3. Jika tidak, maka **Loop** selesai dan berlanjut ke baris program di luar loop selanjutnya

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

Catatan:

-   pada C++, index element array dimulai dari 0.
-   jika array berisi n elemen, maka elemen ke-1 indeksnya 0, dan elemen terakhir index nya (n-1)

Misalnya, kita mempunyai array bernama `nilaiMahasiswa` yang menampung 4 elemen
![Frame 25](https://user-images.githubusercontent.com/79054230/185802517-c609fbba-3ddc-4d2b-b53f-913947464670.png)

-   nilaiMahasiswa[0] = 80
-   nilaiMahasiswa[1] = 90
-   nilaiMahasiswa[2] = 85
-   nilaiMahasiswa[3] = 70

## Deklarasi Array

`tipe nama[ukuran];`

-   tipe → tipe data dari array. Dapat berupa int, double, bool, dll
-   nama → nama dari Array. Aturan penamaannya sama seperti variabel biasa
-   ukuran → ukuran dari array. Yang terdefinisi ialah 0 sampai (ukuran-1)

contoh:
`int nilaiSiswa[3]`

-   yang terdefinisi hanya index nilaiSiswa[0] sampai nilaiSiswa[2]

`double harga_buku[5]`

-   yang terdefinisi hanya index harga_buku[0] sampai harga_buku[4]
-   mengakses harga_buku[-1], harga_buku[-2], harga_buku[5] dapat menyebabkan runtime error

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

## Secara Alokasi Memori

Dengan aray, kita dapat menyimpan nilai dari tipe yang sama, yang **lokasinya ditempatkan berturut-turut atau berdekatan**.

Maksudnya bagaimana? Perhatikan,

Visualisasi memori ketika menyimpan 3 nilai menggunakan variabel biasa
![visualisasi memori variabel biasa](https://user-images.githubusercontent.com/79054230/185899917-67bff7f7-d16e-4427-9e9d-fceafc020929.png)

Visualisasi memori ketika menyimpan 3 nilai menggunakan array
![visualisasi memori array (2)](https://user-images.githubusercontent.com/79054230/185896928-8f49f9cf-1660-4bee-b7ab-f9695fc53b76.png)
Terlihat bahwa array mengalokasikan memori elemen-elemennya secara berdekatan atau berurutan.

\*Gambar diatas ialah gambar dari alokasi memori

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

Untuk mengubah salah satu karakter pada string, kita cukup melakukan _assignment_ kembali nilai pada index yang kita inginkan.

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
