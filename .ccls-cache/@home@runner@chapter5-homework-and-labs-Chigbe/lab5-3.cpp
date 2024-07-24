//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double MEMBER_DISCOUNT_RATE = 0.1;
	const double NONMEMBER_DISCOUNT_RATE = 0.05;
	const double SHIP_CHG1 = 0.99;
	const double SHIP_CHG2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ';
	double discount = 0.0;

	//enter input items
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier member (Y/N)? ";
	cin >> member;

	//subtract discount, if appropriate
	if (toupper(member) == 'Y')
		discount = amtOwed * MEMBER_DISCOUNT_RATE;
	else
		discount = amtOwed * NONMEMBER_DISCOUNT_RATE;
	//end if
			amtOwed -= discount;

	//add shipping
	if (amtOwed >= 100.0)
		amtOwed += SHIP_CHG1;
	else
		amtOwed += SHIP_CHG2;
	//end if

	//display final amount owed
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: " << amtOwed << endl;

	return 0;
}	//end of main function