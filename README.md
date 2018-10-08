latihan.cpp : Program menghitung luas persegi panjang Alur algoritma

   1. mendeklerasikan variable int A, T sebagai variable input dan float L sebagai variable hasil
   2. mengisi nilai variable input dengan nilai tertentu, misal: A = dan T =
   3. menghitung luas dengan rumus L = A * T
   4. mencetak hasil kelayar. cout << L << endl;
   


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

latihan.cpp : Program menghitung luas persegi panjang Alur algoritma

#include<iostream>

int main() {
    int A,B;
    std::cout << "Masukan nilai bilangan A: "; std::cin >> A;
    std::cout << "Masukan nilai bilangan B: "; std::cin >> B;


    if (A > B) {
            std::cout << A << "Lebih besar dari " << B << std::endl;
            std::cout << B << "Lebih besar dari " << A << std::endl;
    } else
            std::cout << " Lebih besar dari " << A << std::endl;
}
