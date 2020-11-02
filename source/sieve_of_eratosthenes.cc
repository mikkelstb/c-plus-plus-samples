#include <iostream>
#include <memory>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;

//void process_prime(bool *primes, const int &min_n, const int &max_n, const int &n);
void process_prime(std::unique_ptr<bool[]> &primes, const int &min_n, const int &max_n, const int &n);

int main()
{
    int max_n = 0;
    int min_n = 0;
    unsigned int count = 0;
    std::unique_ptr<bool[]> primes;


    cout << "Calculate primes up to to what number? ";
    cin >> max_n;
    cout << "Starting from what number? ";
    cin >> min_n;


    try
    {
        primes.reset(new bool[max_n + 1]);
    }
    catch(const std::bad_alloc &e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        cout << "Input number was too large, please try again" << endl;
        abort();
    }
    

    //init array
    for (int i = 2; i <= max_n; i++)
    {
        primes[i] = true;
    }

    for(int i = 2; i <= max_n; ++i)
    {
        if(primes[i] && i >= min_n)
        {
            count++;
            process_prime(primes, min_n, max_n, i);
        }
    }
    cout << endl;
    cout << "Fount a total of " << count << " prime numbers" << endl;

    //delete []primes;
    primes.reset();

    return 0;
}


//void process_prime(bool *p, const int &min_n, const int &max_n, const int &n)
//{
//    cout << n << "\t";
//    for(int i = n + n; i < max_n + 1; i = i + n)
//    {
//            p[i]= false;
//    }
//}

void process_prime(std::unique_ptr<bool[]> &primes, const int &min_n, const int &max_n, const int &n)
{
    cout << n << "\t";
    for(int i = n + n; i < max_n + 1; i = i + n)
    {
            primes[i] = false;
    }
}