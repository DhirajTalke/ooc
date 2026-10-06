#include<iostream>
using namespace std;
class SavingAccount{
private:
 string accountHolderName;
 int accountNumber;
 double balance;
 double intrestRate;
public:
 SavingAccount(string name,int accNumber,double initialBalance,double rate){
 accountHolderName=name;
 accountNumber=accNumber; 
 balance=initialBalance;
 intrestRate=rate;
}
 void deposite(double amount){
  if(amount>0){
    balance+=amount;
    cout<<"Deposite:$"<<amount<<endl;
  }
 }
 void withdraw(double amount){
  if(amount>0&&amount<=balance){
    balance=balance-amount;
    cout<<"Withdrawn:$"<<amount<<endl;
   }else{
      cout<<"Insufficient balance!"<<endl;
   }
  }
  void applyIntrest(){
    double intrest=balance*intrestRate/100;
    balance+=intrest;
    cout<<"Intrest Applied:$"<<intrest<<endl;
   }
   void display(){
    cout<<"\n[Saving Account]"<<endl;
    cout<<"Account Holder:"<<accountHolderName<<endl;
    cout<<"Account Number:"<<accountNumber<<endl;
    cout<<"Balance:$"<<balance<<endl;
    cout<<"Intrest Rate:"<<intrestRate<<"%"<<endl;
   }
  };
  class CheckingAccount{
  private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;
 public:
    CheckingAccount(string name,int accNumber,double initialBalance,double fee){
      accountHolderName=name;
      accountNumber=accNumber;
      balance=initialBalance;
      transactionFee=fee;
     }
     void deposit(double amount){
       if(amount >0){
         balance+=amount;
         cout<<"Deposited:$"<<amount<<endl;
       }
     }
     void withdraw(double amount){
       double total=amount+transactionFee;
       if(total<=balance){
         balance-=total;
         cout<<"Withdrawn:$"<<amount<<"($"<<transactionFee<<"fee applied)"<<endl;
       }else{
         cout<<"Insufficient balance for withdrawl+fee"<<endl;
         }
       }
        void display(){
         cout<<"\n[Checking Account]"<<endl;
         cout<<"Account Holder:"<<accountHolderName<<endl;
         cout<<"Account Number:"<<accountNumber<<endl;
         cout<<"Balance:$"<<balance<<endl;
         cout<<"Transaction Fee:$"<<transactionFee<<endl;
        }
       };
 int main(){
   SavingAccount savings("Alice",1001,5000.0,3.0);
   CheckingAccount checking("Bob",1002,3000.0,20.0);

   savings.display();
   savings.deposite(1000);
   savings.withdraw(2000);
   savings.applyIntrest();
   savings.display();
   
   checking.display();
   checking.deposit(1500);
   checking.withdraw(1000);
   checking.display();
 
   return 0;
  } 
    

      
