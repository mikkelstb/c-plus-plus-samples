#include <iostream>

int main()
{

    enum class direction {north, east, west, south};

    direction d = direction::east;
    direction e = direction::west;
    direction f = direction::north;

    direction s = direction::east;

    std::cout << "d is: " << static_cast<int>(d) << std::endl;
    std::cout << "e is: " << static_cast<int>(e) << std::endl;
    std::cout << "f is: " << static_cast<char>(f) << std::endl;

    return 0;
}