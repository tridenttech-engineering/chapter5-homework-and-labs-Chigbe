#include <iostream> // Include the necessary header file for input/output operations
#include <iomanip>

using namespace std; // Use the std namespace for cleaner code

double calculateTotalAmount(double item1Price, double item2Price) {
		// Determine the item to be discounted (lowest priced or second item if equal)
		double discountedItemPrice = (item1Price <= item2Price) ? item1Price : item2Price;
		double undiscountedItemPrice = (item1Price > item2Price) ? item1Price : item2Price;

		// Calculate the total amount with discount applied
		double totalAmount = undiscountedItemPrice + (discountedItemPrice / 2);

		return totalAmount; // Return the total amount after applying the discount
}

int main() {
		double item1Price, item2Price;

		cout << "Enter the price of the first item: $"; // Prompt the user for the price of the first item
		cin >> item1Price; // Read the price of the first item

		cout << "Enter the price of the second item: $"; // Prompt the user for the price of the second item
		cin >> item2Price; // Read the price of the second item

		// Calculate the total amount with the discount applied
		double totalAmount = calculateTotalAmount(item1Price, item2Price);

		cout << fixed << setprecision(2); // Set the output format to fixed-point with 2 decimal places
		cout << "Total amount the customer owes: $" << totalAmount << endl; // Display the total amount the customer owes

		return 0; // Indicate successful program execution
}