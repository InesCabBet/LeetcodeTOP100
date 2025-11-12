/**
 * @author Ines Cabrera Betancor
 * @date 12 NOV 2025
 * @brief Given a roman numeral, convert it to an integer.
 */

#include <iostream>
#include <string>

int romanToInteger (std::string roman) {
  int result = 0;
  int i = 0;
  int n = roman.length();
  while (i < n){
    char c = roman[i];
    switch (c) {
      case 'I':
        if (i + 1 < n && roman[i + 1] == 'V') {
          result += 4;
          i += 2;
          break;
        }
        if (i + 1 < n && roman[i + 1] == 'X') {
          result += 9;
          i += 2;
          break;
        }
        result += 1;
        i++;
        break;
      case 'V':
        result += 5;
        i++;
        break;
      case 'X':
        if (i + 1 < n && roman[i + 1] == 'L'){
          result += 40;
          i += 2;
          break;
        }
        if (i + 1 <n && roman[i + 1] == 'C'){
          result += 90;
          i += 2;
          break;
        }
        result += 10;
        i++;
        break;
      case 'L':
        result += 50;
        i++;
        break;
      case 'C':
        if (i + 1 < n && roman[i + 1] == 'D'){
          result += 400;
          i += 2;
          break;
        }
        if (i + 1 < n && roman[i + 1] == 'M'){
          result += 900;
          i += 2;
          break;
        }
        result += 100;
        i++;
        break;
      case 'D':
        result += 500;
        i++;
        break;
      case 'M':
        result += 1000;
        i++;
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