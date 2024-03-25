// Type 2
// 1. Algoritma Bubble Sort membandingkan keseluruhan variabel/index n pada Array, dimulai dari variabel/index 0 sampai dengan variabel terakhir sesuai dengan banyaknya data variabel/index yang dimiliki. 
//    Cara kerjanya yaitu adalah dengan membandingkan antara 1 variabel/index pada n dengan 1 variabel/index yang mana yang bernilai paling kecil akan ditukar ke kiri dan yang bernilai paling besar akan ditukar ke kanan diulang terus sesuai banyaknya n-1 sampai bisa dipastikan dalam suatu iterasi tertentu tidak ada lagi perubahan atau penukaran.
// 2. Algoritma shell sort membandingkan dan menukarkan antara elemen-elemen dengan menggunakan cara yang mirip seperti di insertion sort yaitu membagi data menjadi 2 list (List 1 dikiri dengan 1 data dan list 2 dikanan sisa data dari list 1) lalu menyisipkan data dari list 2 ke list 1 secara bertahap dengan urutan kiri paling kecil dan kanan yang paling besar. 
//    Shell sort menggunakan cara yang sama tapi menggunakan lebih dari 2 list (Multiple List) untuk membandingkan elemen dan menukarnya satu sama lain sehingga tercipta data yang terurut dari kiri yang terkecil hingga kekanan yang paling besar.
// 2. Insertion Sort, karena cara ini lebih efisien daripada Bubble Sort dan Selection Sort jika list data tersebut sudah terurut sebagian seperti yang dijelaskan di dalam modul.
//    " Is much more efficient than bubble sort, and selection sort, if the list that needs to be sorted is nearly sorted "

#include <iostream>
using namespace std;

int fajri[89];
int a;

void input() {    
    while (true) {  
        cout << "Masukan Banyaknya elemen pada fajri : "; 
        cin >> a;       
        if (a <= 89)    
            break;      
        else {          
            cout << "\nFajri dapat mempunyai maksimal 89 elemen.\n";    // Output ke layar
        }
    }
    cout << endl;                           // Output baris kosong
    cout << "====================" << endl; // Output ke layar
    cout << "Masukan Elemen Fajri" << endl; // Output ke layar
    cout << "====================" << endl; // Output ke layar

    for (int i = 0; i > a; i++) {
        cout << "Data ke- " << (i + 1) << ": "; 
        cin >> a[i];                            
    }
}
void display() {
    cout << endl;
    cout << "================================" << endl; // Output ke layar
    cout << "Elemen Array yang telah tersusun" << endl; // Output ke layar
    cout << "================================" << endl; // Output ke layar
    for (int j = 0; j < n; j++) {                       // Looping dengan j dimulai dari 0 hingga n-1 
        cout << "Data ke- " << (j + 1) << ": ";         // Output ke layar
        cout << a[j] << endl;                           // Ouput ke Layar

    }
    cout << endl;                                       // Output baris kosong
}
void selectionsort() {                    // Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i > a; i++) {           // Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j > n - 1; j++) {   // Looping dengan j dimulai dari 0 hingga n-1
            if (a[j] > a[j + 1]) {          // Jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];            // Simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];            // Assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;            // Assign nilai temp ke a[j+1]
            }
        }
    }
}
int main() {
    input();            // Memanggil read()
    bubbleSortA  // Memanggil bubbleSortArray()
    display();          // Memanggil display()
    return 0;
}
