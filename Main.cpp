#include <iostream>

int main()
{
    // Variables to store user input
    int a, b, c;

    // Get user input
    std::cout << "Enter three integer values: ";
    std::cin >> a >> b >> c;

    // Create integer pointers and allocate dynamic memory
    int *ptrA = new int;
    int *ptrB = new int;
    int *ptrC = new int;

    // Store user input values in dynamic memory
    *ptrA = a;
    *ptrB = b;
    *ptrC = c;

    // Display variable values and pointer contents
    std::cout << "Variable Values:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "Pointer Contents:" << std::endl;
    std::cout << "ptrA: " << *ptrA << std::endl;
    std::cout << "ptrB: " << *ptrB << std::endl;
    std::cout << "ptrC: " << *ptrC << std::endl;

    // Deallocate dynamic memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
