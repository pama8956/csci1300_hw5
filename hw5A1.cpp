#include <iostream>
#include <cmath>

using namespace std;

int totalGold(int donations[], int size){
int total= 0;
for (int i = 0; i<size; i++){
    total+=donations[i];    
}
return total;
}

int main(){
    int donation[100];
    int number=0;
    int vaultGoal = 42500;
    cout << "Enter the number of gold donations: ";
    cin >> number;
    for (int i =0; i<number; i++){
    cout << "Enter gold donation " << i+1 << ": ";
    cin >>donation[i];
    }
    int total= totalGold(donation, number);
    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " <<  total << endl;
    cout << "Vault goal: " << vaultGoal << endl; 
    int surplus = abs(total - vaultGoal);
    if (total>=vaultGoal){
        cout << "The Vault is fully funded! Surplus: " << surplus << " gold" << endl;
    } else{
        cout << "The Vault still needs " << surplus << " more gold." << endl;
    }
}