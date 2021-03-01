#include <iostream>

int main() {
    int width = 20;
    int length = 10;
    // Error is this line above. It was 0.
    int ratio = width / length;

    std::cout << ratio << "\n";
}