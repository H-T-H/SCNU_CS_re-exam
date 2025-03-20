#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

// 集合类模板
template <typename T>
class Set {
private:
    set<T> elements; // 使用 std::set 存储集合元素

public:
    // 构造函数
    Set() = default;
    Set(initializer_list<T> list) : elements(list) {}

    // 添加元素
    void insert(const T& value) {
        elements.insert(value);
    }

    // 显示集合元素
    void display() const {
        for (const auto& elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // 并集
    Set<T> Union(const Set<T>& other) const {
        Set<T> result;
        set_union(elements.begin(), elements.end(),
                other.elements.begin(), other.elements.end(),
                inserter(result.elements, result.elements.begin()));
        return result;
    }

    // 交集
    Set<T> Intersection(const Set<T>& other) const {
        Set<T> result;
        set_intersection(elements.begin(), elements.end(),
                        other.elements.begin(), other.elements.end(),
                        inserter(result.elements, result.elements.begin()));
        return result;
    }

    // 差集 (this - other)
    Set<T> Difference(const Set<T>& other) const {
        Set<T> result;
        set_difference(elements.begin(), elements.end(),
                    other.elements.begin(), other.elements.end(),
                    inserter(result.elements, result.elements.begin()));
        return result;
    }
};

// 测试
int main() {
    Set<int> A = {1, 2, 3, 4};
    Set<int> B = {3, 4, 5, 6};

    cout << "A: "; A.display();
    cout << "B: "; B.display();

    Set<int> U = A.Union(B);
    cout << "A U B: "; U.display();

    Set<int> I = A.Intersection(B);
    cout << "A ∩ B: "; I.display();

    Set<int> D = A.Difference(B);
    cout << "A - B: "; D.display();

    return 0;
}
