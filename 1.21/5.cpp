/*
5. 文件操作与数据统计 (考察：文件操作、数据处理)

编写一个程序，实现以下功能：

读取一个名为 "data.csv" 的文本文件，其中每行包含一个学生的姓名和三门课程的成绩，数据用逗号分隔（例如： "张三,85,90,78"）。

解析文件中的每一行，将学生的姓名和总成绩 (三门成绩之和) 存储在一个 std::map<std::string, int> 中，其中键是学生姓名，值是总成绩。

遍历 std::map，并输出每个学生的姓名和总成绩。

如果文件不存在，或者文件格式不正确，则捕获相应的异常并输出错误信息。
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
  try {
    ifstream file("data.csv");
    if (!file.is_open()) {
      throw runtime_error("无法打开文件data.csv。");
    }

    map<string, int> students;
    string line;

    while (getline(file, line)) {
      vector<string> parts;
      string part;
      istringstream ss(line);

      // 分割逗号分隔的数据
      while (getline(ss, part, ',')) {
        parts.push_back(part);
      }

      // 验证字段数量
      if (parts.size() != 4) {
        throw runtime_error("格式错误，行：" + line);
      }

      string name = parts[0];
      int total = 0;

      // 计算总成绩并处理转换错误
      for (int i = 1; i <= 3; ++i) {
        try {
          total += stoi(parts[i]);
        } catch (const invalid_argument&) {
          throw runtime_error("无效的成绩，行：" + line);
        } catch (const out_of_range&) {
          throw runtime_error("成绩超出整数范围，行：" + line);
        }
      }

      students[name] = total;
    }

    // 输出学生成绩
    for (const auto& student : students) {
      cout << student.first << ": " << student.second << endl;
    }

  } catch (const exception& e) {
    cerr << "错误：" << e.what() << endl;
    return 1;
  }

  return 0;
}