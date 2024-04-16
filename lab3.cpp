#include <iostream>

int main() {
    int N;
    std::cout << "Vvedite chislo N: ";
    std::cin >> N;

    for (int i = N; i >= 1; --i) {
        std::cout << i << std::endl;
        if (i % 5 == 0) {
            std::cout << "Beep" << std::endl;
        }
    }

    return 0;
}