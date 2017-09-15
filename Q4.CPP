#include <iostream>
#include<cmath>
using namespace std;

class son 
{
	int x;
public :
   void input()
   {
   	cout<<"enter a number to check whether it is even or odd \n";
   	cin>>x;
   }
	 void display()
	 { 
	 if (x%2 == 0)
                 
                 {
                 cout<< "the number is even\n";
                 }	 	 
	 
	 else 
	 {
	     cout<< "number is odd";
	  } 	
	 }
 
	};
	
	int main()
	{
		son o;
		o.input();
		o.display();
	return 0;
		
	}
