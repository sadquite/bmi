#include <iostream>

using namespace std;

double BMI(double weight,double high)
{
    high=high/100;
    return weight/(high*high);
}

int main()
{
    double weight,high;
    cout<<"�п�J����(����):";
    cin>>high;
    cout<<"�п�J�魫(����):";
    cin>>weight;
    cout<<"BMI:"<<BMI(weight,high);
    return 0;
}
