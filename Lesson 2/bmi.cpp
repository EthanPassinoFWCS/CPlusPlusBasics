#include <iostream>
#include<cmath>

int main() {
    double height, weight, bmi;

    // Ask the user for their height.

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    // Ask the user for their weight.
    
    std::cout << "Type in your weight (lbs): ";
    std::cin >> weight;

    bmi = weight/pow(height, 2);

    std::cout << "Your BMI is " << bmi << "\n";

    return 0;
}