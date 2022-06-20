#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile("string.txt");
    ofstream outfile("string_out.txt");
    if (!infile || !outfile)
    {
        cerr << "Unable to open file" << endl;
        return -1;
    }
    string word;
    vector<string> vect;
    while (infile >> word)
    {
        vect.push_back(word);
    }
    cout << "Unsorted text: " << endl;
    for (int index = 0; index < vect.size(); index++)
        cout << vect[index] << endl;
    sort(vect.begin(), vect.end());
    cout << "\nsorted text: " << endl;
    for (int index = 0; index < vect.size(); index++)
        cout << vect[index] << endl;
    return 0;
}
