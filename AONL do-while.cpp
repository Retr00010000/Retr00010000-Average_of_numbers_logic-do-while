#include <iostream>
using namespace std;
int main() 
{
float i=0,num,sum=0,avg,n;  // Initialization is (i=0) and (sum=0), while declarations are the (num) , (avg) and (n).

                                   // "Get the total and average of any desirable number of integers."   "(// the question when trying the code out.)"
// (1) i=0 ---> our counter will look like this (0,1,2) if the condition were to be ---> while(i<3).
// (2) num ---> declaration of an integer.
// (3) constantly updating the sum after each loop starting from 0 to 2 (0,1,2) if the condition were to be ---> while(i<3).
// (4) average outside the loop as the equation of (sum/no. of integers)
// (5) The maximum number limit of the integers that can be inserted.
//cout<<"Enter the maximum number of integers: ";
//cin>>n;
//cout<<endl;
//cout<<"Insert the desirable integers:"<<endl;
//while(i<n){
//	cin>>num;
//	sum+=num;
//	i++;
//}
//avg=sum/n;
//cout<<endl;
//cout<<"The sum of numbers was: "<<sum<<endl;
//cout<<"\nThe average of the given numbers is: "<<avg;

	
//                From (While) to (Do While).


// The execution of the loop occurs before checking the condition, unlike the previous while loop.

cout<<"Enter the amount of maximum number of integers: ";
cin>>n;
cout<<endl;
cout<<"Insert the desirable integers:"<<endl;
do{
	cin>>num;
	sum+=num;
	i++;
}while(i<n);
avg=sum/n;
cout<<endl;
cout<<"The sum of numbers was: "<<sum<<endl;
cout<<"\nThe average of the given numbers is: "<<avg;


	
return 0;
}
