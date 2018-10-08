latihan.cpp : Program menghitung luas persegi panjang Alur algoritma

   1. mendeklerasikan variable int A, T sebagai variable input dan float L sebagai variable hasil
   2. mengisi nilai variable input dengan nilai tertentu, misal: A = dan T =
   3. menghitung luas dengan rumus L = A * T
   4. mencetak hasil kelayar. cout << L << endl;
   

LATIHAN1

#include<iostream>

int main () {
    int A, T;
    float L;

    A = 5;
    T = 7;

    L = A = T / 2.0;

    std::cout << "Program Menghitung Luas Segitiga" << std::endl;
    std::cout << "Alas segitiga = " << A << std::endl;
    std::cout << "Tinggi segitiga = " << T << std::endl;
    std::cout << "Luas segitiga adalah = " << L << std::endl;

}
