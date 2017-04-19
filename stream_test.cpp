#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
(void) argc;
(void) argv;
std::ifstream file("stream_test.cpp");

while(file.good())
{
std::string l;
std::getline(file, l);
std::cout << l << std::endl;
}
return 0;
}
