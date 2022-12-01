#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real part"<<endl;
			cin>>real;
			cout<<"Enter imaginary part"<<endl;
			cin>>imag;
		}
		void addcomp(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3;
	cout<<"For first complex number "<<endl;
	c1.getdata();
	cout<<"For second complex number "<<endl;
	c2.getdata();
	c3.addcomp(c1,c2);
	cout<<"Sum of two complex number "<<endl;
	c3.display();
	return 0;
}
