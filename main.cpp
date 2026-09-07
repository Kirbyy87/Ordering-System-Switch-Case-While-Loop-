#include <iostream>
using namespace std;

int main() {
    int choice;
    char subChoice;
    string itemName;
    double price = 0, quantity, amount, cash, change;

    do {
        cout << "Ordering System\n";
        cout << "1. Menu\n";
        cout << "2. Desserts\n";
        cout << "3. Drinks\n";
        cout << "Please choose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nMENU\n";
                cout << "a. Fried Chicken w/ rice P50\n";
                cout << "b. Pork Chop w/ rice P45\n";
                cout << "Kindly choose a particular menu: ";
                cin >> subChoice;
                cout <<"---------------------------------------------------------------------"<<endl;

                switch (subChoice) {
                    case 'a':
                        itemName = "Fried Chicken w/ rice";
                        price = 50;
                        break;
                    case 'b':
                        itemName = "Pork Chop w/ rice";
                        price = 45;
                        break;
                    default:
                        cout << "Invalid choice!\n\n";
                        continue;
                }
                break;

            case 2:
                cout << "\nDESSERTS\n";
                cout << "a. Chocolate Cake P25\n";
                cout << "b. Ice Cream P50\n";
                cout << "Kindly choose a particular Dessert: ";
                cin >> subChoice;
                cout <<"---------------------------------------------------------------------"<<endl;

                switch (subChoice) {
                    case 'a':
                        itemName = "Chocolate Cake";
                        price = 25;
                        break;
                    case 'b':
                        itemName = "Ice Cream";
                        price = 50;
                        break;
                    default:
                        cout << "Invalid choice!\n\n";
                        continue;
                }
                break;

            case 3:
                cout << "\nDRINKS\n";
                cout << "a. Coke P18\n";
                cout << "b. Sprite P20\n";
                cout << "Kindly choose a particular Drink: ";
                cin >> subChoice;
                cout <<"---------------------------------------------------------------------"<<endl;

                switch (subChoice) {
                    case 'a':
                        itemName = "Coke";
                        price = 18;
                        break;
                    case 'b':
                        itemName = "Sprite";
                        price = 20;
                        break;
                    default:
                        cout << "Invalid choice!\n\n";
                        continue;
                }
                break;


        }

        cout << "Your order is " << itemName << " P" << price << "\n";

        cout << "Enter quantity: ";
        cin >> quantity;

        amount = price * quantity;
        cout << "The amount to be paid is: " << amount << "\n";

        cout << "Enter your cash on hand: ";
        cin >> cash;

        change = cash - amount;
        cout << "Your change is " << change <<endl;
        cout<< "Thanks for Ordering!!!\n"<< endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------\n";

    } while (choice != 3);

    return 0;
}
