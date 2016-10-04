#include<iostream>

using namespace std;

int main()
{
	int x=1;
	int fee=2500;
	
	cout<<"2500"<<endl;
	for(x=1;x<=6;x++){
		fee=fee*1.04;
		cout<<fee<<endl;
	}
	
}
