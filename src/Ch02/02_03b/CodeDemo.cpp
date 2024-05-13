// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
// Just like python can declare multiple variables in a line

// declaring outside of a function will allow the variables to be a global variable
int a,b =5;
int main(){
    // this is making myflag a booling variable but we have not assigned a value to it
    bool myflag;
    a =7;
    myflag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "myflag = " << myflag << std::endl;
    std::cout << a + b + myflag << std::endl;

    // this will show the binary number so gives you a huge number
    unsigned int positive;
    positive = b-a;
    std::cout << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
