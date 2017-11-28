#include <iostream> 

int main()
{
    int x = 10; 
    int &y = x;
    std::cout << "y  , x  : " << y << " " << x << "\n";
    x = 10;
    std::cout << "y++, x  : " << y++ << " " << x << "\n";
    x = 10;
    std::cout << "y  , x++: " << y << " " << x++ << "\n";
    x = 10;
    std::cout << "++y, x  : " << ++y << " " << x << "\n";
    x = 10;
    std::cout << "y  , ++x: " << y << " " << ++x << "\n";
    x = 10;
    std::cout << "y++, x++: " << y++ << " " << x++ << "\n";
    x = 10;
    std::cout << "y++, ++x: " << y++ << " " << ++x << "\n";
    x = 10;
    std::cout << "++y, x++: " << ++y << " " << x++ << "\n";
    x = 10;
    std::cout << "++y, ++x: " << ++y << " " << ++x << "\n";
    return 0;
}