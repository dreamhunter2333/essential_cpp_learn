#include <iostream>
#include <vector>
using namespace std;

int max_func(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

double max_func(double num1, double num2)
{
    return num1 > num2 ? num1 : num2;
}

string max_func(string str1, string str2)
{
    return str1 > str2 ? str1 : str2;
}

int max_func(vector<int> &vect)
{
    int max = vect[0];
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    return max;
}

double max_func(vector<double> &vect)
{
    double max = vect[0];
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    return max;
}

string max_func(vector<string> &vect)
{
    string max = vect[0];
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    return max;
}

int max_func(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

double max_func(double *arr, int size)
{
    double max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

string max_func(string *arr, int size)
{
    string max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    cout << max_func(1, 2) << endl;
    cout << max_func(1.1, 2.2) << endl;
    cout << max_func("aaa", "bbb") << endl;

    int arr1[] = {1, 2, 3};
    double arr2[] = {1.1, 2.2, 3.3};
    string arr3[] = {"aaa", "bbb", "ccc"};
    vector<int> vect1(arr1, arr1 + 3);
    vector<double> vect2(arr2, arr2 + 3);
    vector<string> vect3(arr3, arr3 + 3);

    cout << max_func(vect1) << endl;
    cout << max_func(vect2) << endl;
    cout << max_func(vect3) << endl;

    cout << max_func(arr1, 3) << endl;
    cout << max_func(arr2, 3) << endl;
    cout << max_func(arr3, 3) << endl;
}
