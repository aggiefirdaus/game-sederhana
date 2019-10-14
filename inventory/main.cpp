#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <vector>
using namespace std;
struct Uwuw
{
	string name;
	string type;
	int damage;
};
void uwuwInventory();
int main()
{
	string name, type;
	bool isEmpty = false, isEquipped = false;
	ofstream outputFile;
	ifstream inputFile;
	vector<Uwuw> inventory(5);
	int choice=1;
	int i=0,equip1,equip2,damage,sides=10,counter=0,toRemove;
	while (true)
	{
		uwuwInventory();
		choice = _getch();
		switch (choice)
		{
			case'1':
			{
				for (int i = 0; i < inventory.size(); ++i)
				{
					if (inventory[i].name != "0" || inventory[i].type != "0" || inventory[i].damage != 0)
						cout << endl << i + 1 << " " << inventory[i].name << " " << inventory[i].type << " " << inventory[i].damage << endl;
				}
				break;
			}
			case '2':
			{
				cout << "Enter Name: ";
				cin >> name;
				cout << "Enter Type: ";
				cin >> type;
				cout << "Enter Damage: ";
				cin >> damage;
				counter=0;
				for (int i = 0; i < inventory.size(); ++i)
				{
					if (inventory[i].name == "0" || inventory[i].type == "0" || inventory[i].damage == 0 && counter == 0)
						isEmpty = true;
					if (isEmpty == true)
					{
						if (counter == 0)
						{
							inventory[i].name = name;
							inventory[i].type = type;
							inventory[i].damage = damage;
							isEmpty = false;
							counter++;
						}
					}
				}
				cout << "\nItem was added to Inventory.\n\n";
				for (int i = 0; i < inventory.size(); ++i)
				{
					if (inventory[i].name != "0" || inventory[i].type != "0" || inventory[i].damage != 0)
						cout << endl << i + 1 << " " << inventory[i].name << " " << inventory[i].type << " " << inventory[i].damage << endl;
				}
				break;
			}
			case '3':
			{
				for (int i = 0; i <inventory.size(); ++i)
				{
					if (inventory[i].name != "0" || inventory[i].type != "0" || inventory[i].damage != 0)
						cout << endl << i + 1 << " " << inventory[i].name << " " << inventory[i].type << " " << inventory[i].damage << endl;
				}
					cout << "\n\nWhat item would you like to remove?";
					cin >> toRemove;
					inventory.erase(inventory.begin() + toRemove);
					cout << "\nItem was removed from inventory";
					break;
			}
			case '4':
			{
				int _itemNumber = 0;
				for (int i = 0; i < inventory.size(); ++i)
				{
					if (inventory[i].name != "0" || inventory[i].type != "0" || inventory[i].damage != 0)
						_itemNumber++;
				}
				cout << "Number of items that can be held is: " << inventory.size() - _itemNumber<<endl;
				break;
			}
			case '5':
			{
				cout << "Max Capacity is: " << inventory.size();
				cout << endl;
				break;
			}
			case 'Q':
			{
				return 0;
				break;
			}
		}
	}
}
void uwuwInventory()
{
	cout << "***************************************" << endl
		<< "*          Uwuw Inventory           *" << endl
		<< "* 1: View Current Inventory           *" << endl
		<< "* 2: Add Item to Inventory            *" << endl
		<< "* 3: Remove Item From Inventory       *" << endl
		<< "* 4: View Slots Remaining             *" << endl
		<< "* 5: View Inventory Capacity          *" << endl
		<< "* Q: Quit Program                     *" << endl
		<< "***************************************" << endl;
}
