/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>//header 
using namespace std;
int main()//main
{
   double salary, netSalary;//variables
   int etype, otHrs, otRate;

  cout<<"Enter Employee Type : ";//display input message
  cin>>etype;//get input
   cout<<"Enter Salary  : ";//display input message
   cin>>salary;//get input
   cout<<"Enter OtHrs : ";//display input message
   cin>>otHrs; //get input
   
   switch (etype) {//get value for check 
      case 1 : //ckeck
          otRate = 1000;
          break; //break
      case 2 :  //check
          otRate = 1500;
          break; //break
      default : // any value 
          otRate = 1700;
          break; //break
   }


   netSalary =(float) salary + (otHrs* otRate); //calculate
   cout<<"Net Salary is :"<<netSalary;// output
  
   return 0;// succusfull 
}
