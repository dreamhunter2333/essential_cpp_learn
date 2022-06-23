#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T max_func(T num1, T num2)
{
    return num1 > num2 ? num1 : num2;
}

template <typename T>
T max_func(vector<T> &vect)
{
    T max = vect[0];
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    return max;
}

template <typename T>
T max_func(T *arr, int size)
{
    T max = arr[0];
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
