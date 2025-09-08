#include <iostream>

using namespace std;

int CalculatePrice(int itemPrice, int itemCount)
{
	int result = itemPrice * itemCount;
	return result;
}

float CalculatePotionPrice(float itemPrice, float itemCount)
{
	float result = itemPrice * itemCount;
	return result;
}

float CalculateSumOfGoods(int swordPrice, int shieldPrice, float potionPrice)
{
	float result = (float)swordPrice + (float)shieldPrice + potionPrice;
	return result;
}

int main()
{
	// Goods prices variables
	int sword = 5;
	int shield = 8;
	float potion = 3.0;

	cout << "----------------------------------------------------------";
	cout << "\n|							  |";
	cout << "\n|							  |";
	cout << "\n|							  |";
	cout << "\n|							  |";
	cout << "\n|	Welcome to Gentle Jerry's Generic Goods!	  |";
	cout << "\n|							  |";
	cout << "\n|		Sword - 5 gold				  |";
	cout << "\n|		Shield - 8 gold				  |";
	cout << "\n|		Potion - 3 gold per ounce		  |";
	cout << "\n|							  |";
	cout << "\n|							  |" << endl;
	cout << "-----------------------------------------------------------" << endl;

	cout << "\n\nHow many Swords would you like?  ";

	int userSwordCount;
	cin >> userSwordCount;

	cout << "\n\nHow many Shields would you like?  ";

	int userShieldCount;
	cin >> userShieldCount;

	cout << "\n\nHow many ounces of Potion would you like?  ";

	float userPotionCount;
	cin >> userPotionCount;

	// Save the values of the goods' prices into variables to make them easier to manipulate
	int swordPrice = CalculatePrice(sword, userSwordCount);
	int shieldPrice = CalculatePrice(shield, userShieldCount);
	float potionPrice = CalculatePotionPrice(potion, userPotionCount);

	cout << "-------------------------------" << endl;
	cout << "\n" << userSwordCount << " Swords = " << swordPrice << " gold" << endl;
	cout << userShieldCount << " Shields = " << shieldPrice << " gold" << endl;
	cout << userPotionCount << " ounces of potion = " << potionPrice << " gold" << endl;

	cout << "-------------------------------" << endl;
	cout << "\nTotal Cost of Goods = " << CalculateSumOfGoods(swordPrice, shieldPrice, potionPrice) << " gold" << endl;
}