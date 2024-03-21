#include <iostream>

int main(){
	
	int candidate=1;
	int test=4;

	//You can have multiple lines in an if statement if you enclose the lines within { and }
	//You can then also have an "else" statement that triggers if your test is false
	//None of the details of how the lines are split up or putting { on the end of a line etc
	//are important at all
	if (test>candidate) {
		std::cout << "Test is greater than candidate\n";
	} else {
		std::cout << "Test is less than or equal to candidate\n";
	}



	// Here is a different looking but equivalent if statement
	if (test>candidate)
		{
			 std::cout << "Test is greater than candidate\n";
		}
	else
		{
			std::cout << "Test is less than or equal to candidate\n";
		}
}
