# Daftar Isi

# Mengenal Program, Pemrograman dan Bahasa Pemrograman

**Program** adalah **serangkaian instruksi** yang **dieksekusi mesin** untuk mencapai tujuan tertentu. Program biasanya menerima masukan, lalu memprosesnya untuk menghasilkan suatu keluaran. 

Misal ada program penerjemah bahasa Inggris ke Bahasa Indonesia. Program tersebut menerima masukan berupa teks dalam bahasa Inggris, lalu menerjemahkannya untuk menghasilkan keluaran berupa teks dalam bahasa Indonesia. 

**Pemrograman** adalah aktivitas **menulis program**. Program ditulis dengan **bahasa pemrograman**, sehingga mesin atau komputer dapat mengerti apa yang yang diinstruksikan. Bahasa yang akan kita gunakan dalam pembelajaran kali ini adalah C++. 

## Cara Komputer Menjalankan Program

Awalnya pemrograman dilakukan dengan **Bahasa *Assembly*** atau bahasa mesin yang disebut sebagai **bahasa pemrograman tingkat rendah**. Bahasa tingkat rendah **mudah dipahami mesin**, tapi **sulit dibaca dan dimengerti manusia.** 

Kemudian, diciptakanlah **bahasa pemrograman tingkat tinggi** yang **lebih mudah dipahami manusia** karena menggunakan frase bahasa sehari-hari. Akan tetapi, bahasa pemrograman tingkat tinggi tidak bisa langsung dimengerti oleh mesin, **harus diterjemahkan dulu** menjadi bahasa tingkat rendah. 

Untuk bahasa C++, penerjemahan ini disebut sebagai **kompilasi** dan dilakukan oleh **_compiler_**. Setelah diterjemahkan, program dapat dieksekusi oleh komputer. Secara singkat, siklus kerja jika kita menggunakan *compiler* adalah:

> tulis program → kompilasi → eksekusi

# Mengenal IDE
**IDE** atau **Integrated Development Environment** adalah ***software*** yang **menyediakan fitur-fitur** yang diperlukan untuk **menulis** dan **menjalankan program**. Termasuk di antaranya *text editor* untuk menulis dan mengedit kode program, dan juga *compiler*. 

## Instalasi IDE
IDE yang akan kita gunakan adalah Codeblocks yang bisa di-*download* di [sini](https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download).

| <img src="https://user-images.githubusercontent.com/70790033/178111655-bdde4218-6f85-477c-8381-0701795e0861.png" width="400"> | 
|:--:| 
| Setelah *download* selesai, langsung jalankan saja *installer*-nya. Waktu meng-*install*, **biarkan semua kotak tercentang.**  |

| <img src="https://user-images.githubusercontent.com/70790033/178111678-333017a5-0eda-4b3e-9bcf-88c7258fd2a3.png" width="400"> | 
|:--:| 
| Di saat membuka Codeblocks pertama kali, pastikan **GNU GCC Compiler** sudah terdeteksi. |

| <img src="https://user-images.githubusercontent.com/70790033/178111798-fae47fe1-0c99-4563-9329-0cc3f5e75dfd.png" width="650"> | 
|:--:| 
| Tampilan Codeblocks saat sudah terbuka |

## Membuat Project dan File Baru di IDE
Sebelum menulis kode, kita perlu membuat *project* terlebih dahulu
1. Pilih ***Create a new project***
2. Pilih ***Console application***, lalu klik *Next* 
3. Pilih **C++,** lalu klik *Next*
4. Tuliskan ***project title***, pilih ***folder*** tempat project, lalu klik *Next*
5. Pastikan bahwa compiler yang digunakan adalah **GNU GCC Compiler**, lalu klik *Finish*

https://user-images.githubusercontent.com/70790033/179145236-7e407e8b-3ab2-4da4-93f9-424b4abf38b4.mp4

Cara alternatifnya
1. Pilih ***File*** di bar atas
2. Pilih ***New***, lalu pilih ***Project***
3. Pilih ***Console application***, lalu klik *Next* 
4. Pilih **C++**, lalu klik *Next*
5. Tuliskan ***project title***, pilih ***folder*** tempat project, lalu klik *Next*
6. Pastikan bahwa compiler yang digunakan adalah **GNU GCC Compiler**, lalu klik *Finish*

https://user-images.githubusercontent.com/70790033/179145477-f9c8b62e-e9e6-45fc-bb1d-2ec0586eb67f.mp4

## Menulis dan Mengedit Kode di IDE
Setelah *project* sudah dibuat
1. Di sidebar kiri, *double-click* **project** yang sudah kita buat
2. *Double-click* ***Sources***
3. Akan muncul file **main.cpp**, *double-click* lagi untuk memunculkannya dalam *text editor*
4. Setelah ***text editor*** muncul, akan langsung tertulis kode program untuk Hello World, kita bisa mulai mengedit kode ini sesuai keinginan

https://user-images.githubusercontent.com/70790033/179146060-8c110019-1c73-4635-95a0-2f1dc116f209.mp4

## Menjalankan Program di IDE
1. Klik tombol ***Build and run*** berwarna kuning dan hijau yang ada di bar atas

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

Baris 1 pada kode di atas disebut dengan **preprocessor directive**. Preprocessor directive adalah **perintah awal** kepada komputer **sebelum menjalankan program** kita. Preprocessor yang digunakan dalam hal ini adalah `#include`. 

Preprocessor **`#include`** menjelaskan bahwa program **menyertakan suatu file**. Dalam program "Hello world!" di atas, file yang disertakan adalah header file `<iostream>`. **Header file** merupakan **library bawaan** C++ yang **berisi deklarasi variabel, fungsi, dan tipe data** yang diperlukan program. Dengan menyertakan header file, kita bisa menggunakan isi-isinya. 

**`<iostream>`** adalah singkatan dari **input-output stream**, atau aliran input-output. Sesuai namanya, `<iostream>` adalah header file yang **menyediakan cara** melakukan **input** dan **output** dengan fungsi-fungsi seperti cin dan cout. 

Sederhananya `using namespace std` digunakan untuk mempersingkat penulisan kode. std adalah standard library yang berasal dari `<iostream>`. Tanpa barisan kode ini, kita perlu menuliskan `std::` setiap kali kita hendak memakai cout, endl, cin. Seperti ini:

```C++
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

### Whitespace

Dapat diperhatikan pada kode bahwa baris 2 dan 4 kosong (tidak terdapat karakter apapun). Ini disebut dengan **whitespace**. Whitespace adalah area kosong pada kode, dan biasanya **ditujukan agar kode mudah dibaca**.

Terdapat tiga jenis whitespace, yakni **space**, **tab**, dan **newline**. Baris 2 dan 4 adalah contoh dari new line.

### Fungsi `main()`

Fungsi `main()` pada kode di atas ditunjukan pada baris ke 5 hingga baris ke 9.

```C++
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```

Dalam bahasa C++, fungsi **`main()`** adalah **fungsi utama** yang **harus ada**. Jika program kita ibaratkan sebuah rumah, fungsi `main()` adalah pintu masuknya. Dia **menandakan tempat dimulainya eksekusi kode**. 

+ **Baris 5** menunjukkan **nama** dari fungsi dan **tipe return** dari **fungsi** tersebut. int merupakan tipe return dari fungsi yang bernama `main()`. 
+ **Baris 6** terdapat **tanda  `{`** yang menandakan **pembuka** dari fungsi `main()`.
+ **Baris 7 s.d 8** merupakan **tubuh** dari fungsi `main()`. Pada dasarnya, tubuh dari sebuah fungsi berada di antara tanda `{ }`.
+ **Baris 9** terdapat **tanda **`}`**** yang menandakan **penutup** dari fungsi `main()`. 

### Statement

Di dalam fungsi `main()`, terdapat dua **statement** yang ditunjukkan pada baris 7 dan 8. Sebagian besar statement **diakhiri** oleh **tanda titik-koma (`;`)**.

```c++
cout << "Hello world!" << endl;
return 0;
```

+ Statement baris 7 diawali dengan **`cout`**. `cout` adalah singkatan dari **console out**. `cout` adalah fungsi yang disediakan oleh `<iostream>` untuk **mencetak output pada konsol (layar)**. 
+ Kemudian, ada `<<` yang merupakan **operator insertion**. Kode `cout << "Hello world!"` berarti teks `"Hello world!"` dimasukkan (di-*insert*) ke dalam cout untuk ditampilkan pada konsol. 
+ Terakhir, ada `endl`, singkatan dari **endline**, yang **menandakan akhir dari suatu baris**. 

Statement pada baris 8 disebut dengan **return statement**. Perintah `return 0` pada fungsi `main()` digunakan untuk **mengakhiri program** dan **menandakan program tersebut berhasil dieksekusi**.

# Komentar

**Komentar** (_comment_) adalah bagian dari program yang **tidak akan dieksekusi**. Komentar sangat berguna **untuk mendeskripsikan program** yang dibuat, misalnya saja untuk menjelaskan bagian dari kode agar mudah dipahami oleh programmer lainnya. Terdapat dua jenis komentar dalam bahasa C++.

## Komentar Single-Line

Seperti namanya, komentar single-line hanya bekerja pada **satu baris**. Komentar single-line **diawali** dengan **simbol `//`** . Semua karakter (pada satu baris) dibelakang simbol `//` akan diabaikan.

```c++
// Ini adalah komentar single-line  
  
// Fungsi untuk mencetak ke layar  
cout << "Hello world!" << endl;

```

## Komentar Multi-Line

Sedangkan komentar multi-line dapat bekerja pada **lebih dari satu baris**. Pasangan **simbol `/*` dan `*/`** digunakan untuk membuat komentar multi-line. Semua karakter yang berada di antara dua simbol tersebut akan diabaikan.

```c++
/* 
Ini adalah komentar multi-line 
Semua yang berada di sini akan 
diabaikan 
*/  
```
# Keyword dan Identifier
## Keyword

**Keyword** merupakan **kata-kata khusus** yang digunakan bahasa C++ untuk **tujuan tertentu**, misalnya void, int, public, dsb. Kata-kata ini **tidak bisa digunakan** untuk **nama variabel atau fungsi**. Berikut adalah daftar keyword pada bahasa C++.

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

**Identifier** merujuk pada **penamaan sebuah entitas**, seperti pada **[variabel](#variabel), fungsi, structures** dan lain-lain. Karena identifier menamai sebuah entitas, maka nama dari identifier harus unik (dua entitas tidak boleh mempunyai nama identifier yang sama).

Aturan penamaan identifier:

+ Identifier bukan merupakan [keyword](#keyword).
+ Identifier hanya boleh terdiri dari huruf lowercase, huruf uppercase, digit, dan simbol underscore ( _ ).
+ Identifier tidak boleh mengandung whitespace.
+ Identifier harus dimulai dengan huruf atau simbol underscore. Tidak boleh dimulai dengan digit/angka.
+ Bersifat case-sensitive, artinya identifier `variable` berbeda dengan `vAriaBle`.

# Variabel

## Pengenalan Variabel

Pada dasarnya program bekerja dengan mengolah data. Nah, **data** ini bisa kita simpan dalam suatu **wadah** yang disebut **variabel**. **Nilai data** dari variabel **dapat berubah-ubah** selama proses program. Dalam bahasa C++, variabel menyimpan data dengan **tipe data** tertentu. Jika variabel kita ibaratkan sebuah gelas, maka tipe data adalah jenis cairan yang kita tuangkan ke dalamnya. 

## Deklarasi dan Definisi Variabel

Pada bahasa C++, variabel harus dideklarasikan dulu sebelum digunakan. Seperti halnya gelas tadi, gelas tersebut harus disediakan terlebih dahulu sebelum bisa digunakan.

Untuk mendeklarasikan sebuah variabel, sintaksnya adalah sebagai berikut.

```
<tipe_data> <identifier>
```

Contohnya potongan kode berikut mendeklarasikan variabel `x` yang bertipe `int`.

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

## Pengisian Nilai Pada Variabel

Setelah mendeklarasikan variabel, kita bisa mengisinya dengan sebuah nilai. Pengisian ini kita lakukan dengan **operator assignment** (simbol `=`).

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

## Inisialisasi Variabel

**Deklarasi** dan **pengisian nilai** pada variabel dapat dilakukan dalam satu instruksi **sekaligus**. Hal ini disebut dengan **inisialisasi**. Dengan melakukan inisialisasi variabel, berarti kita memberikan nilai awal pada variabel tersebut.

```
tipe_data identifier_variabel = <nilai yang bersesuaian>;
```

Contoh:

```c++
int x = 6;
```

# Konstanta dan Literal

**Konstanta** mirip seperti variabel. Keduanya sama-sama bisa kita gunakan **untuk menyimpan data**. Bedanya, **isi data** dalam konstanta **tidak bisa diubah**. **Literal** adalah **nilai data yang kita masukkan** dalam konstanta. Contohnya:

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

## Bilangan Bulat

Terdapat tiga cara untuk menuliskan literal bilangan bulat. Yakni menggunakan basis 10 (desimal), basis 8 (oktal) dan basis 16 (heksadesimal).
+ **Desimal** - ditulis seperti bilangan pada umumnya. Contohnya `100, -22`.
+ **Oktal** - diawali dengan angka “0”, kemudian diikuti bilangan oktal. Contohnya `077, 033`.
+ **Heksadesimal** - diawali dengan “0x”, kemudian diikuti bilangan heksadesimal. Contohnya `0x7f, 0x521`.

## Bilangan Real (floating)

Bilangan real (floating) dituliskan dengan menggunakan **pemisah tanda titik (.)** antara bilangan bulat dan bilangan pecahannya. Contohnya `2.321, -11.22, 0.00012`.

## Karakter

Literal karakter dituliskan dengan diapit **tanda petik satu (`' '`)**. Misalnya karakter A ditulis `'A'`. Selain karakter normal, terdapat beberapa **karakter** dengan **fungsi-fungsi khusus** yang disebut **escape sequence**. Berikut adalah escape sequence yang terdapat dalam bahasa C++:

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

Escape sequence yang paling sering digunakan adalah '\n' atau newline. Sesuai namanya, dia akan menambahkan baris baru. 

## String

String adalah **kumpulan** dari satu **karakter** atau lebih. Literal string **diapit tanda petik dua (`" "`)**. Misalnya, `"Hello world!"`. Representasi string dalam bahasa C menggunakan array bertipe `char`. Kita akan mempelajarinya di bagian selanjutnya.

## Mendefinisikan Konstanta

Untuk mendefinisikan konstanta, dapat dilakukan dengan cara-cara seperti berikut.

### Mendefinisikan Variabel Konstan

Variabel juga dapat dibuat konstan nilainya agar tidak berubah selama program berjalan. Variabel konstan dibuat dengan **menambahkan keyword `const`** saat pendefinisian variabel.
 
```c++
const tipe_data nama_var = <nilai yang bersesuaian>
```

Perlu diperhatikan bahwa ketika mendefinisikan variabel konstan, kita **harus langsung mengisinya dengan nilai**. 

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

Setiap tipe data mempunyai **jangkauan nilai**. Jika nilai yang dimasukkan ke dalam variabel ada di luar jangkauan nilai tipe datanya, maka nilai yang tersimpan tidak akan sesuai. Sebagai contoh:

```C++
#include <iostream>

using namespace std;

int main()
{
    int a = 3000000000;
    int b = -3000000000;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

```

Jangkauan nilai dari variable bertipe int adalah antara -2.147.483.648 sampai 2.147.483.647. Namun, dalam kode di atas, kita memasukkan -3.000.000.000 dan 3.000.000.000 ke dalam variabel a dan b yang bertipe int. Jika kita jalankan kode tersebut, outputnya:

```
-2147483646
2147483646
```

Terlihat bahwa nilai yang tersimpan dalam variabel a dan b tidak sesuai dengan yang kita masukkan. Ibaratnya jika  kita mengisi gelas 100ml dengan air 200ml, pasti ada air yang tumpah, tidak semua air bisa tersimpan dalam gelas. 

## Tipe Bilangan Bulat

Bilangan Bulat adalah bilangan yang **tidak mempunyai nilai pecahan**. Tipe data bilangan bulat pada bahasa C++ diantaranya sebagai berikut.

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

Seperti namanya, tipe-tipe data di atas digunakan untuk merepresentasikan bilangan bulat (positif dan negatif) dan nol. Misalnya, 0, -5, 12, -1, 200 dsb. Perlu ditekankan bahwa tipe-tipe data di atas **tidak bisa** digunakan untuk merepresentasikan bilangan **berkoma**, seperti 0.5, 0.25, -0.42, dsb. 

Jika diperhatikan, beberapa tipe data di atas mempunyai awalan **unsigned** yang artinya tidak bertanda. Tipe-tipe data unsigned **tidak dapat menampung bilangan negatif**. Kebalikannya adalah **signed** yang **dapat menampung bilangan negatif**. Secara default, tipe data tanpa awalan unsigned merupakan tipe data signed. 

Dalam memprogram, yang umum digunakan adalah **int** dan **long long**. 

## Tipe Bilangan Real

Bilangan Real atau floating-point adalah bilangan yang **mempunyai nilai pecahan** (real). Tipe data bilangan real pada bahasa C++ di antaranya adalah sebagai berikut.

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

Tipe yang umum digunakan adalah **double**.

## Tipe Karakter

Tipe data karakter biasanya digunakan untuk merepresentasikan **satu karakter**. Karakter mencakup **huruf** dan **tanda baca**, seperti `'A'`, `'c'`, `‘-‘`, dan sebagainya. 

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
Tipe data boolean digunakan untuk menyimpan **nilai kebenaran**, yaitu hanya **TRUE** atau **FALSE**. Nilai kebenaran ini direpresentasikan oleh bilangan **1** untuk nilai **TRUE** dan **0** untuk nilai **FALSE**. Tipe data boolean akan lebih terasa kebermanfaatannya ketika kita sudah mempelajari struktur percabangan dan array.

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
            <td>bool</td>
            <td align="center">1</td>
            <td align="center">1 (true) / 0 (false)</td>
            <td align="center">%d</td>
        </tr>
    </tbody>
</table>

# Input dan Output Dasar

Program yang kita buat dapat dijadikan program interaktif. Kita dapat memintanya untuk menerima input (dari keyboard) lalu menampilkan hasil output (pada konsol layar). Fungsi-fungsi yang berkaitan dengan input/output ada di dalam library `<iostream>` (input output stream) dan `<cstdio>`.

## Output Dasar

### Fungsi `cout`

Fungsi pertama yang dapat digunakan untuk mencetak output pada konsol, adalah `cout` yang berasal dari header file `<iostream>`. **Data** yang ingin kita output-kan bisa **dimasukkan** ke dalam `cout` **dengan operator insertion `<<`**. Data tersebut dapat berupa nilai atau variabel. Sebagai contoh, perhatikan kode berikut:

```c++
#include <iostream>
using namespace std;

int main()
{
    // Nilai langsung

    // String
    cout << "Ini langsung string" << endl;

    // Integer
    cout << 420 << endl;

    // Float
    cout << 0.609 << endl;

    // Char
    cout << 'a' << endl;

    // Boolean
    cout << true << endl;

    return 0;
}
```

Kode di atas akan menghasilkan output:

```
Ini langsung string
420
0.609
a
1
```

Untuk penggunaan cout dengan variabel:

```c++
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Variable

    // String
    string text = "Ini lewat variable";
    cout << text << endl;

    // Integer
    int a = 420;
    cout << a << endl;

    // Float
    float b = 0.609;
    cout << b << endl;

    // Char
    char huruf = 'a';
    cout << huruf << endl;

    // Boolean
    bool broly = true;
    cout << broly << endl;

    return 0;
}
```

Akan dihasilkan output:

```
Ini lewat variable
420
0.609
a
1
```
Kita dapat mencetak beberapa nilai atau variabel sekaligus dalam satu statement cout:

```C++
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    cout << a << " " << 3 << endl;
}
```

Output:
```
2 3
```

Selain itu, kita dapat pula memasukkan operasi:

```C++
#include <iostream>
using namespace std;

int main()
{
    // Aritmatika
    cout << 10 + 2 << endl;

    float a = 0.5;
    int b = 2;
    cout << a * b << endl;

    // Perbandingan
    cout << (a < b) << endl;

    // Unary
    cout << b++ << endl;

    return 0;
}
```

Akan dihasilkan output:

```
12
1
1
2
```

Jika belum paham perihal operasi dan operator, jangan khawatir karena akan dibahas setelah materi input output. 

Perlu diperhatikan bahwa dua statement `cout` yang berbeda baris, tidak selalu menghasilkan output yang berbeda baris pula. **Tanpa `endl` atau `\n` (newline)**, output akan tetap pada **baris yang sama**.

```C++
#include <iostream>

using namespace std;

int main()
{
    // Dengan Endl
    cout << "Beda" << endl;
    cout << "Baris" << endl;

    // Dengan \n
    cout << "Beda\n";
    cout << "Baris Juga\n";

    // Tanpa Endl
    cout << "Masih";
    cout << "Sebaris";
    return 0;
}
```

```
Beda
Baris
Beda
Baris Juga
MasihSebaris
```

### Fungsi `printf()`

Fungsi kedua yang dapat digunakan untuk mencetak output pada konsol, adalah `printf()` yang berasal dari header file `<cstdio>`. Fungsi `printf()` menerima string sebagai argumen.

```c++
#include <cstdio>  
  
int main()   
{  
    printf("Ini adalah sebuah string\n");  
    return 0;  
} 
```

Output:

```
Ini adalah sebuah string
```

Kita juga dapat menambahkan escape sequence pada string. Misalkan, kita ubah statement `printf()` di atas menjadi:

```c++
printf("Ini adalah sebuah string\nAku adalah newline\n\tAku adalah karakter \\tab");
```  
 
```
Ini adalah sebuah string
Aku adalah newline
    Aku adalah karakter \tab
```

Memisahkan dua statement `printf()` pada baris berbeda bukan berarti mencetak pada baris berbeda juga. Untuk **berpindah baris** kita perlu menambahkan **newline** (`\n`) seperti pada program di atas.

```c++
#include <cstdio>  
  
int main()   
{  
    printf("Kau kira aku akan");  
    printf("Berpindah baris?");  
    return 0;  
}  
```

Output

```
Kau kira aku akanBerpindah baris?
```

Potongan-potongan kode di atas adalah contoh untuk mencetak string tetap. Lalu bagaimana jika kita ingin mencetak string bersama dengan nilai suatu variabel?

### Output Dengan Format Specifier

Untuk mencetak nilai dari suatu variabel, kita perlu menambahkan argumen pada fungsi `printf()`. Argumen pertama pada fungsi `printf()` selalu berupa string. Kita dapat memasukkan variabel/nilai pada argumen ke-2, 3, 4 dan seterusnya sesuai kebutuhan.

Ingat, pada chapter [Tipe Data Dasar](#tipe-data-dasar), setiap tipe data mempunyai **format specifier** masing-masing. Nah, format specifier inilah yang akan kita gunakan untuk mencetak nilai dari suatu variabel.
 
```
printf(“<format string>”, var1, var2, var3, ... dst);
```

Misalnya, kita mempunyai dua variabel bertipe int dan char yakni `a = 2` dan `b = ‘X’`. Kita hendak mencetak nilai dari `a` dan `b` dipisahkan oleh spasi, maka programnya seperti:   

```c++
#include <cstdio>  
  
int main()   
{  
    int  a = 2;  
    char b = 'X';  
    printf("%d %c", a, b);  
    return 0;  
}
```

Output

```
2 X
```
 
Perhatikan ilustrasi di bawah.
 
![pict_printf](https://user-images.githubusercontent.com/70790033/180680150-9436793d-3388-419e-a2c6-8e107fe24f87.png)

Dengan menyertakan format specifier dari tipe data yang bersesuaian, kita dapat mencetak nilai dari variabel tersebut. 
+ Fungsi `printf()` di atas mencetak string dengan nilai dua variabel (dua format specifier yang dipisahkan spasi).
+ Format specifier pertama adalah format specifier tipe data int dan akan merujuk pada variabel pertama yang dimasukkan, yakni `a`.
+ Format specifier kedua adalah format specifier tipe data char dan akan merujuk pada variabel kedua, yakni `b`.
+ Dan begitu seterusnya, satu format specifier untuk satu variabel berurutan.
Dengan begitu, kita dapat menyertakan format specifier bersamaan dengan string.

```c++
printf("Nilai dari a = %d, dan b = '%c'", a, b);    
```

```
Nilai dari a = 2, dan b = ‘X’
```

Format specifier dapat pula kita gunakan untuk mencetak hasil dari operasi antar nilai atau variabel.

```c++
#include <cstdio>

int main()
{
    int  a = 2;
    char b = 3;
    printf("%d\n", a+b);
    printf("%d\n", 5-3);
    return 0;
}
```

```
5
2
```

## Input Dasar

Pada program-program di atas, jika kita ingin mengubah atau memasukkan nilai ke variabel, kita perlu mengedit kode programnya dan mengkompilasi ulang. Nah, bagaimana jika kita ingin langsung memberi nilai pada variabel melalui programnya, tanpa harus mengedit kode? Hal ini bisa kita lakukan dengan input. 

Input bisa berasal dari berbagai sumber, seperti keyboard dan file. Di sini, kita akan berfokus pada cara menerima input dari keyboard. Umumnya, user akan mengetikkan data/nilai yang kemudian dimasukkan pada variabel. 

### Fungsi `cin`

Fungsi pertama yang dapat kita gunakan adalah `cin` dari header file `<iostream>`. `cin` biasanya digunakan dengan **tanda `>>`** yang disebut **extraction operator**. Extraction operator akan **mengekstrak nilai** dari **input** dan **memasukkannya ke** dalam **variabel**. 

Sebagai contoh, program di bawah menerima input berupa integer yang kemudian dimasukkan ke variabel `a`. Nilai variabel `a` lalu dicetak dengan format _“a mempunyai nilai = ”_.

```c++
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << "a mempunyai nilai = " << a;
    return 0;
}
```

Input

```
5
```

Output

```
a mempunyai nilai = 5
```

Tidak hanya int, `cin` bisa juga digunakan untuk variabel bertipe data lain, seperti String, char, dan double:

```c++
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // String
    string s;
    cin >> s;
    cout << "s berisi = " << s << endl;

    // Char
    char c;
    cin >> c;
    cout << "c berisi = " << c << endl;

    // Double
    double d;
    cin >> d;
    cout << "d bernilai = " << d << endl;

    return 0;
}
```

Input

```
Halo
E 
0.56
```

Output

```
s berisi = Halo
c berisi = E
d bernilai = 0.56
```

Satu baris `cin` bisa kita gunakan untuk menerima input beberapa variabel sekaligus, seperti pada program berikut:

```c++
#include <iostream>
using namespace std;
  
int main()   
{  
    int a;
    char b;
    double c;

    cin >> a >> b >> c;
    cout << "a mempunyai nilai = " << a << endl;
    cout << "b mempunyai nilai = " << b << endl;
    cout << "c mempunyai nilai = " << c << endl;
    return 0;  
}
```

Input

```
5 Y 0.2
```

Output

```
a mempunyai nilai = 5
b mempunyai nilai = Y
c mempunyai nilai = 0.2
```

Untuk memberitahu user data apa yang perlu dia inputkan, kita bisa memberikan prompt dengan `cout` sebelum `cin`. Ini bukan sesuatu yang wajib dilakukan, melainkan hanya bantuan bagi user untuk memahami program. 

```C++
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Masukkan int : ";
    cin >> i;
    cout << "i bernilai = " << i << endl;
    return 0;
}
```

```
Masukkan int : 10
i bernilai = 10
```

`cin` memiliki beberapa fungsi turunan seperti `cin.get`, `cin.getline()`, `cin.read()`, dan `cin.ignore()`. Namun, fungsi-fungsi ini jarang digunakan. Jika kalian hendak mengetahui lebih lanjut, bisa mengunjungi link https://www.geeksforgeeks.org/cin-in-c/.

### Fungsi `scanf()`

Fungsi kedua yang dapat kita gunakan adalah `scanf()` dari header file `<cstdio>`. Cara kerja `scanf()` adalah dengan **mencari token** yang dapat dibaca berikutnya, lalu **mengambil nilainya**. Token adalah adalah **serangkaian karakter non-spasi**, misalnya huruf atau angka. Pada contoh di bawah, token yang dimaksud adalah bilangan yang akan menjadi nilai variabel `n`.

Parameter dari fungsi `scanf()` sama persis dengan fungsi `printf()`. Kita menggunakan format specifier untuk menentukan jenis tipe data yang kita input, kemudian nilai input tersebut akan di-assign ke variabel.

Sebagai contoh, program di bawah menerima input berupa bilangan bulat yang disimpan pada variabel `n`, kemudian mencetak nilai variabel n dengan format _“n mempunyai nilai = n”_.

```c++
#include <cstdio>  
  
int main()   
{  
    int n;  
    scanf("%d", &n);  
    printf("n mempunyai nilai = %d", n);  
    return 0;  
} 
```

Input

```
3
```

Output

```
n mempunyai nilai = 3
```

Jika kita perhatikan, ada sedikit perbedaan antara scanf dan printf, yakni adanya **karakter `'&'` sebelum nama variabel**. 

```
scanf(“<format string>”, &var1, &var2, &var3, ... dst);
```

Misalnya, kita mempunyai tiga variabel bertipe int, char, dan double, yakni `a`, `b`, dan `c`. Kita hendak menerima input dan memasukannya ke dalam ketiga variabel ini. Maka, programnya seperti: 

```c++
#include <cstdio>  
  
int main()   
{  
    int  a; 
    char b;
    double c;
    scanf("%d %c %lf", &a, &b, &c);  
    printf("a bernilai = %d\n", a); 
    printf("b bernilai = %c\n", b); 
    printf("c bernilai = %lf\n", c);
    return 0;  
}
```

Input

```
5 K 0.3
```

Output

```
a bernilai = 5
b bernilai = K
c bernilai = 0.300000
```
Ilustrasi

![pict_scanf](https://i.ibb.co/Xyw1yLz/scanf.png)


Khusus untuk tipe data char, scanf akan membaca 1 karakter selanjutnya, baik itu spasi, angka, ataupun baris baru. Hal ini dapat menyebabkan nilai variabel menjadi tidak sesuai dengan yang kita inginkan. Perhatikan program berikut:

``` c++
#include <cstdio>  
  
int main()   
{  
    char c1, c2;
    int b;

    scanf("%c", &c1);
    scanf("%d", &b);
    scanf("%c", &c2);  
    printf("c1 bernilai = %c\n", c1); 
    printf("b bernilai = %d\n", b);
    printf("c2 bernilai = %c\n", c2); 
    return 0;  
}
```

Input

```
m
4
t
```

Output

```
c1 bernilai = m
b bernilai = 4
c2 bernilai = 
```

Pada input, kita ingin memasukkan `'m'` ke variabel `c1`, 4 ke variabel `b`, dan `'t'` ke variabel `c2`. Akan tetapi, variabel `c2` justru memiliki nilai berupa karakter enter. Hal ini karena kita menekan enter setelah mengetikkan 4. Masalah ini dapat kita selesaikan dengan menambahkan `'\n'` sebelum melakukan `scanf` untuk variabel `c2`. 

``` c++
#include <cstdio>  
  
int main()   
{  
    char c1, c2;
    int b;

    scanf("%c", &c1);
    scanf("%d\n", &b);
    scanf("%c", &c2);  
    printf("c1 bernilai = %c\n", c1); 
    printf("b bernilai = %d\n", b);
    printf("c2 bernilai = %c\n", c2); 
    return 0;  
}
```

Input

```
m
4
t
```

Output

```
c1 bernilai = m
b bernilai = 4
c2 bernilai = t
```

# Operator

**Operator** dapat dipahami sebagai sesuatu yang dapat **melakukan operasi pada operan** (variabel/nilai). Contohnya, operator + digunakan untuk operasi penjumlahan.

Dilihat dari jumlah operannya, operator dibagi menjadi tiga jenis, yaitu:

+ **Unary** – yakni operator yang bekerja pada **satu operan**, misalnya --5.
+ **Binary** – yakni operator yang bekerja pada **dua operan**, misalnya 2 + 3.
+ **Ternary** – yakni operator yang bekerja pada **tiga operan**. (Akan dibahas pada bagian selanjutnya).

Dilihat dari kegunaannya, berikut adalah jenis-jenis operator pada bahasa C++.

## Operator Assignment

**Operator Assignment** digunakan untuk **mengisikan (assign) sebuah nilai ke variabel**. Simbol yang biasa digunakan adalah tanda sama dengan  `=`. Contohnya:

```c++
int x, y;  
x = 4;  
y = 3;  
x = x + y; // x = 7  
y = x + x; // y = 14 
```

## Operator Aritmatika

Seperti namanya, **operator aritmatika** melakukan **operasi matematika** seperti penjumlahan, pengurangan, pembagian dsb. Operator-operator aritmatika pada bahasa C++ adalah sebagai berikut.

| Simbol | Operasi                                               | Contoh   |
|:------:| ----------------------------------------------------- | :------: |
| +      | Penjumlahan pada dua operan                           | `a + b`  |
| -      | Pengurangan pada dua operan                           | `a - b`  |
| *      | Perkalian pada dua operan                             | `a * b`  |
| /      | Pembagian pada dua operan                             | `a / b`  |
| %      | Menghitung sisa pembagian dua operan (operasi modulo) | `a % b`  |

Sebagai contoh perhatikan program berikut:

```c++
#include <iostream>
using namespace std;
  
int main()   
{  
    int a = 6;
    int b = 4;
    int hasil;

    // Penjumlahan
    hasil = a+b; 
    cout << a << " + " << b << " = " << hasil << endl; 

    // Pengurangan
    hasil = a-b; 
    cout << a << " - " << b << " = " << hasil << endl; 

    // Perkalian
    hasil = a*b; 
    cout << a << " * " << b << " = " << hasil << endl; 

    // Pembagian
    hasil = a/b; 
    cout << a << " / " << b << " = " << hasil << endl; 

    // Modulo
    hasil = a%b; 
    cout << a << " % " << b << " = " << hasil << endl; 

    return 0;
}
```

Output
```
6 + 4 = 10
6 - 4 = 2
6 * 4 = 24
6 / 4 = 1
6 % 4 = 2
```

Dalam program di atas, kita mempunya tiga variabel integer: variabel `a` dengan nilai 6, variabel `b` dengan nilai 4, dan variabel hasil. Kemudian, dilakukan operasi penjumlahan, pengurangan, perkalian, pembagian, dan modulo dengan operan `a` dan `b`. 

Pada output, hasil dari 6 / 4 adalah 1, bukan 1.5. Hal ini karena variabel `a`,`b`, dan `hasil`, semuanya bertipe integer. Jika ingin mendapatkan hasil pecahan, kita perlu mengubah tipe data salah satu variabel operan, dan variabel hasil menjadi float.

```c++
#include <iostream>
using namespace std;
  
int main()   
{  
    float a = 6;
    int b = 4;
    float hasil;
	
	/* Bisa juga
	int a = 6;
	float b = 4;
	float hasil; */

    hasil = a/b; 
    cout << a << " / " << b << " = " << hasil << endl; 
    return 0;
}
```

Output
```
6 / 4 = 1.5
```

Sebagaimana dalam matematika, operator-operator ini juga mempunyai ***precedence*** atau **urutan eksekusi**. Operator **pembagian, perkalian,** dan **modulo** akan **dieksekusi sebelum penjumlahan** dan **pengurangan**. 

```c++
#include <iostream>
using namespace std;
  
int main()   
{  
    int a = 1;
    int b = 2;
    int c = 3;
    int hasil;

    hasil = a + b * c;
    cout << hasil << endl;
}
```

Output
```
7
```

Terlihat bahwa 2 dikalikan 3 dulu, baru ditambahkan 1. Jika kita ingin melakukan operasi penjumlahan/pengurangan sebelum perkalian/pembagian, kita bisa memakai **tanda kurung `'()'`**:

```c++
#include <iostream>
using namespace std;
  
int main()   
{  
    int a = 1;
    int b = 2;
    int c = 3;
    int hasil;

    hasil = (a + b) * c;
    cout << hasil << endl;
}
```

Output
```
9
```

## Operator Increment dan Decrement

**Operator `++`** disebut dengan operator **increment**, sedangkan **operator `--`** merupakan operator **decrement**. Kedua operator ini digunakan untuk **menambah** (increment) atau **mengurangi** (decrement) **nilai suatu variabel dengan nilai 1**. Selain itu, kedua operator ini juga termasuk ke dalam operator unary, yang berarti dia hanya bekerja pada satu operan. 

Terdapat dua cara untuk menggunakan operator ini.

+ **Prefix** - yakni dengan meletakkan operator increment/decrement **sebelum nama variabel**. 

    ```c++
    int a, b;  
    a = b = 5;  
    ++a; // Nilai a sekarang adalah 6  
    --b; // Nilai b sekarang adalah 4
    ```

    Cara kerja dari operator increment/decrement prefix adalah dengan **menambahkan/mengurangi nilai variabel sebelum diproses**. Untuk lebih jelasnya, perhatikan potongan kode berikut

    ```c++
    int a, b;  
    a = 5;  
    b = ++a;
    printf("Nilai b = %d\n", b);
    ```

    Output
    ```
    Nilai b = 6
    ```

    Ketika statement `b = ++a;` dieksekusi, nilai variabel `a` akan ditambah 1 dulu, kemudian baru dimasukkan ke variabel `b`. 

+ **Postfix** - yakni dengan meletakkan operator increment/decrement **setelah nama variabel**. Berkebalikan dengan prefix, operator increment/decrement postfix akan **memproses variabel dulu sebelum ditambah satu**. Perhatikan potongan kode berikut.

    ```c++
    int a, b;
    a = 5;
    b = a++;
    printf("Nilai b = %d\n", b);
    printf("Nilai a = %d\n", a);
    ```

    Output
    ```
    Nilai b = 5
    Nilai a = 6
    ```

    Ketika statement `b = a++;` dieksekusi, nilai variabel `a`, yakni 5, akan dimasukkan dulu ke variabel `b`. Kemudian, barulah variabel `a` ditambah 1. Karena itulah variabel `b` mendapat nilai `a` sebelum terjadi penambahan.

## Operator Relasional

**Operator Relasional** digunakan untuk **memeriksa relasi** dan **membandingkan nilai** dari **dua operan**. **Jika benar** akan menghasilkan nilai **TRUE** (direpresentasikan angka **1**), **jika salah** maka akan menghasilkan nilai **FALSE** (direpresentasikan angka **0**).

Berikut adalah operator-operator relasional dalam bahasa C++.

| Operator                | Simbol   | Keterangan                                                                                            | Contoh                                           |
| ----------------------- | :----:   | ----------------------------------------------------------------------------------------------------- | ------------------------------------------------ |
| Sama dengan             | ==       | Digunakan untuk memeriksa apakah kedua operan memiliki nilai yang sama.                               | 5 == 2 (FALSE)<br>5 == 5 (TRUE)                  |
| Tidak Sama dengan       | !=       | Digunakan untuk memeriksa apakah kedua operan memiliki nilai yang tidak sama.                         | 5 != 2 (TRUE)<br>5 != 5 (FALSE)                  |
| Lebih besar             | >        | Digunakan untuk membandingkan apakah operan pertama lebih besar nilainya dari operan kedua.           | 5 > 2 (TRUE)<br>5 > 5 (FALSE)<br>2 > 4 (FALSE)   |
| Lebih kecil             | <        | Digunakan untuk membandingkan apakah operan pertama lebih kecil nilainya dari operan kedua.           | 5 < 2 (FALSE)<br>5 < 5 (FALSE)<br>2 < 4 (TRUE)   |
| Lebih besar sama dengan | >=       | Digunakan untuk membandingkan apakah operan pertama lebih besar atau sama nilainya dari operan kedua. | 5 >= 2 (TRUE)<br>5 >= 5 (TRUE)<br>2 >= 4 (FALSE) |
| Lebih kecil sama dengan | <=       | Digunakan untuk membandingkan apakah operan pertama lebih kecil atau sama nilainya dari operan kedua. | 5 <= 2 (FALSE)<br>5 <= 5 (TRUE)<br>2 <= 4 (TRUE) |

Sebagai contoh, perhatikan program berikut:

```c++
int a = 2;
int b = 3;
bool hasil;
hasil = (a < b);
cout << hasil << endl;
```

Output
```
1
```

- Pada statement `hasil = (a < b);`, nilai `a` (2) akan dibandingkan dengan nilai `b` (3). 
- Jika nilai `a` lebih kecil dari `b`, maka akan bernilai benar. 
- Jika tidak, maka akan bernilai salah. 
- Dalam hal ini, 2 kurang dari 3, maka `(a < b)` bernilai benar atau TRUE. 
- Nilai TRUE direpresentasikan oleh 1. Nilai inilah yang dimasukkan ke dalam variabel hasil. Oleh karena itu, ketika kita mencetak variabel hasil, nilainya 1. 

## Operator Logika

**Operator Logika** digunakan untuk **menguji kebenaran kondisi/ekspresi**. Operator logika hanya akan menghasilkan nilai **TRUE** (jika benar) atau **FALSE** (jika salah). TRUE direpresentasikan oleh angka 1, sedangkan FALSE oleh angka 0.

Operator-operator logika dalam bahasa C++ adalah sebagai berikut.

| Operator                | Simbol   | Keterangan                                                                                            | Nilai Kebenaran                                              |
| ----------------------- |:------:  | ----------------------------------------------------------------------------------------------------- | ------------------------------------------------------------ |
| Logical NOT             | !        | Operator NOT digunakan untuk membalikkan kondisi, TRUE menjadi FALSE dan FALSE menjadi TRUE.          | `!1 = 0`<br>`!0 = 1`                                         |
| Logical AND             | &&       | Operator AND akan menghasilkan nilai TRUE jika kedua operan mempunyai nilai TRUE.                     | `1 && 1 = 1`<br>`0 && 1 = 0`<br>`1 && 0 = 0`<br>`0 && 0 = 0` |
| Logical OR              | \|\|      | Operator OR akan menghasilkan nilai TRUE jika salah satu operan mempunyai nilai TRUE.                | `1 \|\| 1 = 1`<br>`0 \|\| 1 = 1`<br>`1 \|\| 0 = 1`<br>`0 \|\| 0 = 0` |

> Operator Logika **NOT** merupakan operator unary yang artinya hanya pada bekerja pada satu operan

Operator logika pada umumnya digunakan bersamaan dengan operator relasional untuk menguji ekspresi yang berhubungan dengan kebenaran suatu kondisi. Penggunaan paling umum adalah untuk melakukan percabangan (akan dipelajari di bagian selanjutnya).

Sebagai contoh, perhatikan program berikut:

```c++
int a, b, c, d;  
a = 11;  
b = 24;  
c = 11;  
d = ((a == c) && (b > a));               // 1 (TRUE)  
d = ((a >= b) || (a < c));               // 0 (FALSE)  
d = ((b != b) || (b > c)) && (c == a);   // 1 (TRUE) 
```

Pada statement `d = ((a == c) && (b > a));`
+ `(a == c)` bernilai TRUE, karena `a` dan `c` sama-sama bernilai 11. 
+ `(b > a)` bernilai TRUE, karena 24 kurang dari 11.
+ Karena kedua operan bernilai TRUE, maka nilai dari `((a == c) && (b > a))` juga TRUE.

Pada statement `d = ((a >= b) || (a < c));`
+ `(a >= b)` bernilai FALSE, karena 11 kurang dari 24.
+ `(a < c)` bernilai FALSE, karena `a` dan `c` nilainya sama-sama 11.
+ Karena kedua operan bernilai FALSE, maka nilai dari `((a >= b) || (a < c))` juga FALSE.

Pada statement `d = ((b != b) || (b > c)) && (c == a); `
+ `(b != b)` bernilai FALSE, karena variabel `b` jelas sama dengan dirinya sendiri.
+ `(b > c)` bernilai TRUE, karena 24 kurang dari 11.
+ Karena salah satu operannya bernilai TRUE, `((b != b) || (b > c))` juga bernilai TRUE.
+ `(c == a)` nilai TRUE, karena `a` dan `c` sama-sama bernilai 11. 
+ Karena kedua operannya bernilai TRUE, maka nilai dari `((b != b) || (b > c)) && (c == a)` juga TRUE.

## Operator Gabungan

**Operator Gabungan** adalah operator yang terdiri dari **gabungan dua operator**. Tujuan dari operator gabungan adalah untuk mempersingkat penulisan kode. Berikut adalah operator gabungan dalam bahasa C++.

| Operator | Contoh    | Ekuivalen Dengan        |
| :------: | :------:  | :---------------------: |
| +=	   | `a += b`  |	`a = a + b`      |
| -=	   | `a -= b`  |	`a = a - b`      |
| *=	   | `a *= b`  |	`a = a * b`      |
| /=	   | `a /= b`  |	`a = a / b`      |
| %=	   | `a %= b`  |	`a = a % b`      |
| &=	   | `a &= b`  |	`a = a & b`      |
| \|=	   | `a \|= b` |	`a = a \| b`     |

Contoh:
```c++
int a = 2;
int b = 3;
a *= b; // Sama dengan a = a * b
cout << a << endl; 
```

Output:
```
6
```

## Operator Lain

Selain operator-operator yang telah dijelaskan sebelumnya, terdapat beberapa operator lain yang terdapat pada bahasa C++. Berikut penjelasannya.

### Operator `sizeof()`

Walaupun mempunyai bentuk seperti sebuah fungsi, namun dalam standardisasi bahasa C++ menganggap operator `sizeof()` sebagai operator. Kegunaan dari operator ini adalah untuk **mengetahui besarnya memori** yang digunakan **suatu variabel** atau **tipe data** dalam satuan byte. 

Contoh:

```c++
sizeof(int);
```

### Operator Kondisional (` ? : `)

Operator kondisial merupakan satu-satunya **operator ternary** (bekerja pada tiga operan) dalam bahasa C++. Fungsi dari operator kondisional **layaknya percabangan** menggunakan `if - else` (akan dijelaskan pada modul percabangan).

### Operator Koma (`,`)

Tanda koma (`,`) sebagai operator dalam bahasa C++ merupakan **binary operator** yang akan **mengevaluasi operan pertama**, kemudian akan **membuang hasilnya**. Lalu **mengevaluasi operan kedua** dan akan **mengembalikan nilainya**.

```c++
int number = (5, 23);   // number bernilai 23, bukan 5
```

Selain berfungsi sebagai operator, tanda koma (`,`) juga berfungsi sebagai **separator (pemisah)** antar statement. Misalkan saat deklarasi lebih dari satu variabel.

```c++
int var1, var2, var3;   
// Menggunakan tanda koma untuk memisahkan deklarasi tiap variabel
```

> Tidak semua statement dapat dipisahkan oleh tanda koma.

### Operator Subscript (`[]`)

Penggunaan paling umum operator ini adalah untuk melakukan **pengaksesan** terhadap **elemen** suatu **array** (akan dibahas pada modul array).

_Operator lain yang belum ter-cover pada modul ini akan dibahas pada modul-modul selanjutnya._

# Pesan Kesalahan (Error)

Secara umum, terdapat dua jenis error, yakni Compilation Error dan Runtime Error.

## Compilation Error

Kesalahan yang terjadi **ketika program dikompilasi**. Ketika suatu program memiliki compilation error, kompilasi akan dibatalkan. Program tidak akan berhasil dikompilasi sampai kesalahannya kita perbaiki. Compilation error dapat disebabkan oleh berbagai hal:

- Salah mengetik nama variabel.
- Kurang tanda titik koma (;) di akhir statement.
- Salah menggunakan tipe data.

## Runtime Error

Kesalahan yang terjadi **ketika program dieksekusi**. Program dapat mengalami error ketika sedang dieksekusi karena berbagai hal:
- Melakukan pembagian dengan angka 0.
- Mengakses memori di luar yang telah dialokasikan.
- Mengalami stack overflow.

Sebagian besar dari istilah dan masalah yang dijelaskan di atas mungkin kita hadapi ketika sudah mempelajari tentang array dan rekursi.

# Pesan Peringatan (Warning)
Warning **memperingatkan** kita bahwa **ada sesuatu yang berpotensi membuat program tidak berjalan sesuai ekspektasi**. Berbeda dengan error, warning **tidak** akan **menghentikan** proses **kompilasi** dan **eksekusi**. 

# Tampilan Error dan Warning dalam Codeblocks 
Pesan error dan warning dalam Codeblocks akan muncul di bagian bawah, di bagian **Logs & others**, di **Build messages**. 

Misal kita menjalankan program berikut
```c++
#include <iostream>

using namespace std;

int main()
{
    int var = 2;
    cout << val << endl;
    return 0;
}
```
Akan muncul

![compilationerror](https://user-images.githubusercontent.com/70790033/182176232-ee75b5e4-aeea-4924-aba2-ae436f8631f4.png)

- Tulisan yang berwarna merah adalah error. Dalam hal ini, terjadi compilation error karena kita salah menulis nama variabel `var` menjadi `val`.
- Tulisan yang berwarna biru adalah warning. Dalam hal ini, kita diperingatkan bahwa ada variabel yang tidak terpakai, yakni `var`

# Referensi
- [Modul 0: Pengenalan Pemrograman · AlproITS/DasarPemrograman Wiki (github.com)](https://github.com/AlproITS/DasarPemrograman/wiki/Modul-0:-Pengenalan-Pemrograman)
- [Pemrograman Dasar | TLX (toki.id)](https://tlx.toki.id/courses/basic/)
- [Kelas Terbuka - Belajar Dasar C++ ](https://www.youtube.com/watch?v=WtBF_-pLrjE&list=PLZS-MHyEIRo4Ze0bbGB1WKBSNMPzi-eWI)

