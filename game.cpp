#include <iostream>

void Introduction(int Difficulty)
{
  std::cout << "You wake up in a small room unsure of how you got there...\n";
  std::cout << "The only feature is a door marked \"LEVEL " << Difficulty << "\" with a small terminal next to it. \n\n";
}

bool PlayGame(int Difficulty)
{
  // Call the introduction message
  Introduction(Difficulty);

  // Declare and assign numbers to codes
  const int CodeX = 2;
  const int CodeY = 3;
  const int CodeZ = 6;

  const int CodeSum = CodeX + CodeY + CodeZ;
  const int CodeProduct = CodeX * CodeY * CodeZ;

  // 
  std::cout << "The terminal reads: \"Enter the Code * * *\"";
  std::cout << "\n~ The sum of * * * is " << CodeSum;
  std::cout << "\n~ The product of * * * is " << CodeProduct << std::endl;

  // Store user guesses
  int GuessX, GuessY, GuessZ;
  std::cout << "> ";
  std::cin >> GuessX;
  std::cout << "> ";
  std::cin >> GuessY;
  std::cout << "> ";
  std::cin >> GuessZ; 

  int GuessSum = GuessX + GuessY + GuessZ;
  int GuessProduct = GuessX * GuessY * GuessZ;

  // Determine if the player won or lost
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nYou win!\n";
    return true;
  }
  else 
  {
    std::cout << "\nYou lose!";
    return false;
  }
}


int main() 
{
  int LevelDifficulty = 1;
  while (true)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear(); // Clear errors
    std::cin.ignore(); // Discard buffer

    if (bLevelComplete) 
    {
      ++LevelDifficulty;
    }
  }
  
  return 0;
}