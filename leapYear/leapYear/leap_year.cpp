#include <iostream>

int main() {
  int y = 0;

  std::cout << "Enter Year:";
  std::cin >> y;

  if (y < 1000 or y > 9999){
    std::cout << "Invalid.\n";
  }
  else if (y % 4 == 0 and y % 100 != 0 or y% 400 ==0){
    std::cout << y << " falls on a leap year.\n";
  }
  else {
    std::cout << y << " is not a leap year.\n";
  }
  
  
}