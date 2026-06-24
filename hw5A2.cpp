#include <iostream>
#include <cmath>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit){
int days=0;
int balance = startBalance;
    while (balance<42500){
balance += dailyDeposit;
 cout << "Day " << days+1 << ": deposited " << dailyDeposit << " balance now " << balance << endl; 
days++;
    }
    return days;
}

int main(){
    int startingBalance = 0;
    int deposit = 0;
cout << "Enter the starting Vault balance: ";
cin>> startingBalance;
cout << "Enter the daily deposit amount: " ;
cin >> deposit;
cout << "--- Vault Savings Plan ---" << endl;
int days = daysToFund(startingBalance, deposit);
cout << "The Vault was funded in " << days <<  " days!";
    return 0;
}