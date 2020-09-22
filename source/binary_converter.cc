#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    std::string input_string;

    if (argc > 1)
    {
        input_string = argv[1];
    }
    else
    {
        cout << "Enter a binary number: ";
        cin >> input_string;
    }
    int multiplier = 1;
    int sum = 0;

    for (int x = input_string.length() - 1; x >= 0; x--)
    {
        if (input_string[x] == '1')
        {
            sum = sum + multiplier;
        }
        multiplier *= 2;
    }

    cout << sum << endl;

    return 0;
}