#include <iostream>
#include "LinkedList.hpp"



int main() {
    int* variable =  new int;
    LinkedList<int> list;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;
        if (operation == "F") {
            int x;
            std::cin >> x;
            list.push_front(std::forward<int>(x));
        } else if (operation == "B") {
            int x;
            std::cin >> x;
            list.push_back(std::forward<int>(x));
        } else if (operation == "f") {
            if (list.empty()) {
                std::cout << "EMPTY" << std::endl;
                continue;
            }
            int element = list.pop_front();
            std::cout << element << std::endl;
        } else if (operation == "b") {
            if (list.empty()) {
                std::cout << "EMPTY" << std::endl;
                continue;
            }
            int element = list.pop_back();
            std::cout << element << std::endl;
        } else if (operation == "R") {
            int x;
            int y;
            std::cin >> x;
            std::cin >> y;

            try {
                auto iterator = list.find(std::forward<int>(x));
                *iterator = y;
                std::cout << "TRUE" << std::endl;
            }
            catch (std::exception &e) {
                std::cout << "FALSE" << std::endl;
                continue;
            }

        } else if (operation == "S") {
            std::cout << list.size() << std::endl;
        }
    }

    return 0;
}
