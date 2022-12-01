#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary part"<<endl;
			cin>>real>>imag;
		}
		complex addcomp(complex c1,complex c2)
		{
			complex temp;
			temp.real=c1.real+c2.real;
			temp.imag=c1.imag+c2.imag;
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3,result;
	cout<<"For first complex"<<endl;
	c1.getdata();
	cout<<"For seocond complex"<<endl;
	c2.getdata();
	result=c3.addcomp(c1,c2);
	cout<<"Sum of two complex "<<endl;
	result.display();
	return 0;
}
