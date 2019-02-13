// Chapter 2 - #4 Restaurant Bill
/* Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen. */

#include <stdio.h>

int main()
{
	const double TAX_RATE = 0.0675;
	const double TIP_RATE = 0.20;
	double meal = 88.67;

	double tax = meal * TAX_RATE;
	double tip = (meal + tax) * TIP_RATE;
	double total = meal + tax + tip;

	printf("Meal cost: $%.2f\n", meal);
	printf("Tax amount: $%.2f\n", tax);
	printf("Tip amount: $%.2f\n", tip);
	printf("Total bill: $%.2f\n", total);

	return 0;
}
