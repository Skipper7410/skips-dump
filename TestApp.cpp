#include <iostream>
#include <string>

int main()
{
    std::string str_message = "Hello, World!";

    for (size_t i = 0; i < str_message.length(); ++i) std::cout << "-";
    std::cout << std::endl;
    std::cout << str_message << std::endl;
    for (size_t i = 0; i < str_message.length(); ++i) std::cout << "-";

    std::cout << std::endl;
    std::cout << std::endl;
}
