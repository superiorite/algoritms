#include <iostream>
#include <math.h>

//Проверка числа на простоту
int main() {
    uint32_t x;
    bool flag = true;
    std::cin >> x;
    for (uint32_t d = 2; d <= sqrt(x); ++d) {
        if (x % d == 0) {
            flag = false;
            break;
        }
    }
    std::cout << flag << std::endl;
}
