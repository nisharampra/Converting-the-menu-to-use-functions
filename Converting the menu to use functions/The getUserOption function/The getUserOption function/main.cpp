//
//  main.cpp
//  The getUserOption function
//
//  Created by Nisha Ramprasath on 25/11/23.
//

#include <iostream>
void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    // more if statements here to process other menu options.
}
int main() {
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
}
return 0; }

