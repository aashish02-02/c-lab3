#include<iostream>
using namespace std;
class time
{
	int hour,min,sec;
	public:
		void getdata()
		{
			cout<<"Enter hour, minute and second"<<endl;
			cin>>hour>>min>>sec;
		}
		void addtime(time t1,time t2)
		{
			sec=t1.sec+t2.sec;
			min=sec/60;
			sec=sec%60;
			min=min+t1.min+t2.min;
			hour=min/60;
			min=min%60;
			hour=hour+t1.hour+t2.hour;
		}
		void display()
		{
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
};
int main()
{
	time t1,t2,t3;
	cout<<"For first time "<<endl;
	t1.getdata();
	cout<<"For second time "<<endl;
	t2.getdata();
	t3.addtime(t1,t2);
	cout<<"Sum of two times"<<endl;
	t3.display();
	return 0;
}
