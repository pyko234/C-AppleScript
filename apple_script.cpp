#include <iostream>
using namespace std;

float ensure_sales_tax(float n)
{	
	// If n is less than 0 OR greater than 1
	if (n < 0 || n > 1){
		return n / 100;	
	}
	
	// Else return n
	return n;
}

int main()
{	
	// Declare Variables
	float apple_price, subtotal_cost, tax_rate, sales_tax, verified_sales_tax, total_cost, payment, change_due;
	int num_of_apples;
		
	// Get current price of apple
	cout << "What is the current price of one apple: ";
	cin >> apple_price;
	
	// Get total number of apples that the customer is buying
	cout << "How many apples is the customer buying: ";
	cin >> num_of_apples;
	
	// Get total cost
	subtotal_cost = apple_price * num_of_apples;
	
	// Get sales_tax
	cout << "What is the local sales tax rate: ";
	cin >> tax_rate;
	
	// Verify Sales Tax
	verified_sales_tax = ensure_sales_tax(tax_rate);
	
	// Get final_cost
	sales_tax = subtotal_cost * verified_sales_tax;
	total_cost = subtotal_cost + sales_tax;
	
	// Display final_cost
	cout << "The Total amount owed is: " << total_cost << endl;
	
	// Get total amount tendered
	cout << "How much did the customer pay with: ";
	cin >> payment;
	
	// Get change_due
	change_due = payment - total_cost;
	
	// Display change due
	cout << "The total amount of change due is: " << change_due << endl;
	
	// Return 0
	return (0);
}
