/*
. 异常处理与文件读取 (考察：异常处理、文件操作)

编写一个程序，实现以下功能：

尝试打开一个名为 "numbers.txt" 的文件进行读取。

如果文件打开失败，则抛出一个 std::runtime_error 异常。

如果文件成功打开，逐行读取文件中的整数，并将这些整数存储到一个 std::vector<int> 中。

如果读取过程中遇到非整数行，则捕获一个 std::invalid_argument 异常。

读取完成后，计算所有整数的和，并将和输出到屏幕上。

无论是否发生异常，都确保文件被正确关闭。

注意： 程序需要在处理各种异常时，输出相应的错误信息。
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
	ifstream inputFile;
	vector<int> numbers;
	int sum = 0;
	string line;

	try {
		inputFile.open("numbers.txt");
		if (!inputFile.is_open()) {
			throw runtime_error("Failed to open file: numbers.txt");
		}

		while (getline(inputFile, line)) {
			try {
				numbers.push_back(stoi(line));
			} catch (const invalid_argument& e) {
				cerr << "Error: Invalid argument in line: '" << line << "' - " << e.what() << endl;
				// 这里不应该终止程序，而是应该继续读取下一行
				// 可以选择跳过这一行，或者将该行中的数字提取出来（如果允许）
			}
		}

		for (int number : numbers) {
			sum += number;
		}

		cout << "Sum of integers: " << sum << endl;

	} catch (const runtime_error& e) {
		cerr << "Error: " << e.what() << endl;
		return 1; // Indicate error
	} catch (const exception& e) {
		cerr << "An unexpected error occurred: " << e.what() << endl;
		return 1;
	}

	// 确保文件被关闭 (在try块外面)
	if (inputFile.is_open()) {
		inputFile.close();
	}

	return 0;
}
//做错了，ai写的
