# Daftar Isi

- [Sorting](#sorting-pengurutan)

- [Searching](#searching-pencarian)
    - [Linear Search](#linear-search)
    - [Binary Search](#binary-search)

- [Latihan Soal](#latihan-soal)

# Sorting dan Searching

## **Sorting (Pengurutan)**

Sorting atau pengurutan adalah suatu proses untuk mengurutkan beberapa data menjadi teratur mengikuti aturan tertentu.

Pada Bahasa Pemrograman C++, proses sorting dapat dilakukan dengan menggunakan fungsi `sort` yang terdapat pada header file **`<algorithm>`**. Berikut adalah contoh penggunaannya:

```C++
int arr[] = {5, 2, 4, 3, 1};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + n);

for(int i=0; i<n; i++)
    cout << arr[i] << " ";
cout << endl;
```

Dan ini adalah hasil dari menjalankan program diatas:

```
1 2 3 4 5
```

Bagaimana jika kita ingin mengurutkan secara decending(dari besar ke kecil)? Kita dapat memanggil fungsi **`greater<tipe data>()`**. Berikut adalah contoh penggunaannya:

```C++
int arr[] = {5, 2, 4, 3, 1};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + n, greater<int>());

for(int i=0; i<n; i++)
    cout << arr[i] << " ";
cout << endl;
```

Dan ini adalah hasil dari menjalankan program diatas:

```
5 4 3 2 1
```

Contoh diatas adalah sorting pada kumpulan tipe data integer. Bagaimana dengan tipe data lainnya?

```C++
double arr[] = {5.2, 2.3, 4.4, 3.1, 1.7};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + n);

for(int i=0; i<n; i++)
    cout << arr[i] << " ";
cout << endl;
```

```
1.7 2.3 3.1 4.4 5.2
```

```C++
double arr[] = {5.2, 2.3, 4.4, 3.1, 1.7};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + n, greater<double>());

for(int i=0; i<n; i++)
    cout << arr[i] << " ";
cout << endl;
```

```
5.2 4.4 3.1 2.3 1.7
```

Tidak jauh berbeda bukan? Sekarang, lihatlah ketika kita menggunakan fungsi sort pada sekumpulan string.

```C++
string arr[] = {"aaa",
                "aa",
                "b",
                "ab",
                "aab"};
int n = sizeof(arr)/sizeof(arr[0]);

sort(arr, arr + n);

for(int i=0; i<n; i++)
    cout << arr[i] << " ";
cout << endl;
```

```
aa aaa aab ab b 
```

Secara default, fungsi sort akan mengurutkan beberapa string secara leksikografis seperti yang ada pada contoh. Ketika teman-teman ingin mengurutkan string tersebut dengan aturan lain, berdasarkan ukuran string misalnya, teman-teman dapat menambahkan potongan kode ini setelah **preprocessor directive** dan sebelum fungsi `main()`:

```C++
bool compare (string s1, string s2){
    return s1.size() < s2.size();
}
```

Kemudian, lakukan pemanggilan fungsi sort seperti ini:

```C++
sort(arr, arr + n, compare);
```

Maka akan didapat hasil pengurutan seperti ini:

```
b aa ab aaa aab 
```

Dengan begitu, string dapat diurutkan dengan aturan lainnya.

## **Searching (Pencarian)**

Searching atau pencarian adalah proses untuk mencari keberadaan suatu nilai pada sekumpulan data. Secara umum, algoritma pencarian yang digunakan terdapat dua jenis, yaitu linear search dan binary search.

### **Linear Search**

Linear search adalah proses pencarian nilai secara linear. Proses pencarian ini biasanya mencari nilai dari bagian depan atau belakang suatu sekuens, dan mengecek satu-persatu nilai yang didapat apakah sama dengan nilai yang dicari atau tidak.

```C++
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
```

```
Ditemukan angka 5 pada sekuens
```

Program diatas mencari keberadaan angka 5 pada sekuens dengan mengecek satu persatu indeks pada array dari indeks 0 hingga indeks 8.

### **Binary Search**

Binary search adalah metode pencarian dengan melakukan pengecekan pada bagian tengah sekuens dan membagi sekuens menjadi dua. Jika hasil pengecekan adalah lebih besar nilai yang dicari daripada bagian tengah sekuens, pencarian akan dilakukan pada bagian kanan sekuens, dan sebaliknya apabila nilai yang dicari lebih kecil daripada bagian tengah sekuens hingga nilai yang dicari ditemukan.

![Ilustrasi binary search](https://user-images.githubusercontent.com/86661387/185536916-8c5675c7-55c8-4196-9447-c99497f6cee9.png)


```C++
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
```

Program diatas mencari keberadaan angka 200 pada sekuens bilangan 1, 2, 3, ..., 999, 1000 dengan metode pencarian binary search. Output dari program ketika dijalankan akan menjadi seperti ini:

```
Nilai variabel mid: 500
Nilai variabel mid: 250
Nilai variabel mid: 125
Nilai variabel mid: 187
Nilai variabel mid: 218
Nilai variabel mid: 202
Nilai variabel mid: 194
Nilai variabel mid: 197
Nilai variabel mid: 199
Nilai variabel mid: 200
Ditemukan angka 200 pada sekuens dengan 10 pengecekan
```

Dengan metode binary search, pencarian dapat dilakukan dalam waktu yang lebih singkat. Namun, pencarian dengan metode binary search hanya dapat dilakukan apabila sekuens yang akan digunakan bersifat monoton naik maupun monoton turun. Atau dalam istilah yang lebih mudah, sekuens tersebut telah terurut.

## Latihan Soal

1. Diberikan sebuah daftar string yang acak. Carilah string dengan urutan ke-n secara leksikografis.

2. Dari sebuah sekuens bilangan bulat yang acak, carilah banyak kemunculan bilangan n.