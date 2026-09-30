#include <iostream>
using namespace std;

int main() {

    int input, PIN;
    string transfer = "";
    int defaultPIN = 1234;
    string account = "1234567890";
    int attempt = 3;
    float balance = 5000;
    float wallet = 0;
    float limit = 10000;
    int attemptLeft = 4;
    int minimum = 100;

    for(int i = 1; i <= attempt; i++) {
        
        attemptLeft--;
        cout << "--- B A N K ---" << endl;
        cout << "Attempt left: " << attemptLeft << endl;
        cout << "Input Card PIN: ";
        cin >> PIN;
        cout << endl;
        if ( PIN == defaultPIN) {
            break;
        }

        else if (i == attempt) {
            cout << "To many wrong PINs." << endl;
            cout << "Please contact your bank." << endl;
            return 0;

        }


    }

    here:

        cout << "--- B A N K ---" << endl << endl;

    cout << "[1] Deposit" << endl;
    cout << "[2] Withdraw" << endl;
    cout << "[3] Balance Check" << endl;
    cout << "[4] Transfer Money" << endl;
    cout << "[5] Exit" << endl;
    cout << "Select: ";
    cin >> input;

    switch (input) {
    

        int amount;

        case 1:

            case1here:

            cout << "Balance: " << balance << ".00" << endl << endl;

            cout << "(Whole pesos, minumum 100)" << endl;
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > wallet) {
                cout << "Insufficient funds." << endl << endl;
                goto here;
            }
            else {
                if (amount < minimum) {
                    cout << "Minumum 100" << endl;
                    goto here;
                }

                else {
                    balance += amount;
                    wallet -= amount;
                    cout << "Deposited: " << amount << ".00 " << endl;
                    cout << "Wallet: " << wallet << endl << endl;

                    goto here;
            }
            }
            break;

        case 2:
            
            cout << "Balance: " << balance << ".00" << endl << endl;
            cout << "Daily limit left: " << limit << ".00" << endl; 

            cout << "(Multiples of 100)" << endl;
            cout << "Enter amount: ";
            cin >> amount;

            if (amount < minimum) {
                cout << "Minimum is 100.";
                goto here;
            }
            
            else if (amount > balance) {
                cout << "Insufficient funds.";
                goto here;
            }

            else {
                cout << "Please take your cash: " << (balance -= amount) << ".00" << endl;
                cout << "Wallet: " << (wallet += amount) << endl;
                cout << "Balance: " << balance << ".00" << endl << endl;

                goto here;
            }
            break;

        case 3:
            int goback;
            cout << "Account: 123456789" << endl;
            cout << "Balance: " << balance << endl;

            cout << "Type \"1\" to go back" << endl;
            cin >> goback;
            
            if(goback == 1) {
                goto  here;
            }
        
        case 4:

            bool valid = true;
            
            cout << "Enter the 10-digit \nrecipient account number: ";
            cin >> transfer;

            if (transfer.length() != 10) {
                    valid = false;
                    cout << "Account number must be 10 digits.";
                    return 0;
            }
    
            else {
                for(int i = 0; i < 10; i++) {
                    if (transfer[i] < '0' || transfer[i] > '9') {
                        valid = false;
                    }
                }
            }

            if (transfer == account) {
                cout << "You cannot transfer to your own account.";
                return 0;
            }

            else {

                if(valid) {
                cout << "To: " << transfer << endl;
                cout << "Balance: " << balance << endl << endl;
                
                cout << "Enter amount to send: ";
                cin >> amount;

                if (amount < 100) {
                    cout << "Minimum is 100.";
                    return 0;
                }
                else if (amount > balance) {
                    cout << "Insufficient funds.";
                    return 0;
                }
                else {
                    cout << "Sent " << amount << ".00 to " << transfer << endl;
                    balance -= amount;
                    goto here;
                }

                }

                else {
                cout << "Account number must be 10 digits.";
                }

            }

            
            
    }       
    



}