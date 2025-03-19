/*
5．利用第10章的程序设计题的第2题中定义的SavingAccount类，设计一个银行系统，要求该系
统为用户提供开户、销户、存款、取款和查询余额的功能。
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int account_ = 1;//初始账号
class SavingAccount{
    private:
        float balance;
        float yuelilv;
    public:
        int account;
        SavingAccount(float balance,float yuelilv):balance(balance),yuelilv(yuelilv){
            account = account_++;
        }
        void changeLilv(float newLilv){
            yuelilv = newLilv;
        }
        void displayBalance(){
            cout<<balance<<endl;
        }
        float calcNewBalance(){
            return balance * (1+yuelilv);
        }
        void addBalance(float num){
            balance += num;
        }
    };

class bank{
    public:
        unordered_map<int, SavingAccount> allAccount;
        int openAccount(){//开户
            SavingAccount newAccount(0,0);
            allAccount.insert({newAccount.account, newAccount});
            return newAccount.account;//返回新户的账号
        }
        void deleteAccount(int account){//销户
            allAccount.erase(account);
        }

        void deposit(float num,int account){//存款
            SavingAccount curr = allAccount[account];
            curr.addBalance(num);//添加存款
        }
        void getMoney(float num,int account){//取款
            SavingAccount curr = allAccount[account];
            curr.addBalance(num);//添加存款
        }
        void getBalance(int account){//显示余额
            SavingAccount curr = allAccount[account];
            curr.displayBalance();
        }
};

