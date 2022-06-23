#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

class even_elem
{
public:
    bool operator()(int elem)
    {
        return elem % 2 ? false : true;
    }
};

int main()
{
    vector<int> input;
    istream_iterator<int> in(cin), eos;
    ofstream even_file("3.4.even.out"), odd_file("3.4.odd.out");
    if (!even_file || !odd_file)
    {
        cout << "open file failed" << endl;
        return -1;
    }

    copy(in, eos, back_inserter(input));

    ostream_iterator<int> even_iter(even_file, "\n"), odd_iter(odd_file, " ");
    vector<int>::iterator div = partition(input.begin(), input.end(), even_elem());

    copy(input.begin(), div, even_iter);
    copy(div, input.end(), odd_iter);
}
