/*
2．编写一个程序，从键盘上输入一篇英文文章。文章的实际长度随输入变化，最长有10行，每
行80个字符。要求分别统计出其中的字符、数字、空格和其他字符的个数。（提示：用一个二
维字符数组存储文章。）
*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> str_gather;
    int digit_count = 0;
    int letter_count = 0;
    int space_count = 0;
    int other_count = 0;
    string line;
    while(getline(cin,line))
    {
        if (line.empty())
            {
                break;
            }
        str_gather.push_back(line);
    }
    for(string str : str_gather)
    {
        for(int i =0;i < str.size();i++)
        {
            char ch = str[i];
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                letter_count++;
            } else if (ch >= '0' && ch <= '9') {
                digit_count++;
            } else if (ch == ' ') {
                space_count++;
            } else {
                other_count++;
            }
        }
    }
    cout << "\n统计结果：" << endl;
    cout << "字母个数： " << letter_count << endl;
    cout << "数字个数： " << digit_count << endl;
    cout << "空格个数： " << space_count << endl;
    cout << "其他字符个数： " << other_count << endl;
    return 0;
}