#include <iostream>
#include <ctime>

void Introduction(int Difficulty)
{
  std::cout << "You are in a small room unsure of how you got there...\n";
  std::cout << "The only feature is a door marked \"LEVEL " << Difficulty << "\" with a small terminal next to it. \n\n";
}

bool PlayGame(int Difficulty)
{
  // Call the introduction message
  Introduction(Difficulty);

  // generate a random number between 0 and <modular value> - 1
  const int CodeX = rand() % Difficulty + Difficulty;
  const int CodeY = rand() % Difficulty + Difficulty;
  const int CodeZ = rand() % Difficulty + Difficulty;

  const int CodeSum = CodeX + CodeY + CodeZ;
  const int CodeProduct = CodeX * CodeY * CodeZ;

  // output the puzzle
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
    std::cout << "\nThe door opens.\n";
    return true;
  }
  else 
  {
    std::cout << "\nWrong Code.\n";
    return false;
  }
}


int main() 
{
  srand(time(NULL)); // create new random sequence based on time of day

  int LevelDifficulty = 1;
  int const MaxLevel = 5;
  while (LevelDifficulty <= MaxLevel)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear(); // Clear errors
    std::cin.ignore(); // Discard buffer

    if (bLevelComplete) 
    {
      ++LevelDifficulty;
    }
  }
  
  std::cout << "The door opens up to a blue sky";
  return 0;
}