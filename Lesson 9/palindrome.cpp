#include <iostream>

std::string reverse_string(std::string text) {
    std::string reversed;
    for(int i = text.length()-1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

bool is_palindrome(std::string text) {
    if(text.compare(reverse_string(text)) == 0) {
        return true;
    }
    return false;
}

int main() {
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
}