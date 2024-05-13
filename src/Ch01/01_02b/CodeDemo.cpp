// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// First must include all the libararies you want to use

// IO Stream helps recieve text from keyboard and helps print things on a screen
#include <iostream>
// allows you to get string from user
#include <string>

// Starting function block with "int" to represent initialize

// start and end block of code with curly brackets
int main(){
    //STD = standard libary
    // cout = character output --> telling it to output it into the terminal
    std::cout << "Hi There" << std::endl;

    // helps with debugging, if you get the done message it doesn't have a bug 
    return(0);



}

int challenge(){
    std::string str;
    std::cin >> str;
    std:: cout <<str;

}

