#include <iostream>


void PrintIntroduction(int LevelDifficulty)
{
    std::cout << std::endl;
    std::cout << "You are one of the most intelligent humans being\n";
    std::cout << "And you find the door # "<< LevelDifficulty <<" with a touch screen in a secret mistery island\n";
    std::cout << "You want to know what is through the door... \n";
    std::cout << "But there is only one chance or the touch screen will block \n";
    std::cout << "I think you are smart enough to find the 3 numbers that I need for you to came in\n";
    std::cout << "I don't know if you are brave enough to put them and find the treasure\n";
    std::cout << "So are you?";
    std::cout << std::endl;
   
}


bool PlayGame(int LevelDifficulty)
{
    PrintIntroduction(LevelDifficulty);

    int CodeA = 2;
    int CodeB = 3;
    int CodeC = 4;
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the 3 code numbers followed by x";
    std::cout << std::endl;


    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct==CodeProduct)
    {
        std::cout << "\nYou win!\n\n";
    }
    else
    {
        std::cout << "\nYou loose\n\n";
    }
    
    return GuessSum == CodeSum && GuessProduct==CodeProduct;
}

int main()
{
    int LevelDifficulty = 1;
    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    return 0;
}