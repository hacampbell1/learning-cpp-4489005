// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>


// Challenge: print a message requesting the users name and then print the users name
int challenge(){
    //declaring name as a string
    std::string name;

    //Giving user message prompting for name
    std::cout << "Please enter your name:" << std::endl;

    // sending input into variable name
    std::cin >> name;

    // Printing name the user inputted
    std::cout << "Nice to meet you " << name << std::endl;


}

int main(){
    // declares a string variable called str
    std::string str;
    // cin only works for single words (no spaces)
    std::cin >> str;
    // std::cout << str;

    // Calling my challenge function
    challenge();
    // Debugging help
    std::cout << std::endl << std::endl;
    return (0);
}
