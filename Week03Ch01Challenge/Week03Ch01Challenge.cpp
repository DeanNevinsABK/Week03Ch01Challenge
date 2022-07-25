#include <iostream>

using namespace std;

int main()
{
    int a{};
    int b{};
    int* ptrA{ nullptr };
    int* ptrB{ nullptr };

    cout << "Please enter two integer values" << endl;
    cin >> a >> b;
    
    ptrA = new int{ a };
    ptrB = new int{ b };

    cout << "The value that is being pointed at by ptrA is " << *ptrA << endl;
    cout << "The value that is being pointed at by ptrB is " << *ptrB << endl;

    delete ptrA;
    ptrA = nullptr;

    delete ptrB;
    ptrB = nullptr;
}

