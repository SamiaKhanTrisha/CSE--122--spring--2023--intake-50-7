#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >>m >>n;

    int parameter = m*n;
    int maximum_number_of_domino = parameter / 2;

    cout <<maximum_number_of_domino<< endl;
}
