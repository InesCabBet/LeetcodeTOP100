/**
 * @author Ines Cabrera Betancor
 * @date 12 NOV 2025
 * @brief Given a roman numeral, convert it to an integer.
 */

#include <iostream>
#include <string>

int romanToInteger (std::string roman) {
  int result = 0;
  for (int i = 0; i < roman.length(); i++){
    char c = roman[i];
    switch (c) {
      case 'I':
        result += 1;
        break;
      case 'V':
        result += 5;
        break;
      case 'X':
        result += 10;
        break;
      case 'L':
        result += 50;
        break;
      case 'C':
        result += 100;
        break;
      case 'D':
        result += 500;
        break;
      case 'M':
        result += 100;
        break;
      default: 
        return -1;
    }
  }
  return result;
}

int main() {
  std::cout << "Introduce roman number: ";
  std::string roman;
  std::cin >> roman;
  int result = romanToInteger(roman);
  if (result == -1){
    std::cout << "Input error. Character not recognised.\nCharacters recognised by the program= I V X L C D M" << std::endl;
    return 1;
  }
  std::cout << "Result: " << result << std::endl;
  return 0;
}