#include <map>
#include <set>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("3.1.txt");
    if (!infile)
    {
        cout << "open file failed" << endl;
        return -1;
    }
    set<string> exculde_set;
    map<string, int> word_count;
    static string exculde_words[2] = {"a", "an"};
    exculde_set.insert(exculde_words, exculde_words + 2);

    string word;

    while (infile >> word)
    {
        if (exculde_set.count(word))
            continue;
        word_count[word]++;
    }

    map<string, int>::iterator iter = word_count.begin(), end_iter = word_count.end();

    while (iter != end_iter)
    {
        cout << iter->first << ": " << iter->second << "\n";
        iter++;
    }
    cout << endl;
    return 0;
}
