#include <iostream>

int main() {
    int t1, t2;
    const double g = 9.81;
    std::cout << "Tilo" << std::endl;
    std::cout << "Enter t1: ";
    std::cin >> t1;
    std::cout << "Enter t2: ";
    std::cin >> t2;

    double S1 = (g * t1 * t1) / 2.0;
    double S2 = (g * t2 * t2) / 2.0;

    std::cout << "Pisla" << t1 << " sek: " << S1 << " m" << std::endl;
    std::cout << "Pisla" << t2 << " sek: " << S2 << " m" << std::endl;

    return 0;
}