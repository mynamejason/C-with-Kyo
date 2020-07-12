#include <iostream>
#include <string>
#include "Checker.hpp"
#include "player.hpp"

using namespace std;

/*string getUserName(string player) {
    
}
*/

int main()
{
    Checker myChecker;
    myChecker.displayBoard();
    int userInput = 0;
    cin >> userInput;
    myChecker.placeMark(userInput);
}