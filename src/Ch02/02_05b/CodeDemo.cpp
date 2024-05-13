// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
// helps you declare variable any types
#include <typeinfo>

int main(){
    
    auto a = 8;
    // trying to make more than 32 bits
    auto b = 123456789101;
    //float
    auto c = 3.14f;
    //double since it isn't have an f
    auto d = 3.14;
    auto e = true;
    //char type
    auto f = 'd';
    //string type
    auto g = "c plus";
    std::cout << "The type of a is " << typeid(a).name()<< std::endl;
    std::cout << "The type of b is " << typeid(b).name()<< std::endl;
    std::cout << "The type of c is " << typeid(c).name()<< std::endl;
    std::cout << "The type of d is " << typeid(d).name()<< std::endl;
    std::cout << "The type of e is " << typeid(e).name()<< std::endl;
    std::cout << "The type of f is " << typeid(f).name()<< std::endl;
    std::cout << "The type of g is " << typeid(g).name()<< std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
