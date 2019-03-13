#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int HoursPerWeek;
	cout << "Enter the number of hours you work for a week: " << endl;
	cin >> HoursPerWeek;
	cout << "You work: " << HoursPerWeek << " hours per week." << endl; 

	double InitialIncome;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Enter your Income per hour: " << endl;
	cin>> InitialIncome;
	cout << "\nYour total Income is: " << "$" << InitialIncome * HoursPerWeek << endl;

	double Income;
	cout << fixed << showpoint;
	cout << setprecision(2);
	Income = InitialIncome * HoursPerWeek;


	double Tax;
	Tax = 0.14;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Tax is worth 10%" << endl;
	cout << "Your income after Tax is: " << "$" << Income - (Tax * Income) << endl;

	double NetIncome;
	NetIncome = Income - (Tax * Income);
	cout << fixed << showpoint;
	cout << setprecision(2);

	double Clothes;
	Clothes = 0.10;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "\nYou spent 10% of your net income for clothes" << endl;
	cout << "You spent " << "$" << NetIncome * Clothes << endl;
	cout << "Your Net Income after buying clothes is " << "$" << NetIncome - (NetIncome * Clothes) << endl;

	double NetIncomeAfterClothes;
	NetIncomeAfterClothes = NetIncome - (NetIncome * Clothes);
	cout << fixed << showpoint;
	cout << setprecision(2);

	double Supplies;
	Supplies = 0.01;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "\nAfter buying clothes, you used 1% of your remaining net income for School Supplies" << endl;
	cout << "You spent " << "$" << Supplies * NetIncomeAfterClothes << endl;
	cout << "Your Net Income after buying School Supplies is " << "$" << NetIncomeAfterClothes - (Supplies * NetIncomeAfterClothes) << endl;

	double NetIncomeAfterSchoolSupplies;
	NetIncomeAfterSchoolSupplies = NetIncomeAfterClothes - (Supplies * NetIncomeAfterClothes);
	cout << fixed << showpoint;
	cout << setprecision(2);

	double SavingsBonds;
	SavingsBonds = 0.25;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "\nAfter buying School Supplies, you used 25% of your remaining money for Savings Bond" << endl;
	cout << "You spent " << "$" << SavingsBonds * NetIncomeAfterSchoolSupplies << endl;
	cout << "Your Net Income after buying School Supplies is " << "$" << NetIncomeAfterSchoolSupplies - (SavingsBonds * NetIncomeAfterSchoolSupplies) << endl;

	double TotalSavingsBond;
	TotalSavingsBond = SavingsBonds * NetIncomeAfterSchoolSupplies;
	cout << fixed << showpoint;
	cout << setprecision(2);

	double ParentsSavingsBonds;
	ParentsSavingsBonds = 0.50;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "\nFor each dollar you spend to buy savings bonds, your parents spend $0.50 to buy additional savings bonds for you" << endl;
	cout << "Your Parents spend a total of " << "$" << TotalSavingsBond * ParentsSavingsBonds << " for you." << endl;



	_getch();
	return 0;
}


