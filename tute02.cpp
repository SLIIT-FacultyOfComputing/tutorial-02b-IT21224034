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

/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}


#include <iostream>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   std::cout<<"Enter Employee Type : "<<std::endl;
   std::cin>>etype;

   std::cout<<"Enter Salary  : "<<std::endl;
   std::cin>>salary;

   std::cout<<"Enter OtHrs : "<<std::endl;
   std::cin>>otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   std::cout<<"Net Salary is : "<<netSalary;
  
   return 0;
}
*/

#include <iostream>
using namespace std;
int volume(int height, int width, int length);
int main()
{
  int box1Height, box1Width, box1Length;
  int box2Height, box2Width, box2Length;
  int totalVolume, totalSurface;

  cout << "Enter Box 1 Height : ";
  cin >> box1Height;
  cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
  cin >> box1Length;

  cout << "Enter Box 2 Height : ";
  cin >> box2Height;
  cout << "Enter Box 2 Width : ";
  cin >> box2Width;
  cout << "Enter Box 2 Length : ";
  cin >> box2Length;

  totalVolume = volume(box1Height, box1Width, box1Length)
  + volume(box2Height, box2Width, box2Length);

  cout << "Volume of Box is " << totalVolume << endl;

  return 0;
}

int volume(int height, int width, int length)
{
  return height * width * length;
}