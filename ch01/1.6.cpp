#include <iostream>
#include <vector>

int main()
{
    int val;
    std::vector<int> vect;
    int sum = 0;
    double avg = 0;
    while (std::cin >> val)
    {
        vect.push_back(val);
    }
    for (int i = 0; i < vect.size(); i++)
    {
        sum += vect[i];
    }
    avg = (double)sum / vect.size();
    std::cout << "sum=" << sum << " avg=" << avg << std::endl;
    return 0;
}
