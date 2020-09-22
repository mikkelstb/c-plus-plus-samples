#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int n = 0, i = 0;
    cout << "Enter number of elements in the array: ";
    std::cin >> n;
    double *p = new double[n];
    while(i < n)
    {
        p[i] = 0.0;
        i++;
    }

    i--;
    while(i >= 0)
    {
        cout << p[i] << endl;
        i--;
    }

    delete[] p;


    return 0;
}