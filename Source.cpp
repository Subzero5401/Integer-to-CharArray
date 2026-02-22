#include "NumberToCharArray.h"





int main() {
	char* IntegerParsed;
	IntegerParsed = Parseinteger(12345678906464);
	std::cout << IntegerParsed;
	SafeDelete(IntegerParsed); // Safely deletes the allocated memory from called function. 
}
