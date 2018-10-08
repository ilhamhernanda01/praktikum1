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
