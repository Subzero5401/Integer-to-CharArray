#include "NumberToCharArray.h"


char* Parseinteger(long long int Value) {

	std::stack<char> ParseInteger; // stack for pushing all parsed character onto.
	ParseInteger.push('\0'); // Adding Null terminator

	
	long long int Temp = Value;
	while (Temp / 1 != 0) {   // Loop for searching through integer. 
		ParseInteger.push((Temp % 10) + '0');
		Temp = Temp / 10;

		std::cout << ParseInteger.top() << std::endl;






	}
	
	int total = ParseInteger.size();
	char* CharArray = new char[total];

	for (int Cursor = 0; Cursor < total; Cursor++) { // Popping off stack to put values into char array.


		CharArray[Cursor] = ParseInteger.top();
		ParseInteger.pop();






	}

	for (int Pos = 0; Pos < total; Pos++) { // Sanity check can be commented out 


		std::cout << CharArray[Pos] << std::endl;


	}


	return CharArray;
}




char* ParseDouble() {
	char Nothing[1] = { '\0' };
	char* CharDumb = Nothing;

	return CharDumb;




}













void SafeDelete(char* Pointer) {



	if (Pointer) {

		delete[] Pointer;
		Pointer = nullptr;




	}













}