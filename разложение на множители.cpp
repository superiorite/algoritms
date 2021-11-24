#include <iostream>

//Разложение числа на множители
int main() {
    uint32_t d = 2;
    uint32_t x;
    std::cin >> x;
    while (x != 1) {
        if (x % d == 0) {
            std::cout << d << std::endl;
            x = x / d;
        } else {
            d++;
        }
    }

}
