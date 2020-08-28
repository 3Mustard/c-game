#include <iostream>

int main() 
{

  // Declare and assign numbers to variables
  const int CodeX = 2;
  const int CodeY = 3;
  const int CodeZ = 6;

  const int CodeSum = CodeX + CodeY + CodeZ;
  const int CodeProduct = CodeX * CodeY * CodeZ;

  // Print the code product and sum to the terminal 
  std::cout << "You wake up in a small room unsure of how you got there...\n";
  std::cout << "The only feature is a door with a small terminal next to it. \n";
  std::cout << "The terminal reads: \"Enter the Code * * *\"";
  std::cout << "\n~ The sum of * * * is " << CodeSum;
  std::cout << "\n~ The product of * * * is " << CodeProduct << std::endl;

  // Store user guesses
  int GuessX, GuessY, GuessZ;
  std::cout << "~ *: ";
  std::cin >> GuessX;
  std::cout << "~ *: ";
  std::cin >> GuessY;
  std::cout << "~ *: ";
  std::cin >> GuessZ; 

  int GuessSum = GuessX + GuessY + GuessZ;
  int GuessProduct = GuessX * GuessY * GuessZ;

  // Determine if the player won or lost
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "You win!";
  }
  else 
  {
    std::cout << "You lose!";
  }

  // return statement here 
  return 0;
}