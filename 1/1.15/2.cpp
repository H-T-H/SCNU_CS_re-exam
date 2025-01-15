/*
2. 数组排序（难度：中）
编写一个函数 sortArray，接受一个整数数组和数组长度作为输入，对数组进行升序排序，并返回排序后的数组。 (可以使用任何排序算法，例如冒泡排序、选择排序、插入排序等)
*/
#include <iostream>
#include <algorithm> // 可选择使用 std::sort

void sortArray(int arr[], int size) {
    // 在这里实现你的代码
    //冒泡
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}