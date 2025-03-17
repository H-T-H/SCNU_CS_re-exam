/*
2．完善本章提到的SavingAccount类。该类的属性有账号、存款金额和月利率。账号自动生成。
第一个生成的对象账号为1，第二个生成的对象账号为2，依次类推。所需的操作有修改利率、
每月计算新的存款额（原存款额+本月利息）和显示账户金额。
*/
#include<iostream>
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
    };

int main(){
    SavingAccount a1(100, 0.1);
    SavingAccount a2(200, 0.2);
    cout<<"account:"<<a1.account<<endl;
    cout<<"balance:";
    a1.displayBalance();
    cout<<"account:"<<a2.account<<endl;
    cout<<"balance:";
    a2.displayBalance();
    cout<<"a1下个月存款是:"<<a1.calcNewBalance()<<endl;
    cout<<"a2下个月存款是:"<<a2.calcNewBalance()<<endl;
    a2.changeLilv(0.3);
    cout<<"a2下个月存款是:"<<a2.calcNewBalance()<<endl;
}