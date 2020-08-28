#include <iostream>

int main() 
{

  const int CodeA = 2;
  const int CodeB = 3;
  const int CodeC = 6;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;


  std::cout << "You wake up in a small room unsure of how you got there..." << std::endl;
  std::cout << "The only feature is a door with a small terminal next to it. " << std::endl;
  std::cout << "The terminal reads: " << std::endl;
  std::cout << "~ There are 3 numbers in the code" << std::endl;
  std::cout << "~ The numbers add-up to: " << CodeSum << std::endl;
  std::cout << "~ The codes multiply to give: " << CodeProduct << std::endl;

  int PlayerGuess;
  std::cout << ">> ";
  std::cin >> PlayerGuess; 
  std::cout << "You entered " << PlayerGuess;
  return 0;
}