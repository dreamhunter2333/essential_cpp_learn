#include <iostream>

int main()
{
    std::string first_name;
    std::string last_name;
    std::cout << "Please enter your first and last name: " << std::endl;
    std::cin >> first_name >> last_name;
    std::cout << "\n"
              << "Hello, "
              << first_name
              << " "
              << last_name
              << " ... and goodbye!\n";
    return 0;
}
