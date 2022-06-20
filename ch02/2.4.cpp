#include <iostream>
#include <vector>
using namespace std;

vector<int> *pentagnoal(int size);
void display(vector<int> *vect);

int main()
{
    int size;
    bool flag = true;
    while (flag)
    {
        cout << "Please enter a size: ";
        cin >> size;
        vector<int> *vect = pentagnoal(size);
        if (vect)
            display(vect);
        else
            cout << "Sorry, could not calculate size # " << size << endl;
        cout << "Please enter N to exit: ";
        string input;
        cin >> input;
        flag = (input != "N" && input != "n");
    }
    return 0;
}

vector<int> *pentagnoal(int size)
{
    static vector<int> vect;

    if (size <= 0 || size > 1024)
    {
        return 0;
    }
    for (int index = vect.size() - 1; index <= size; index++)
    {
        vect.push_back((index * (3 * index - 1)) / 2);
    }
    return &vect;
}

void display(vector<int> *vect)
{
    for (int index = 0; index < (*vect).size(); index++)
    {
        cout << (*vect)[index] << " ";
    }
    cout << endl;
}
