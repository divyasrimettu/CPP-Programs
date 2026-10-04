//Function template example-find maximum of 2 numbers
#include<iostream>
using namespace std;
class Sampletemplate
{
	public:
		template <class T>
        T maxValue(T a, T b)
        {
        	return (a>b)? a:b;
        }
};

main()
{
	Sampletemplate st;
	cout<<"max value is: "<<st.maxValue(10,20)<<endl;
	cout<<"max value is: "<<st.maxValue(10.5f,20.5f)<<endl;
	cout<<"max value is: "<<st.maxValue(10.55,20.55)<<endl;
	cout<<"max value is: "<<st.maxValue('a','g')<<endl;
}
