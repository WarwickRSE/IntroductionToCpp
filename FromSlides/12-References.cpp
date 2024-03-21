#include <iostream>

//This is a function. It is called demo_function, takes a single integer as a parameter 
// (the type in the brackets) and returns an integer. The body of the function
// says that it returns the values passed to it +1;
// The addition of the & character before the name of the variable means that it is now passed by reference
// so rather than being a copy of the value that is passed when you call the function it is the same
// value
int demo_function(int &i){
	i=i+1; //Adding one here will change the value of "value" in "main"- this is called a "side effect"
  return i; //Note that we just return i because we have already added one
}

int main(){
	int value=4;
  std::cout << demo_function(value) << "\n";
	std::cout << "After calling demo_function, value is " << value << "\n";
}
