#include <iostream>

int main() {
    double weight, gravity;

    std::cout << "Provide your weight (lbs): ";
    std::cin >> weight;

    std::cout << "Provide the gravity of the planet: ";
    std::cin >> gravity;

    std::cout << "\nYour weight: " << weight * gravity << "\n";
}