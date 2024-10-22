#include <iostream>

double getValue()
{

    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}


double multiply(double x, double y)
{
    return x * y;
}


double divide(double x, double y)
{
    return x / y;
}

void printResult(double x, double y, double result, char symbol) 
{
    std::cout << x << " " << symbol << " " << y << " is " << result << "." << '\n';
}


int main()
{
    double x{ getValue() };
    double y{ getValue() };
    char symbol{};
    std::cout << "Enter + , -, *, or /: ";
    std::cin >> symbol;
    double result{};
    if (symbol == '+') 
        result = add(x, y);
    else if (symbol == '-')
        result = subtract(x, y);
    else if (symbol == '*') 
        result = multiply(x, y);
    else if (symbol == '/') 
        result = divide(x, y);
    else 
        std::cout << "Incorrect input, try again" << '\n';
    printResult(x, y, result, symbol);
    

    return 0;
}