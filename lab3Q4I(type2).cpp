#include<iostream>
using namespace std;
class time
{
	int hour,min,sec;
	public:
		void getdata()
		{
			cout<<"Enter hour, minute and seconds"<<endl;
			cin>>hour>>min>>sec;
		}
		time addtime(time t1,time t2)
		{
			time temp;
			temp.sec=t1.sec+t2.sec;
			temp.min=temp.sec/60;
			temp.sec=temp.sec%60;
			temp.min=temp.min+t1.min+t2.min;
			temp.hour=temp.min/60;
			temp.min=temp.min%60;
			temp.hour=temp.hour+t1.hour+t2.hour;
			return temp;
		}
		void display()
		{
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
};
int main()
{
	time t1,t2,t3,result;
	cout<<"For first time"<<endl;
	t1.getdata();
	cout<<"For second time"<<endl;
	t2.getdata();
	result=t3.addtime(t1,t2);
	cout<<"sum of two times"<<endl;
	result.display();
	return 0;
	
}
