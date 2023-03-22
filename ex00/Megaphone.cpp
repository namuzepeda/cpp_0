#include <cctype>
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
	if(argc != 1)
		for (int i = 1; argc > i; i++) {
			for(int j = 0; strlen(argv[i]) > j; j++) {
				std::cout << (char) toupper(argv[i][j]);
			}
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
