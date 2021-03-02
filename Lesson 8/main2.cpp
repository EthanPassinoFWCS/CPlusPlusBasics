#include <iostream>
#include <time.h>

int main() {
    srand (time(NULL));

    int the_amazing_random_number = rand() % 29;
    std::cout << the_amazing_random_number;
}