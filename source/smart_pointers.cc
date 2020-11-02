#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    shared_ptr<int> a(new int(1));
    shared_ptr<int> b(new int(5));
    shared_ptr<double> c(new double(3.0));
    shared_ptr<string> d(new string("Hello"));
    
    shared_ptr<int> e; // points to nowhere
    e = b;

    shared_ptr<int> f(new int);

    *f = *a+*b; //f should be 6

    e.reset(new int(8));

    int *p = b.get();

    cout << *a << endl;
    cout << a << endl;

    cout << *b << endl;
    cout << *c << endl;
    cout << *d << endl;
    cout << *e << endl;
    cout << *f << endl;

    cout << *p << endl;


    unique_ptr<int> ua(new int(-5));
    unique_ptr<int[]> ub(new int[128]);

    for(int a = 0; a < 128; a++)
    {
        ub[a] = a+64;
    }

    for(int b = 0; b < 128; b++)
    {
        cout << ub[b] << endl;
    }





    return 0;
}
