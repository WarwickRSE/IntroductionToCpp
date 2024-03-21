#include <iostream>

int main(){
	
	int candidate=1;
	int test=4;

	//You can put another condition on the else 
	if (test>candidate) {
		std::cout << "Test is greater than candidate\n";
	} else if (test<candidate){
		std::cout << "Test is less than candidate\n";
	} else {
		std::cout << "Test is equal to candidate\n";
	}

}
