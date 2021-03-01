#include <iostream>

int main() {
    int year;

    std::cout << "Please provide a year: ";
    std::cin >> year;

    if (year < 1000 || year > 9999) {
        std::cout << "The year must be over 1000 for us to check. Try again.";
        return -1;
    }

    if(year % 4 == 0 && year  % 100 && year %  400) {
        std::cout << year << " is a leap year.";
    }
    else {
        std::cout << year << " is not a leap year.";
    }

}