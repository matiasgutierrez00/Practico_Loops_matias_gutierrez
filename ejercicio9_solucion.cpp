#include <iostream>

int main() {
    int cake = 1;
    int visits = 0;

    while (visits < 10) {
        std::cout << "¿Hay pastel? (1 = sí, 0 = no): ";
        std::cin >> cake;

        if (cake == 1) {
            std::cout << "Om-nom-nom :P" << std::endl;
            visits++;
        } else {
            std::cout << "Sin pastel :(" << std::endl;
            break;
        }
    }

    return 0;
}
