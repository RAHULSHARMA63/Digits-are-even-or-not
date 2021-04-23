#include <iostream>
using namespace std;
int main()
{
   int inumber;

   cout << "enter a four digit number: \n";
   cin >> inumber;
   
   cout << "the number you choose is: \n" << inumber << endl;

   if (inumber % 2 == 0 && inumber/10 % 2 == 0 && (inumber/10)/10 % 2 == 0 && ((inumber/10)/10)/10 % 2 == 0);   
   
   else
      {
       cout << "digits are even \n" << endl;
      }
   return 0;
}
