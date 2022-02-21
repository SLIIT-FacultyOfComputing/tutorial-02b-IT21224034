
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

/*
#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
}  


#include<iostream>
int main()
{
  float cm,inches;
  std::cout<<"Enter a length in cm : "<<std::endl;
  std::cin>>cm;

  inches = cm / 2.54;

  std::cout<<"Length in inches is : "<<inches;

  return 0;
}
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t\t" << "Name\t\t" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout << r+1<<"\t\t"
 << names[r]<<"\t\t"
 << setw(5)<<setiosflags(ios::fixed)<<setprecision(2)<<marks[r] << endl;
 }
  
  return 0;
}
