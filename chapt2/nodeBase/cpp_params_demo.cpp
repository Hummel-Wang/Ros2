#include "iostream"

int main(int argc, char **argv)
{
    std::cout << "params number is " << argc << std::endl;
    std::cout << "program name is " << argv[0] << std::endl;

    if (argc >= 2)
    {
        for (int i = 1; i < argc; ++i) {
            std::cout << "Argument " << i << ": " << argv[i] << std::endl;
        }
        std::string argv1 = argv[1];
        if (argv1 == "--help")
        {
            std::cout << "The first params is " << argv1 << std::endl;
        }
    }

    return 0;
}