//1. Write a C++ program to find out first n perfect number where n is the input from user.
#include <iostream>
using namespace std;

int main()
{
    int n,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++;
}

if(sum==n)
    cout << n << " is a perfect number\n";
else
    cout << n << " is not a perfect number\n";

return 0;
}
