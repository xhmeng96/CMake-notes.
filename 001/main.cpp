#include <iostream>
#include "foo.h"
#include "blah.h"
#include <SFML/System.hpp>
#include <boost/array.hpp>

int main()
{
    std::cout << "The program starts.\n";
    foo().f();
    blah().g();
    sf::Int32 x;
    boost::array<int, 4> arr{};
    return 0;
}