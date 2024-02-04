#include <iostream>
#include <format>
#include <utility>

template <typename T1, typename T2>
class MyPair {
public:
    MyPair(T1 t1, T2 t2) : pair_(std::make_pair(t1, t2)) {}

    void Print() const {
        std::cout << std::format("First: {}", pair_.first) << std::endl;
        std::cout << std::format("Second: {}", pair_.second) << std::endl;
    }

private:
    std::pair<T1, T2> pair_;
};

int main() {
    MyPair<int, std::string> my_pair(42, "Hello, world!");
    my_pair.Print();
    return 0;
}
