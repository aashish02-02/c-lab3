#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary "<<endl;
			cin>>real>>imag;
		}
		complex addcomp(complex c2)
		{
			complex temp;
			temp.real=real+c2.real;
			temp.imag=imag+c2.imag;
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3;
	cout<<"For first complex"<<endl;
	c1.getdata();
	cout<<"For second complex "<<endl;
	c2.getdata();
	c3=c1.addcomp(c2);
	cout<<"Sum of two complex "<<endl;
	c3.display();
	return 0;
}
