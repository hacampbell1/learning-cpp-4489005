// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// this is a macro so it has no scope
// Do not put a semi colon at the end of this line
//#define AGE_LENGTH 4
int main(){
    // another way to define a constant
    const size_t AGE_LENGTH = 4;
    // This assigns the data type of the array as int and the number in between the brackets specifies how many values we can place within the array since it cannot be changed
    // can also make a constant using a macro
    int age[AGE_LENGTH];
    // this is techincally doubles because you don't have an f but because you define the array as a float it will make them a float
    float temperature[]= {1.4,1.5,1.6};

    //assign values in the array
    age[0] = 25;
    age[1] = 20;
    age[2] = 15;
    age[3] = 19;

    std::cout << age[0]<< age[1]<<age[2]<<age[3]<< std::endl;
    std::cout << temperature[0]<< temperature[1]<<temperature[2]<< std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
