#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double sum = 0;
    double n = 0;
    int entries = 0;

    cout << "Enter a list of numbers, terminated with 0 ";
    cout << "or non digit." << endl << "Enter: ";

    while(cin >> n)
    {
        sum = sum + n;
        entries++;
    }
    cout << "The sum is: " << sum << endl;
    cout << "Number of entries are: " << entries << endl;
    cout << "Average number is : " << sum/entries << endl;
    return 0;
}