#include<iostream>
using namespace std;

int main()
{
	float item1= 15.95;
	float item2= 24.95;
	float item3= 6.95;
	float item4= 12.95;
	float item5= 3.95;
	float subtotal,tax,total;
	
	subtotal=item1+item2+item3+item4+item5;
	tax=subtotal*0.07;
	total=subtotal+tax;
	
	cout<<"Price of Item 1 : $"<<item1<<endl;
	cout<<"Price of Item 2 : $"<<item2<<endl;
	cout<<"Price of Item 3 : $"<<item3<<endl;
	cout<<"Price of Item 4 : $"<<item4<<endl;
	cout<<"Price of Item 5 : $"<<item5<<endl<<endl;
	
	cout<<"Subtotal : $"<<subtotal<<endl;
	cout<<"Tax      : $"<<tax<<endl;
	cout<<"Total    : $"<<total<<endl;
	
	return 0;
}
