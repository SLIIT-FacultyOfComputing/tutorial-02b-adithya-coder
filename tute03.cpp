/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>//header 
using namespace std; //namespace
int main()//main
{
    int no;// varible
    long fac; //varible

    cout<<"Enter a Number : ";//input 
    cin>>no;

    fac = 1;// set value fac=1 
    for (int r=no; r >= 1; r--) {// decriment no=no-1 
        fac = fac * r;// get Factorial
    }

    cout<<"Factorial of"<<no<<" is"<<  fac;  //display 
    return 0;
}
