#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack
{
private:
    vector<string> _stack;

public:
    bool push(const string &elem);
    bool pop(string &elem);
    bool peek(string &elem);
    bool find(const string &elem) const;
    int count(const string &elem) const;
    bool empty() { return _stack.empty(); }
    bool full() { return 10 == _stack.size(); }
    int size() { return _stack.size(); }
};
