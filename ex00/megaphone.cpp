#include <string>
#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    for (int y = 1; y < argc; y++)
	{
        size_t length = std::strlen(argv[y]);
        for (size_t i = 0; i < length; ++i)
                std::cout << (char)std::toupper(argv[y][i]);
        std::cout << " ";
    }

    std::cout << std::endl;
    return 0;
}
