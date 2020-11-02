
#include <algorithm>
#include <iostream>

int main()
{
    int my_id = 5;


    auto func = [my_id] (int n) { return my_id + n;};


    std::cout << func(10) << std::endl;
    std::cout << func(20) << std::endl;


    auto f = [my_id] () mutable
    { 
        while (my_id-- > 0) 
        {
            std::cout << "Hello, ";
        }
    };

    f();
    std::cout << std::endl;

    std::cout << "The value of n: " << my_id << std::endl;


    std::cout << [] (int a, int b) {return a+b;}  (1,3);
    std::cout << std::endl;



    int numbers[5] = {5, 10, 15, 20, 25};

    std::for_each(numbers, numbers+5, [] (int n) {std::cout << n << " ";});

    std::cout << std::endl;

    int sum = 0;
    std::for_each(numbers, numbers+5, [&sum] (int n) { sum = sum + n;} );
    std::cout << "Sum: " << sum << std::endl;
    return 1;
}