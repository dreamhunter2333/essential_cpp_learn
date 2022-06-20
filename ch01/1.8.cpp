#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    int tries_cnt;
    cout << "Please enter tries count:";
    cin >> tries_cnt;
    switch (tries_cnt)
    {
    case 1:
        std::cout << "Oops, Nice guess but not quite it." << endl;
        break;
    case 2:
        std::cout << "Sorry, Wrong a second time!" << endl;
        break;
    case 3:
        std::cout << "Ah, this is harder than it looks, isn't it?" << endl;
        break;
    default:
        std::cout << "It must be getting pretty frustrating by now!!!" << endl;
        break;
    }
    return 0;
}
