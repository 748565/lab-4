#include <iostream>
using namespace std;

class son 
{
	int x,y;
public :
   void input()
   {
   	cout<<"Enter a Number to find its cube\n";
   	cin>>x;
   }
	 void cube()
	 {
	 	y = x*x*x ;
	 }
	void disp()
	{
		cout<<"The cube of number"<<x<<"is"<< y;
	}
	};
	
	int main()
	{
		son o;
		o.input();
		o.cube();
		o.disp();
	return 0;
		
	}
