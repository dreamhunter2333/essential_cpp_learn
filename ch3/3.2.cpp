#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Lessthan
{
public:
    bool operator()(const string &s1, const string &s2)
    {
        return s1.size() < s2.size();
    }
};

int main()
{
    ifstream infile("3.1.txt");
    if (!infile)
    {
        cout << "open file failed" << endl;
        return -1;
    }
    string word;
    vector<string> words;
    while (infile >> word)
    {
        words.push_back(word);
    }
    sort(words.begin(), words.end(), Lessthan());
    for (auto &&w : words)
    {
        cout << w << "\n";
    }
    cout << endl;

    return 0;
}
