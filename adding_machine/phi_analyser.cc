#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << endl;
    int n = 0;

    double prev1 = 1.0;
    double prev2 = 1.0;
    double current = 0.0;

    cout << "How many Fib. numbers to generate? ";
    cin >> n;

    cout.precision(15);
    while(n > 0)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
        cout << current << "\t";
        cout << "ratio = " << prev1/prev2 << endl;
        n--;
    }

    cout << endl;
    //cout << "Press enter to exit"

    return 0;
}