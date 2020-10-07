#include <iostream>

using std::cout;
using std::cin;

double calc_roll_pass(int n);
double calc_roll_dont_pass(int n);


int dice_totals[13] = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
double shooter_winning_probabilities[13];
double bettor_winning_probabillities[12];

int main()
{
    double prob_total = 0.0;

    cout << "Probalilities for shooter:" << std::endl;

    for(int i = 2; i <= 12; i++)
    {
        shooter_winning_probabilities[i] = calc_roll_pass(i);

        prob_total += shooter_winning_probabilities[i];
        cout << "Probability of winning on " << i << ": " << shooter_winning_probabilities[i]*100 << "%" << std::endl;
    }
    cout << "Total robability of winning: " <<  prob_total*100 << "%" << std::endl;

    cout << "Probabilities for bettor" << std::endl;

    prob_total = 0.0;
    for(int i = 2; i <= 11; i++)
    {
        bettor_winning_probabillities[i] = calc_roll_dont_pass(i);
        prob_total += bettor_winning_probabillities[i];
        cout << "Probability of winning on " << i << ": " << bettor_winning_probabillities[i]*100 << "%" << std::endl;
    }
    cout << "Total robability of winning: " <<  prob_total*100 << "%" << std::endl;
}



double calc_roll_dont_pass(int n)
{
    double probability = dice_totals[n]/36.0;

    switch(n)
    {
        case 2:
        case 3:
            return probability;
            break;
        case 7:
        case 11:
            return 0;
            break;
        default:
            double p = static_cast<double>(dice_totals[7])/(dice_totals[n] + dice_totals[7]);
            return probability * p;
            break;
    }
}


double calc_roll_pass(int n)
{
    double probability = dice_totals[n]/36.0;

    switch(n)
    {
    case 2:
    case 3:
    case 12:
        return 0;
        break;
    case 7:
    case 11:
        return probability;
        break;
    default:
        return probability * static_cast<double>(dice_totals[n])/(dice_totals[n] + dice_totals[7]);
        break;
   }
}