#include <iostream>
#include <set>
#include <list>
#include <vector>

template<class T>
void print_container(const T& t) {
    auto iter = t.begin();
    while (iter != t.end()) {
        std::cout << " " << * iter;
        iter++;
    }
    std::cout << std::endl;
}

template<class T>
void print_container2(const T& t) {
    for (const auto& elem : t) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    std::cout << "test_set: " << std::endl;
    print_container(test_set); // four one three two. помните почему такой порядок? :) - потому что происходит автоматическая сортировка.
    print_container2(test_set);

    std::cout << std::endl;

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::cout << "test_list: " << std::endl;
    print_container(test_list); // one, two, three, four
    print_container2(test_list);

    std::cout << std::endl;

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    std::cout << "test_vector: " << std::endl;
    print_container(test_vector); // one, two, three, four
    print_container2(test_vector);
}