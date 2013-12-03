#include <iostream>

using namespace std;

double BMI(double,double)


int main()
{
    double weight,high;
    cout<<"請輸入身高(公分):";
    cin>>high;
    cout<<"請輸入體重(公斤):";
    cin>>weight;
    cout<<"BMI:"<<BMI(weight,high);
    return 0;
}

double BMI(double weight,double high)
{
    high=high/100;
    return weight/(high*high);
}
