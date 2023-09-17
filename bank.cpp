#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



class bankSystem {
private: 
    float balance;
public:
    bankSystem() {balance = 1000;} // starting amount

    void menu() {
        cout <<"<------------------->" << endl;
        cout << "Please select an option" << endl;
        cout << "(1) Home" << endl;
        cout << "(2) View Balance" << endl;
        cout << "(3) Deposit" << endl;
        cout << "(4) Withdraw" << endl;
        cout << "(5) Exit" << endl;
        cout <<"<------------------->" << endl;
    }

    void viewBalance() {
        cout << "Your balance is: $";
        cout << balance << endl;
    }

    void deposit(float moneyIn) {
        cout << setprecision(5);
        balance += moneyIn;

        cout << "You deposited: $";
        cout << moneyIn << endl;

        cout << "Your balance is now $";
        cout << balance << endl;
    }

    void withdraw(float moneyOut) {

        if (balance - moneyOut < 0) {cout << "Not enough money to take out!" << endl;}

        else {
            cout << setprecision(5);
            balance -= moneyOut;

             cout << "You withdrew: $";
             cout << moneyOut << endl;

             cout << "Your balance is now $";
             cout << balance << endl;

        }
       
    }
};



int main() {
    bankSystem test;

    int num = 0;

    while (num != 5) { // while user does not exit
        test.menu();

        cin >> num;
         switch (num) {
        case 1: 
            test.menu();
            break;
        case 2: 
            test.viewBalance();
            break;

        case 3:
            cout << "Amount to deposit: $";

            float amount;
            cin >> amount;
            test.deposit(amount);
            break;

         case 4:
            cout << "Amount to withdraw: $";

            float amount2;
            cin >> amount2;
            test.withdraw(amount2);
            break;

        case 5:
            cout << "Exited!" << endl;
            break;
         }
    }
}