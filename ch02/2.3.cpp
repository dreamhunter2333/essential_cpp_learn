#include "2.3.h"
using namespace std;

bool pentagnoal(vector<int> *vect, int size);
void display(vector<int> vect);

int main()
{
    int size;
    vector<int> vect;
    bool flag = true;
    cout << "Please enter a pos: ";
    cin >> size;
    if (pentagnoal_check(size))
    {
        pentagnoal(&vect, size);
        display(vect);
    }
    else
        cout << "Sorry, could not calculate size # " << size << endl;
    return 0;
}

bool pentagnoal(vector<int> *vect, int size)
{
    for (int index = 1; index <= size; index++)
    {
        (*vect).push_back((index * (3 * index - 1)) / 2);
    }
    return true;
}
void display(vector<int> vect)
{
    for (int index = 0; index < vect.size(); index++)
    {
        cout << vect[index] << " ";
    }
    cout << endl;
}
