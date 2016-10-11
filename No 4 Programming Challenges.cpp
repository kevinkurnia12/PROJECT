// No 4 Programming Challenges
// Restaurant Bill

#include <iostream>

using namespace std;

int main(){
	float mealCharge = 88.67;
	float tax = 0.0675 * mealCharge;
	float mealTax = 88.67 + tax;
	float tip = 0.2 * mealTax;
	float totalBill = mealCharge + tax + tip;
	
	cout << "Meal Cost : " << mealCharge << endl;
	cout << "Tax Amount : " << tax << endl;
	cout << "Tip Amount : " << tip << endl << endl;
	cout << "Total bill : " << totalBill;
	
	return 0; 
}
