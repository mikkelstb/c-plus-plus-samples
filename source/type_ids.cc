#include <iostream>



int main()
{
    char c = 0;
    int si = 0;
    unsigned int ui = 0;
    double d = 0;
    float f = 2;
    float g = 3;
    unsigned char i = 0;

    //d = ui = si = c;

    if(typeid(c+c) == typeid(int))
    {
        std::cout << "type of (char + char) is int" << std::endl;
    }
    if(typeid(si+ui) == typeid(unsigned))
    {
        std::cout << "type of (int + unsigned int) ";
        std::cout << "is unsigned" << std::endl;
    }
    if(typeid(si+d) == typeid(double))
    {
        std::cout << "type of (int + double) ";
        std::cout << "is double" << std::endl;
    }
    if(typeid(f+g) == typeid(float))
    {
        std::cout << "type of (float + float) ";
        std::cout << "is float" << std::endl;
    }
    if(typeid(f*g) == typeid(float))
    {
        std::cout << "type of (float * float) ";
        std::cout << "is float" << std::endl;
    }
    if(typeid(i + si) == typeid(int))
    {
        std::cout << "type of (unsigned char + int) ";
        std::cout << "is int" << std::endl;
    }
    else if(typeid(i + si) == typeid(unsigned))
    {
        std::cout << "type of (unsigned char + int) ";
        std::cout << "is unsigned" << std::endl;
    }




    return 0;
}