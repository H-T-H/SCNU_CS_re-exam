/*
编写一个计算薪水的程序。某企业有3种工资计算方法：计时工资、计件工资和固定月工资。
程序首先让用户输入工资计算类别，再按照工资计算类别输入所需的信息。若为计时工资，
则输入工作时间及每小时薪水，计算本月应发工资。职工工资需要缴纳个人收入所得税，缴
个税的方法是：2000元以下免税；2000～2500元者，超过2000元部分按5%收税；2500～4000
者，2000～2500的500元按5%收税，超过2500部分按10%收税；4000元以上者，2000～2500
的500元按5%收税，2500～4000的1500元按10%收税，超过4000元的部分按15%收税。最后，
程序输出职工的应发工资和实发工资。
*/

//又臭又长，让ai写了
#include <iostream>
#include <iomanip>

using namespace std;

// 计算个人所得税
double calculateTax(double grossSalary) {
    double tax = 0;
    if (grossSalary <= 2000) {
        tax = 0;
    } else if (grossSalary <= 2500) {
        tax = (grossSalary - 2000) * 0.05;
    } else if (grossSalary <= 4000) {
        tax = (2500 - 2000) * 0.05 + (grossSalary - 2500) * 0.10;
    } else {
        tax = (2500 - 2000) * 0.05 + (4000 - 2500) * 0.10 + (grossSalary - 4000) * 0.15;
    }
    return tax;
}

int main() {
    int salaryType;
    double grossSalary, netSalary, hoursWorked, hourlyRate, piecesProduced, pieceRate, monthlySalary;

    cout << "请选择工资计算类别：" << endl;
    cout << "1. 计时工资" << endl;
    cout << "2. 计件工资" << endl;
    cout << "3. 固定月工资" << endl;
    cout << "请输入选项 (1-3): ";
    cin >> salaryType;

    switch (salaryType) {
        case 1: // 计时工资
            cout << "请输入工作时间（小时）: ";
            cin >> hoursWorked;
            cout << "请输入每小时薪水: ";
            cin >> hourlyRate;
            grossSalary = hoursWorked * hourlyRate;
            break;
        case 2: // 计件工资
            // (假设有计件工资的计算)
            cout << "请输入生产件数: ";
            cin >> piecesProduced;
            cout << "请输入每件单价: ";
            cin >> pieceRate;
            grossSalary = piecesProduced * pieceRate;

            break;
        case 3: // 固定月工资
            cout << "请输入月工资: ";
            cin >> monthlySalary;
            grossSalary = monthlySalary;
            break;
        default:
            cout << "无效的选项。" << endl;
            return 1; // 退出程序
    }

    // 计算个人所得税
    double tax = calculateTax(grossSalary);

    // 计算实发工资
    netSalary = grossSalary - tax;

    cout << fixed << setprecision(2); // 设置输出格式为固定小数点后两位
    cout << "应发工资: " << grossSalary << endl;
    cout << "个人所得税: " << tax << endl;
    cout << "实发工资: " << netSalary << endl;

    return 0;
}