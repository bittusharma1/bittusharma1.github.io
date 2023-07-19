#include <iostream>
using namespace std;

class BankAccount {
    
    private:
    int currentBankBalance;
    
    public:
    string nameOfUser;
    
    BankAccount(int intiallyMoneyWantsToDeposit, string intiallyNameOfTheUser) {
        
        cout << "In paramertized constructor, setting currentBankBalance as: "  
        << intiallyMoneyWantsToDeposit << " and Intially name of the user as: " << intiallyNameOfTheUser << " " <<  endl;
        
        currentBankBalance = intiallyMoneyWantsToDeposit;
        nameOfUser = intiallyNameOfTheUser;
        
    }
    
    void updateName(string nameTobeUpdate) {
        cout << "In updateName method, updating name of the user as: " << nameTobeUpdate << endl;
        nameOfUser = nameTobeUpdate;
    }
    
    void depositMoneyIntoBankAccount(int moneyWantsToDeposit) {
        cout << "In depositMoneyIntoBankAccount Method, adding moneyToUserAccount: " << moneyWantsToDeposit << endl;
        currentBankBalance += moneyWantsToDeposit;
    }
    
    void debitMoneyFromBankAccount(int moneyWantsToDebit) {
        cout << "In debitMoneyFromBankAccount Method, User extracting Money from BankAccount: " << moneyWantsToDebit << endl;
        currentBankBalance -= moneyWantsToDebit;
    }
    
    void getAccountInformation() {
        cout << "Name of the user is " << nameOfUser << " with current bank Balance as: " << currentBankBalance << endl;
    }
};

int main()
{
    /* 
    BankAccount aryantObj;
    aryantObj.getAccountInformation();
    
    // cout << "Name of the user with the help of aryantObj: " << aryantObj.nameOfUser << endl;
    
    /* This line gives us error as currentBankBalance is define in private access modifier 
       And error is : error: ‘int BankAccount::currentBankBalance’ is private within this context
       
     cout << "Bank balance of the user with the help of aryantObj: " << aryantObj.currentBankBalance << endl; 
    
    cout << endl;
    aryantObj.depositMoneyIntoBankAccount(100);
    aryantObj.getAccountInformation();
    
    cout << endl;
    aryantObj.debitMoneyFromBankAccount(50);
    aryantObj.getAccountInformation();
    
    */
    
    // BankAccount AdityaObj;
    
    
    
    BankAccount roushanObj(100, "Roushan");
    roushanObj.getAccountInformation();
    roushanObj.updateName("Roushan Sharma");
    roushanObj.getAccountInformation();
    
    return 0;
}