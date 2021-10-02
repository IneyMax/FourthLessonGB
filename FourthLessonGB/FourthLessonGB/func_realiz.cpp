#include <iostream>

//ДЗ 4 п.1:
void first_number_check()
{
    int x {};
    int y {};
    std::cin >> x >> y;
    if (x+y <= 20 && x+y >= 10)
    {
        std::cout << "True\n";
    }
    else
        std::cout << "Falls\n";
}

//ДЗ 4 п.2:
void second_number_check()
{
    const int x {10};
    const int y {9};
    if ((x + y == 10) | ((x == 10) && (y == 10)) )
    {
        std::cout << "True\n";
    }
    else std::cout << "Falls\n";
}

//ДЗ 4 п.3:
void numbers_row()
{
    int index {1};
    while (index < 50)
    {
        std::cout << index << " ";
        index += 2;
    }
}

//ДЗ 4 п.4:
void check_simple_number()
{
    int number {};
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << "Not simple";
    }
    else
    {
        const int limit = static_cast<int>(sqrt(number));
        int index {3};
        int check {0};
        while (index <= limit)
        {
            if (number % index == 0)
            {
                check ++;
                break;
            }
            index += 2;
        }
        if (check != 0)
        {
            std::cout << "Not simple!";
        }
        else
            std::cout << "It's simple!";
    }   
    
}

//ДЗ 4 п.5:
void check_viscous ()
{
    int x {};
    std::cin >> x;
    if (((x % 4 == 0) && (x % 100 != 0)) | (x % 400 == 0))
    {
        std::cout << "Yes" ;
    }
    else
        std::cout << "No";
}

