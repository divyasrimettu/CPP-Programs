#include<iostream>
using namespace std;

class Demo
{
	public:
		void show()
		{
			cout<<"No arguments";
		
		}
		void show(int a)
		{
			cout<<"One argument: "<<a;
		
		}
		void show(int a, int b)
		{
			cout<<"Two arguments: "<<a<<" "<<b;
		}
};
main()
{
	Demo d;
	d.show(); d.show(10); d.show(10,20);
}
