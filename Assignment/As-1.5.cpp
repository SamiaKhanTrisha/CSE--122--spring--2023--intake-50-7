/*5.BUBT grading policy is :
 (i) 80 % marks or above is A+
 (ii) 75% to 79% marks is A
(iii) 70% to 74% marks is A-
 (iv) 65% to 69% marks is B+
 (v) 60% to 64% marks is B
 (vi) 55% to 59% marks is B-
 (vii) 50% to 54% marks is C+
 (viii) 45% to 49% marks is C
(ix) 40% to 44% marks is D
(x) Below 40% is F
 Write a C ++ program which will take an input from user and calculate the grade of a student according to BUBT grading policy based on that input.
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    if ( 0<=a && a<40)
      cout<<"Grade F ";
     else if ( 40<=a && a<45)
      cout<<"Grade D ";
      else if ( 45<=a && a<50)
      cout<<"Grade C ";
      else if ( 50<=a && a<55)
      cout<<"Grade C+ ";
      else if ( 55<=a && a<60)
      cout<<"Grade B- ";
      else if ( 60<=a && a<65)
      cout<<"Grade B ";
      else if ( 65<=a && a<70)
      cout<<"Grade B+ ";
      else if ( 70<=a && a<75)
      cout<<"Grade A- ";
      else if ( 75<=a && a<80)
      cout<<"Grade A ";
      else if ( 80<=a && a<101)
      cout<<"Grade A+ ";

     else
        cout<<"Error";
}
