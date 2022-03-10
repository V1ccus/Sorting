# ALGORITMA DAN STRUKTUR DATA
## TC122G | PERTEMUAN 6

###### SORTING
>Pengurutan data dalam struktur data sangat penting terutama untuk data yang bertipe data numerik ataupun karakter.
>Pengurutan dapat dilakukan secara ascending (urut naik) dan descending (urut turun).
>Pengurutan (Sorting) adalah proses pengurutan data yang sebelumnya disusun secara acak sehingga tersusun secara teratur menurut aturan tertentu.

**4 MOTODE UMUM**
###### **A. Bubble Sort**
>Metode sorting termudah.
>Diberi nama “Bubble” karena proses pengurutan secara berangsur-angsur bergerak/berpindah ke posisinya yang tepat, seperti gelembung yang keluar dari sebuah gelas bersoda.
>Bubble Sort mengurutkan data dengan cara membandingkan elemen sekarang dengan elemen berikutnya.
>Jika elemen sekarang lebih besar dari elemen berikutnya maka kedua elemen tersebut ditukar, jika pengurutan ascending.

###### **B. Exchange Sort**
>Sangat mirip dengan Bubble Sort
>Pebedaannya adalah cara membandingkan antar elemen-elemennya.
>Exchange sort membandingkan suatu elemen dengan elemen-elemen lainnya dalam array tersebut, dan melakukan pertukaran elemen jika perlu. Jadi ada elemen yang selalu menjadi elemen pusat (pivot).
>Sedangkan Bubble sort akan membandingkan elemen pertama/terakhir dengan elemen sebelumnya/sesudahnya, kemudian elemen sebelum/sesudahnya itu akan menjadi pusat (pivot) untuk dibandingkan dengan elemen sebelumnya/sesudahnya lagi, begitu seterusnya.

###### **C. Insertion Sort**
>Mirip dengan cara orang mengurutkan kartu, selembar demi selembar kartu diambil dan disisipkan (insert) ke tempat yang seharusnya.
>Pengurutan dimulai dari data ke-2 sampai dengan data terakhir, jika ditemukan data yang lebih kecil, maka akan ditempatkan (diinsert) diposisi yang seharusnya.
>Pada penyisipan elemen, maka elemen-elemen lain akan bergeser ke belakang.

###### **D. Selection Sort**
>Merupakan kombinasi antara sorting dan searching.
>Untuk setiap proses, akan dicari elemen-elemen yang belum diurutkan yang memiliki nilai terkecil atau terbesar akan dipertukarkan ke posisi yang tepat di dalam array.
>Misalnya untuk putaran pertama, akan dicari data dengan nilai terkecil dan data ini akan ditempatkan di indeks terkecil (data[0]), pada putaran kedua akan dicari data kedua terkecil, dan akan ditempatkan di indeks kedua (data[1]).
>Selama proses, pembandingan dan pengubahan hanya dilakukan pada indeks pembanding saja, pertukaran data secara fisik terjadi pada akhir proses.


```  
source : Evangs Mailoa, S.Kom., M.Cs., class of TC122G. 2022. ASD - Sorting.pdf (February 21).
```


**TUGAS 2 - OUTPUT**
---------------------------------
![sorting_program](https://github.com/V1ccus/Sorting/blob/main/1.%20Challenge/screenshot/menu/sorting_program.jpg)
![size](https://github.com/V1ccus/Sorting/blob/main/1.%20Challenge/screenshot/menu/size.jpg)
![main_menu](https://github.com/V1ccus/Sorting/blob/main/1.%20Challenge/screenshot/menu/main_menu.jpg)
---------------------------------

###### **( Challange )**

. . .

![challange_1](https://github.com/V1ccus/Sorting/blob/main/1.%20Challenge/screenshot/a.jpg)
![challange_2](https://github.com/V1ccus/Sorting/blob/main/1.%20Challenge/screenshot/b.jpg)

###### **( Bubble_Sort )**

. . .

![bubble_sort](https://github.com/V1ccus/Sorting/blob/main/2.%20Bubble_Sort/screenshot/bubble.jpg)

###### **( Exchange_Sort )**

. . .

![exchange_sort](https://github.com/V1ccus/Sorting/blob/main/3.%20Exchange_Sort/screenshot/exchange.jpg)

###### **( Insertion_Sort )**

. . .

![insertion_sort](https://github.com/V1ccus/Sorting/blob/main/4.%20Insertion_Sort/screenshot/insertion.jpg)

###### **( Selection_Sort )**

. . .

![selection_sort](https://github.com/V1ccus/Sorting/blob/main/5.%20Selection_Sort/screenshot/selection.jpg)
