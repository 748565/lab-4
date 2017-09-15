#include <iostream>
#include<cmath>
using namespace std;

class son 
{
	int x,y;
public :
   void input()
   {
   	cout<<"enter two numbers to find minimum and maximum \n";
   	cin>>x>>y;
   }
	 void display()
	 { 
	 if ( x>y )
                 
                 {
                 cout<< "the maximum is"<< x;
                 cout<< "the minimum is"<< y;
                 }	 	 
	 
	 else 
	 {
	     cout<< "maximum is"<< y;
	     cout<< "minimum is"<< x;
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
