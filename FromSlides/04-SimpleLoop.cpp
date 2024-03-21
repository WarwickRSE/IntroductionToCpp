#include <iostream>

int main(){
	//This is a simple example of a loop
	
	//Loops in C++ have one basic form
	//for (section1;section2;section3)
	//section 1 is run once before the first iteration of the loop
	//While C++ loops are very flexible mostly one just sets up and increments a loop variable
	//The first section then sets up the initial state of the loop variable
	//it is possible to also specify the type for the loop variable in this section
	//and this is common because you only rarely want the loop variable outside of the loop
	//The second section is tested at the start of every loop. If it evaluates to true then
	//the loop executes, if it evaluates to false then the loop terminates
	//The expression here should be read as "i is less than 10"
	//The third section is executed at the end of each loop iteration and says how to update the loop variable
	//here, just incrementing it by 1 (i++ means i=i+1)
	for (int i=0;i<10;i++){
		//cout can be chained between variables of different types as shown here
		std::cout << "Hello from loop iteration " << i << "\n";
	}
}
