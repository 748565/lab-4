#include <iostream>
#include<cmath>
using namespace std;

class son 
{
	int r,Diam,circ,Area;
public :
   void input()
   {
   	cout<<"Enter the radius of the circle to find the diameter , circumference and area \n";
   	cin>>r;
   }
	 void calc()
	 {
	 	Diam = 2*r ;
	 	circ = 2*3.14*r;
	 	Area = 3.14*r*r;
	 }
	void disp()
	{
		cout<<"The Diameter of the circle is" <<Diam;
		cout<<"the circumference of the circle is "<<circ;
		cout<<"The Area of the circle is "<<Area;
	}
	};
	
	int main()
	{
		son o;
		o.input();
		o.calc();
		o.disp();
	return 0;
		
	}
