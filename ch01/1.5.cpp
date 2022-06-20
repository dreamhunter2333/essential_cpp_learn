#include <iostream>

int main()
{
    std::string user_name;
    std::cout << "Please enter your name: ";
    std::cin >> user_name;
    if (user_name.size() > 2)
    {
        std::cout << "\n"
                  << "Hello, "
                  << user_name
                  << "!\n";
    }
    char user_name1[]{};
    std::cout << "Please enter your name: ";
    std::cin >> user_name1;
    int len = 0;
    while (user_name1[len] != '\0')
    {
        ++len;
    }
    if (len > 2)
    {
        std::cout << "\n"
                  << "Hello, "
                  << user_name1
                  << "!\n";
    }
    return 0;
}
