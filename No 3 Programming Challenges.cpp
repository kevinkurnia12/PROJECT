// No 3 Programming Challenges
// Sales Tax

#include <iostream>

using namespace std;

int main()
{
	float totalSales = 95;
	float tax1 = 0.04 * totalSales;
	float tax2 = 0.02 * totalSales;
	float totalSalesTax = totalSales - tax1 - tax2;
	
	cout << "Total sales tax : " << totalSalesTax;
	
	return 0;
}
