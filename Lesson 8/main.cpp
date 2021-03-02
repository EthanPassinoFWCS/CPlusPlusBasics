#include <iostream>

std::string helloIT() {
    std::string attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> attempt;
    return attempt;

}

int main() {
  
  // Conduct IT support
  std::string on_off_attempt = helloIT();
  
  // Check in with Jen
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
  on_off_attempt = helloIT();

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
  on_off_attempt = helloIT();
  return 0;
}
