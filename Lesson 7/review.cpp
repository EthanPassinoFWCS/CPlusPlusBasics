#include <iostream>
#include <vector>

int main() {
    int evens = 0;
    int odds = 0;

    std::vector<double> numbers = {2, 4, 3, 6, 1};
    
    for(int i = 0; i < numbers.size(); i++) {
        int number = numbers[i];
        if (number % 2 == 0) {
            evens += number;
            continue;
        }
        if (number % 2 != 0) {
            if (odds == 0) {
                odds++;
            }
            odds *= number;
            continue;
        }
    }

    std::cout << "Sum of even: " << evens << "\n";
    std::cout << "Product of odd: " << odds;



}