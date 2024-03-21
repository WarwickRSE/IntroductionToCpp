#include <iostream>

//This is a function. It is called demo_function, takes a single integer as a parameter 
// (the type in the brackets) and returns an integer. The body of the function
// says that it returns the values passed to it +1;
// It is worth pointing out that i in the function is a COPY of the value that
// you passed to the function
int demo_function(int i){
  return i+1;
}

//This function shows a different way of writing a function
//This function takes two parameters and returns their sum
int add_function(int i1, int i2){return i1+i2;}

int main(){
  std::cout << demo_function(4) << "\n";
	std::cout << demo_function(7) << "\n";
	std::cout << add_function(1,2) << "\n";
	//You can use the result of one function as a parameter to another function
	//MOSTLY. There are rules for when it won't work
	std::cout << add_function(demo_function(3), demo_function(4)) << "\n";
}
