#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[])
{
    int n = 0;
    unsigned short test_num = 0;
    unsigned mask = 0x8000;

    if(argc == 2)
    {
        test_num = std::stoi(argv[1]);
    }
    else
    {
        cout << "Enter a number: ";
        cin >> test_num;
    }

    while(n++ < sizeof(test_num) * 8)
    {
        cout << ((test_num & mask) != 0);
        mask = mask >> 1;
        if(n % 4 == 0)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}