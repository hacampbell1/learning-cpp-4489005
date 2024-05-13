// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// this is considered a directive
// tells the preprocessor what to add or remove in the code
// all directives start with the hash character
#include <iostream>
#include <string>
#include <cstdint>
// everytime it finds CAPACITY it replace it with 5000 not matter what
#define CAPACITY 5000
#define DEBUG
int main(){
    int32_t large = CAPACITY;
    // adding the u at the begining makes it an unsigned integer so will have to define the type
    uint8_t small = 37;
    // this is useful for debugging it is not the same as the if else looping, you must define the debug error before doing this so it will look for the specific thing and hit that ifdef if done. If you just define debug it will display the message
#ifdef DEBUG
    std::cout << "About to perfrom the addition" << std::endl;
#endif
    // same thing as python
    large += small;
    //large = large + small;

    std::cout <<"this is the large interger " << large << std::endl;
    // this is not the loop but asks if a 
   
    std::cout << std::endl << std::endl;
    return (0);
}
