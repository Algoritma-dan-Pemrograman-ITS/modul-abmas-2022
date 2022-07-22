# Daftar Isi

# Mengenal Program, Pemrograman dan Bahasa Pemrograman

Program adalah serangkaian instruksi yang dieksekusi oleh mesin untuk mencapai tujuan tertentu. Program biasanya menerima masukan, lalu memprosesnya untuk menghasilkan suatu keluaran. 

Misal ada program penerjemah bahasa Inggris ke Bahasa Indonesia. Program tersebut menerima masukan berupa teks dalam bahasa Inggris, lalu menerjemahkannya untuk menghasilkan keluaran berupa teks dalam bahasa Indonesia. 

Pemrograman adalah aktivitas menulis program. Program ditulis dengan bahasa pemrograman, sehingga mesin atau komputer dapat mengerti apa yang yang diinstruksikan. Bahasa yang akan kita gunakan dalam pembelajaran kali ini adalah C++. 

## Cara Komputer Menjalankan Program
Awalnya pemrograman dilakukan dengan Bahasa Assembly atau bahasa mesin yang disebut sebagai bahasa pemrograman tingkat rendah. Bahasa tingkat rendah mudah dipahami oleh mesin, tapi sulit dibaca dan dimengerti oleh manusia. 

Kemudian, diciptakanlah bahasa pemrograman tingkat tinggi yang lebih mudah dipahami manusia karena menggunakan frase bahasa sehari-hari. Akan tetapi, bahasa pemrograman tingkat tinggi tidak bisa langsung dimengerti oleh mesin, harus diterjemahkan dulu menjadi bahasa tingkat rendah. 

Untuk bahasa C++, penerjemahan ini disebut sebagai **kompilasi** dan dilakukan oleh **_compiler_**. Setelah diterjemahkan, program dapat dieksekusi oleh komputer. Secara singkat, siklus kerja jika kita menggunakan *compiler* adalah:

> tulis program → kompilasi → eksekusi

# Mengenal IDE
**IDE** atau **Integrated Development Environment** adalah *software* yang menyediakan fitur-fitur yang diperlukan untuk menulis dan menjalankan program. Termasuk di antaranya *text editor* untuk menulis dan mengedit kode program, dan juga *compiler*. 

## Instalasi IDE
IDE yang akan kita gunakan adalah Codeblocks yang bisa di-*download* di [sini](https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download).

| <img src="https://user-images.githubusercontent.com/70790033/178111655-bdde4218-6f85-477c-8381-0701795e0861.png" width="400"> | 
|:--:| 
| Setelah *download* selesai, langsung jalankan saja *installer*-nya. Waktu meng-*install*, biarkan semua kotak tercentang.  |

| <img src="https://user-images.githubusercontent.com/70790033/178111678-333017a5-0eda-4b3e-9bcf-88c7258fd2a3.png" width="400"> | 
|:--:| 
| Di saat membuka Codeblocks pertama kali, pastikan GNU GCC Compiler sudah terdeteksi. |

| <img src="https://user-images.githubusercontent.com/70790033/178111798-fae47fe1-0c99-4563-9329-0cc3f5e75dfd.png" width="650"> | 
|:--:| 
| Tampilan Codeblocks saat sudah terbuka |

## Membuat Project dan File Baru
Sebelum menulis kode, kita perlu membuat project terlebih dahulu
1. Pilih Create a new project
2. Pilih Console application, lalu klik Next 
3. Pilih C++, lalu klik Next
4. Tuliskan project title, pilih folder tempat project, lalu klik Next
5. Pastikan bahwa compiler yang digunakan adalah GNU GCC Compiler, lalu klik Finish

https://user-images.githubusercontent.com/70790033/179145236-7e407e8b-3ab2-4da4-93f9-424b4abf38b4.mp4

Cara alternatifnya
1. Pilih File di bar atas
2. Pilih New, lalu pilih Project
3. Pilih Console application, lalu klik Next 
4. Pilih C++, lalu klik Next
5. Tuliskan project title, pilih folder tempat project, lalu klik Next
6. Pastikan bahwa compiler yang digunakan adalah GNU GCC Compiler, lalu klik Finish

https://user-images.githubusercontent.com/70790033/179145477-f9c8b62e-e9e6-45fc-bb1d-2ec0586eb67f.mp4

## Menulis dan Mengedit Kode
Setelah project sudah dibuat
1. Di sidebar kiri, double-click project yang sudah kita buat
2. Double-click Sources
3. Akan muncul file main.cpp, double-click lagi untuk memunculkannya dalam text editor
4. Setelah text editor muncul, akan langsung tertulis kode program untuk Hello World, kita bisa mulai mengedit kode ini sesuai keinginan

https://user-images.githubusercontent.com/70790033/179146060-8c110019-1c73-4635-95a0-2f1dc116f209.mp4

## Menjalankan Program
1. Klik tombol run berwarna hijau yang ada di bar atas
2. Jika muncul pop up pertanyaan "Do you want to build it now?", tekan yes 

https://user-images.githubusercontent.com/70790033/179146386-5c6270ab-6300-4f29-be76-fad252c0cb5b.mp4

# Mengenal Bahasa C++

## Program "Hello world!"

Mari kita mulai dengan membuat program sederhana, yakni program untuk menampilkan kalimat **“Hello world!”** pada layar (*console*). Berikut adalah kode program tersebut:

```C++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```

Jika program kita jalankan, akan menghasilkan output:

```
Hello world!
```

Untuk menjelaskan cara kerja program di atas, mari kita pisahkan bagian-bagian kodenya satu per satu.

## Struktur Program

### Preprocessor Directive dan Header File

Baris 1 pada kode di atas disebut dengan **preprocessor directive**. Preprocessor directive adalah perintah awal kepada komputer sebelum menjalankan program kita. Preprocessor yang digunakan dalam hal ini adalah `#include`. 

Preprocessor `#include` menjelaskan bahwa program menyertakan suatu file. Dalam program "Hello world!" di atas, file yang disertakan adalah **header file** `<iostream>`. Header file merupakan library bawaan C++ yang berisi deklarasi variabel, fungsi, dan tipe data yang diperlukan program. Dengan menyertakan header file, kita bisa menggunakan isi-isinya. 

`<iostream>` adalah singkatan dari input-output stream, atau aliran input-output. Sesuai namanya, `<iostream>` adalah header file yang menyediakan cara melakukan input dan output dengan fungsi-fungsi seperti cin dan cout. 

Sederhananya `using namespace std` digunakan untuk mempersingkat penulisan kode. std adalah standard library yang berasal dari `<iostream>`. Tanpa barisan kode ini, kita perlu menuliskan `std::` di awal cout, endl, cin. Seperti ini:

```C++
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

### Whitespace

Dapat diperhatikan pada kode bahwa baris 2 dan 4 kosong (tidak terdapat karakter apapun). Ini disebut dengan **whitespace**. Whitespace adalah area kosong pada kode, dan biasanya dtujukan agar kode mudah dibaca.

Terdapat tiga jenis whitespace, yakni **space**, **tab**, dan **new line**. Baris 2 dan 4 adalah contoh dari new line.

### Fungsi `main()`

Fungsi `main()` pada kode di atas ditunjukan pada baris ke 5 hingga baris ke 9.

```C++
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```

Dalam bahasa C, fungsi `main()` adalah fungsi utama yang harus ada. Jika program kita ibaratkan sebuah rumah, fungsi `main()` adalah pintu masuknya. Dia menandakan tempat dimulainya eksekusi kode. 

+ Baris 5 menunjukkan nama dari fungsi dan tipe return dari fungsi tersebut. int merupakan tipe return dari fungsi yang bernama `main()`. 
+ Baris 6 terdapat tanda  `{` yang menandakan pembuka dari fungsi `main()`.
+ Baris 7 s.d 8 merupakan tubuh dari fungsi `main()`.
+ Baris 9 terdapat tanda `}` yang menandakan penutup dari fungsi `main()`. Pada dasarnya, tubuh dari sebuah fungsi berada di antara tanda `{ }`.

### Statement

Di dalam fungsi `main()`, terdapat dua **statement** yang ditunjukkan pada baris 7 dan 8. Sebagian besar statement diakhiri oleh tanda titik-koma (`;`).

```c++
cout << "Hello world!" << endl;
return 0;
```

Statement pada baris 7 menginstruksikan program untuk memanggil fungsi `cout`. `cout` adalah singkatan dari console out. Dia disediakan oleh `<iostream>` dan digunakan untuk mencetak output pada konsol (layar). Kode `cout << "Hello world!"` berarti `"Hello world!"` dimasukkan ke dalam cout untuk ditampilkan pada konsol. Kemudian, terdapat pula `endl` atau end line yang menandakan akhir dari aliran I/O. 

Statement pada baris 8 disebut dengan return statement. Perintah `return 0` pada fungsi `main()` digunakan untuk mengakhiri program dan menandakan program tersebut berhasil dieksekusi.

## Komentar

**Komentar** (_comment_) adalah bagian dari program yang tidak akan dieksekusi. Komentar sangat berguna untuk mendeskripsikan program yang dibuat, misalnya saja untuk menjelaskan bagian dari kode agar mudah dipahami oleh programmer lainnya. Terdapat dua jenis komentar dalam bahasa C++.

### Komentar Single-Line

Seperti namanya, komentar single-line hanya bekerja pada satu baris. Komentar single-line diawali dengan simbol `//` . Semua karakter (pada satu baris) dibelakang simbol `//` akan diabaikan.

```c++
// Ini adalah komentar single-line  
  
// Fungsi untuk mencetak ke layar  
cout << "Hello world!" << endl;

```

### Komentar Multi-Line

Sedangkan komentar multi-line dapat bekerja pada lebih dari satu baris. Pasangan simbol `/*` dan `*/` digunakan untuk membuat komentar multi-line. Semua karakter yang berada di antara dua simbol tersebut akan diabaikan.

```c++
/* 
Ini adalah komentar multi-line 
Semua yang berada di sini akan 
diabaikan 
*/  
```
## Keyword

**Keyword** merupakan kata-kata khusus yang digunakan bahasa C++ untuk tujuan tertentu, misalnya void, int, public, dsb. Kata-kata ini tidak bisa digunakan untuk nama variabel atau fungsi. Berikut adalah daftar keyword pada bahasa C++.

|            |          |             |             |
|------------|----------|-------------|-------------|
| `asm`      | `double` | `new`       | `switch`    |
| `auto`     | `else`   | `operator`  | `template`  |
| `break`    | `enum`   | `private`   | `this`      |
| `case`     | `extern` | `protected` | `throw`     |
| `catch`    | `float`  | `public`    | `try`       |
| `char`     | `for`    | `register`  | `typedef`   |
| `class`    | `friend` | `return`    | `union`     |
| `const`    | `goto`   | `short`     | `unsigned`  |
| `continue` | `if`     | `signed`    | `virtual`   |
| `default`  | `inline` | `sizeof`    | `void`      |
| `delete`   | `int`    | `static`    | `volatile ` |
| `do`       | `long`   | `struct`    | `while `    |

## Identifier

**Identifier** merujuk pada penamaan sebuah entitas, seperti pada [variabel](#variabel), fungsi, structures dan lain-lain. Karena identifier menamai sebuah entitas, maka nama dari identifier harus unik (dua entitas tidak boleh mempunyai nama identifier yang sama).

Aturan penamaan identifier:

+ Identifier bukan merupakan [keyword](#keyword).
+ Identifier hanya boleh terdiri dari huruf lowercase, huruf uppercase, digit, dan simbol underscore ( _ ).
+ Identifier tidak boleh mengandung whitespace.
+ Identifier harus dimulai dengan huruf atau simbol underscore. Tidak boleh dimulai dengan digit/angka.
+ Bersifat case-sensitive, artinya identifier `variable` berbeda dengan `vAriaBle`.

## Variabel

### Pengenalan Variabel

Pada dasarnya program bekerja dengan mengolah data. Nah, data ini bisa kita simpan dalam suatu wadah yang disebut **variabel**. Nilai data dari variabel dapat berubah-ubah selama proses program. Dalam bahasa C++, variabel menyimpan data dengan tipe data tertentu. Jika variabel kita ibaratkan sebuah gelas, maka tipe data adalah jenis cairan yang kita tuangkan ke dalamnya. 

### Deklarasi dan Definisi Variabel

Pada bahasa C++, variabel harus dideklarasikan dulu sebelum digunakan. Seperti halnya gelas tadi, gelas tersebut harus ada terlebih dahulu sebelum bisa digunakan.

Untuk mendeklarasikan sebuah variabel, sintaksnya adalah sebagai berikut.

```
<tipe_data> <identifier>
```

Misalkan, potongan kode berikut mendeklarasikan variabel `x` yang bertipe `int`.

```c++
int x
```

Jika ingin mendeklarasikan lebih dari satu variabel dengan tipe data yang sama, kita bisa menggunakan operator koma (`,`).

```
<tipe_data> <variabel1>, <variabel2>, ... dst;
```

```c++
int x, y;
```

### Pengisian Nilai Pada Variabel

Setelah mendeklarasikan variabel, kita bisa mengisinya dengan sebuah nilai. Pengisian ini kita lakukan dengan operator assignment (simbol `=`).

```
identifier_variabel = <nilai yang bersesuaian>
```

Contoh:

```c++
int x, y;  
x = 40;  
y = -4; 
```

Dalam hal ini, variabel `x` dan `y` akan mempunyai nilai masing-masing `40` dan `-4`. 

### Inisialisasi Variabel

Deklarasi dan pengisian nilai pada variabel dapat dilakukan dalam satu instruksi sekaligus. Hal ini disebut dengan **inisialisasi**. Dengan melakukan inisialisasi variabel, berarti kita memberikan nilai awal pada variabel tersebut.

```
tipe_data identifier_variabel = <nilai yang bersesuaian>;
```

Contoh:

```c++
int x = 6;
```

## Konstanta dan Literal

Konstanta mirip seperti variabel. Keduanya sama-sama bisa kita gunakan untuk menyimpan data. Bedanya, isi data dalam konstanta tidak bisa diubah. Literal adalah nilai data yang kita masukkan dalam konstanta. Contohnya:

```c++
5       // Literal bilangan bulat  
1.23    // Literal bilangan real  
'S'     // Literal karakter  
"Hai"   // Literal string  
```

Berikut adalah jenis-jenis literal dalam bahasa C++.

| Jenis Literal             | Contoh                        | Tipe Default  |
|---------------------------|:------------------------------|:--------------|
| Bilangan bulat            | `10, 0, -1 dll.`              | int           |
| Bilangan real (floating)  | `202.15, 33.24, -12.45 dll.`  | double        |
| Karakter                  | `‘A’, ‘1’, ‘#’`               | char          |
| String                    | `“Hai”`                       | const char[4] |

### Bilangan Bulat

Terdapat tiga cara untuk menuliskan literal bilangan bulat. Yakni menggunakan basis 10 (desimal), basis 8 (oktal) dan basis 16 (heksadesimal).
+ **Desimal** - ditulis seperti bilangan pada umumnya. Contohnya `100, -22`.
+ **Oktal** - diawali dengan angka “0”, kemudian diikuti bilangan oktal. Contohnya `077, 033`.
+ **Heksadesimal** - diawali dengan “0x”, kemudian diikuti bilangan heksadesimal. Contohnya `0x7f, 0x521`.

### Bilangan Real (floating)

Bilangan real (floating) dituliskan dengan menggunakan pemisah tanda titik (.) antara bilangan bulat dan bilangan pecahannya. Contohnya `2.321, -11.22, 0.00012`.

### Karakter

Literal karakter dituliskan dengan mengapitnya menggunakan tanda petik satu (`' '`). Misalnya karakter A ditulis `'A'`. Selain karakter normal, terdapat beberapa karakter dengan fungsi-fungsi khusus yang disebut escape sequence. Berikut adalah escape sequence yang terdapat dalam bahasa C++:

| Escape Sequence | Karakter            |
|-----------------|:--------------------|
| `\b`            | Backspace           |
| `\f`            | Form feed           |
| `\n`            | Newline             |
| `\r`            | Return              |
| `\t`            | Tab horisontal      |
| `\v`            | Tab vertikal        |
| `\\`            | Backslash           |
| `\'`            | Tanda petik satu    |
| `\"`            | Tanda petik dua     |
| `\?`            | Tanda tanya         |
| `\0`            | Karakter null       |

### String

String adalah kumpulan dari satu karakter atau lebih. Literal string diapit oleh tanda petik dua (`" "`). Misalnya, `"Hello world!"`. Representasi string dalam bahasa C menggunakan array bertipe `char`. Kita akan mempelajarinya di bagian selanjutnya.

## Mendefinisikan Konstanta

Untuk mendefinisikan konstanta, dapat dilakukan dengan cara-cara seperti berikut.

### Mendefinisikan Variabel Konstan

Variabel juga dapat dibuat konstan nilainya agar tidak berubah selama program berjalan. Variabel konstan dibuat dengan menambahkan keyword `const` saat pendefinisian variabel.
 
```c++
const tipe_data nama_var = <nilai yang bersesuaian>
```

Perlu diperhatikan bahwa ketika mendefinisikan variabel konstan, kita harus langsung mengisinya dengan nilai. 
Contoh:

```c++
const int konstInt = 23;  
const double konstDouble = 23.12;
```

Jika kita mencoba mengubah variabel konstan, akan terjadi eror. 

```c++
const int konstInt = 23;  
konsInt = 11; // Error
```

### Menggunakan #define

Cara lainnya adalah menggunakan preprocessor directive `#define`. Sintaksnya adalah sebagai berikut.
 
```
#define nama <nilai yang bersesuaian>
```

Contoh:
```c++
#define konstInt 23  
#define konstDouble 23.11  
  
int main()  
{  
    int    a = konstInt;  
    double b = konstDouble;  
}  
```

# Tipe Data Dasar

Tiap data yang disimpan dalam variabel mempunyai tipe. Tipe data ini akan menentukan jangkauan nilai dan memori yang dipakai variabel, serta format penulisan kode. Dalam bahasa C++, terdapat beberapa jenis tipe data: tipe data dasar, tipe data turunan, dan void. Untuk kali ini kita akan berfokus pada tipe data dasar.

Setiap tipe data mempunyai jangkauan nilai. Jika nilai yang dimasukkan ke dalam variabel ada di luar jangkauan nilai tipe datanya, maka nilai yang tersimpan tidak akan sesuai. Sebagai contoh:

```C++
#include <iostream>

using namespace std;

int main()
{
    int a = 2147483650;
    int b = -2147483650;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

```

Jangkauan nilai dari variable bertipe int adalah antara -2.147.483.648 sampai 2.147.483.647. Namun, dalam kode di atas, kita memasukkan -2.147.483.650 dan 2.147.483.650 ke dalam variabel a dan b yang bertipe int. Jika kita jalankan kode tersebut, outputnya:

```
-2147483646
2147483646
```

Terlihat bahwa nilai yang tersimpan dalam variabel a dan b tidak sesuai dengan yang kita masukkan. 

## Tipe Bilangan Bulat

Bilangan Bulat adalah bilangan yang tidak mempunyai nilai pecahan. Tipe data bilangan bulat pada bahasa C++ diantaranya sebagai berikut.

<table>
    <thead>
        <tr>
            <th rowspan="2" align="center">Tipe Data</th>
            <th rowspan="2" align="center">Memori (Byte)</th>
            <th colspan="3" align="center">Jangkauan Nilai</th>
            <th rowspan="2" align="center">Format Specifier</th>
        </tr>
        <tr>
            <th align="center">Min</th>
            <th align="center"></th>
            <th align="center">Max</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>short</td>
            <td align="center">2</td>
            <td align="center">-2<sup>15</sup></td>
            <td align="center">s.d</td>
            <td align="center">2<sup>15</sup> - 1</td>
            <td align="center">%hi</td>
        </tr>
        <tr>
            <td>unsigned short</td>
            <td align="center">2 - 4</td>
            <td align="center">0</td>
            <td align="center">s.d</td>
            <td align="center">2<sup>16</sup> - 1</td>
            <td align="center">%hu</td>
        </tr>
        <tr>
            <td>int</td>
            <td align="center">4</td>
            <td align="center">-2<sup>31</sup></td>
            <td align="center">s.d</td>
            <td align="center">2<sup>31</sup> - 1</td>
            <td align="center">%d</td>
        </tr>
        <tr>
            <td>unsigned int</td>
            <td align="center">4</td>
            <td align="center">0</td>
            <td align="center">s.d</td>
            <td align="center">2<sup>32</sup> - 1</td>
            <td align="center">%u</td>
        </tr>
        <tr>
            <td>long</td>
            <td align="center">4</td>
            <td align="center">-2<sup>31</sup></td>
            <td align="center">s.d</td>
            <td align="center">2<sup>31</sup> - 1</td>
            <td align="center">%ld</td>
        </tr>
        <tr>
            <td>unsigned long</td>
            <td align="center">4</td>
            <td align="center">0</td>
            <td align="center">s.d</td>
            <td align="center">2<sup>32</sup> - 1</td>
            <td align="center">%lu</td>
        </tr>
        <tr>
            <td>long long</td>
            <td align="center">8</td>
            <td align="center">-2<sup>63</sup></td>
            <td align="center">s.d</td>
            <td align="center">2<sup>63</sup> - 1</td>
            <td align="center">%lld</td>
        </tr>
        <tr>
            <td>unsigned long long</td>
            <td align="center">8</td>
            <td align="center">0</td>
            <td align="center">s.d</td>
            <td align="center">2<sup>64</sup> - 1</td>
            <td align="center">%llu</td>
        </tr>
    </tbody>
</table>

Seperti namanya, tipe-tipe data di atas digunakan untuk merepresentasikan bilangan bulat (positif dan negatif) dan nol. Misalnya, 0, -5, 12, -1, 200 dsb. Perlu ditekankan bahwa tipe-tipe data di atas tidak bisa digunakan untuk merepresentasikan bilangan berkoma, seperti 0.5, 0.25, -0.42, dsb. 

Jika diperhatikan, beberapa tipe data di atas mempunyai awalan **unsigned** yang artinya tidak bertanda. Tipe-tipe data unsigned tidak dapat menampung bilangan negatif. Kebalikannya adalah **signed** yang dapat menampung bilangan negatif. Secara default, tipe data tanpa awalan unsigned merupakan tipe data signed. 

Dalam memprogram, yang umum digunakan adalah int dan long long.

## Tipe Bilangan Real

Bilangan Real atau floating-point adalah bilangan yang mempunyai nilai pecahan (real). Tipe data bilangan real pada bahasa C++ di antaranya adalah sebagai berikut.

<table>
    <thead>
        <tr>
            <th align="center">Tipe Data</th>
            <th align="center">Memori (Byte)</th>
            <th align="center">Jangkauan Nilai</th>
            <th align="center">Format Specifier</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>float</td>
            <td align="center">4</td>
            <td align="center">&plusmn;3.4 x 10<sup>&plusmn;38</sup> (estimasi)</td>
            <td align="center">%f</td>
        </tr>
        <tr>
            <td>double</td>
            <td align="center">8</td>
            <td align="center">&plusmn;1.7 x 10<sup>&plusmn;308</sup> (estimasi)</td>
            <td align="center">%lf</td>
        </tr>
    </tbody>
</table>

Tipe-tipe data di atas digunakan untuk menyimpan data berupa bilangan real (floating-point) atau bilangan berkoma. Misalnya, `2.35, -12.246, 0.005` dsb.

Tipe yang umum digunakan adalah double.

## Tipe Karakter

Tipe data karakter biasanya digunakan untuk merepresentasikan satu karakter. Karakter mencakup huruf dan tanda baca, seperti `'A'`, `'c'`, `‘-‘`, dan sebagainya. 

Sebenarnya karakter-karakter dalam bahasa C++ adalah bilangan bulat. Bahasa C++ menggunakan sistem pengkodean ASCII yang mengkonversikan bilangan-bilangan tersebut menjadi karakter. Sebagai contoh, 32 adalah kode ASCII untuk karakter spasi (’ ’), 65 adalah kode ASCII untuk huruf ’A’, dan 98 adalah kode ASCII untuk huruf ’b’.

<table>
    <thead>
        <tr>
            <th align="center">Tipe Data</th>
            <th align="center">Memori (Byte)</th>
            <th align="center">Jangkauan Nilai</th>
            <th align="center">Format Specifier</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>char</td>
            <td align="center">1</td>
            <td align="center">-2<sup>7</sup> s.d 2<sup>7</sup> - 1</td>
            <td align="center">%c</td>
        </tr>
        <tr>
            <td>unsigned char</td>
            <td align="center">1</td>
            <td align="center">0 s.d 2<sup>8</sup> - 1</td>
            <td align="center">%c</td>
        </tr>
    </tbody>
</table>

## Tipe Boolean
Tipe data boolean digunakan untuk menyimpan nilai kebenaran, yaitu hanya TRUE atau FALSE. Nilai kebenaran ini dapat pula direpresentasikan oleh bilangan 1 untuk nilai TRUE dan 0 untuk nilai FALSE. Tipe data boolean akan lebih terasa kebermanfaatannya ketika kita sudah mempelajari struktur percabangan dan array.

<table>
    <thead>
        <tr>
            <th align="center">Tipe Data</th>
            <th align="center">Memori (Byte)</th>
            <th align="center">Jangkauan Nilai</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>bool</td>
            <td align="center">1</td>
            <td align="center">true (1) / false (0)</td>
        </tr>
    </tbody>
</table>
