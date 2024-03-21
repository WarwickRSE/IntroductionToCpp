#include <iostream>
//Another include, this time for the header for modern strings
//There are older strings inherited from C but these are much easier to use
#include <string>

int main(){

	//C++ is strongly typed so all variables MUST have a type before they can be used
	int i; //Creates an integer variable called i - doesn't have any particular value since I haven't given it one
	int j,k; //Creates two integer variables, j and k, also no particular values
	float x = 1.0; //Creates a 32 bit floating point variable x and gives it the value 1.0
	double y = 1.234; //Creates a 64 bit floating point variable y and gives it the value 1.234
	std::string s = "Hello world!"; //Creates a string variable called s and gives it the value "Hello world"
	std::string other_s;// Creates a string variable called "other_s". This DOES have a defined value of an empty string

}
