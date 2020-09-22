#include <iostream>
#include <string>
using std::cout;
using std::endl;

class User
{
    public:
    int rank;
    std::string name;
};


int main()
{
    int User::*ptr_to_rank = &User::rank;
    std::string User::*ptr_to_name = &User::name;

    User u;
    User *v = &u;

    u.*ptr_to_rank = 0;
    u.*ptr_to_name = "Mikkel";

    cout << "Name: " << u.name << endl;
    cout << "Rank: " << u.rank << endl;

    v->*ptr_to_name = "Urse";
    v->*ptr_to_rank = 1;

    cout << "Name: " << v->name << endl;
    cout << "Rank: " << v->rank << endl;

    return 0;
}