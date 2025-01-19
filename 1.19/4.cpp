/*4. 实现简单的银行账户类（考察：类、构造函数、成员函数）

定义一个名为 BankAccount 的类，包含以下私有成员变量：

accountNumber (字符串，账号)

accountHolder (字符串，账户持有人姓名)

balance (双精度浮点数，账户余额)

定义以下公有成员函数：

构造函数，用于初始化账户号码、账户持有人姓名，并将余额初始化为 0。

deposit(double amount)：向账户存入指定金额。

withdraw(double amount)：从账户取出指定金额（需要检查余额是否足够）。

display()：显示账户的完整信息（账号、账户持有人姓名、余额）。

在 main 函数中创建 BankAccount 对象，演示存款和取款操作。
 */

#include<iostream>
#include<string>
class BankAccount{
    private:
        int accountNumber;
        std::string accountHolder;
        double balance;
    public:
        BankAccount(int a,std::string ac):accountNumber(a),accountHolder(ac),balance(0){};
        void deposit(double amount);
        void withdraw(double amount);
        void display();
};

void BankAccount::deposit(double amount){
    this->balance += amount;
}
void BankAccount::withdraw(double amount){
    if (this->balance < amount){
        std::cout<<"balance is insufficient, you poor"<<std::endl;
    }
    else    this->balance -= amount;
}
void BankAccount::display(){
    std::cout<<"id:"<<this->accountNumber<<"\n"<<"name:"<<this->accountHolder<<"\n"<<"banlance:"<<this->balance<<"\n";
}

int main(){
    BankAccount A(0,"jack");
    A.display();
    A.deposit(100);//存100
    A.display();
    A.withdraw(200);//取200
    A.withdraw(50);//取50
    A.display();
}