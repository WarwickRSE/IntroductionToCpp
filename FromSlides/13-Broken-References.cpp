#include <iostream>

//THIS CODE WILL NOT COMPILE SUCCESFULLY

int demo_function(int &i){
	i=i+1;
  return i;
}

int main(){
	//Here we are trying to call demo_function with just the value 4 like we did before
	//This won't work, because what happens when I change the value of the I parameter?
	//I would effectively be writing 4=4+1 which is nonsense!
	//(Note that it doesn't matter what code is in the function body - the fact that I could
	// do something invalid is enough to prevent the compiler from accepting it)
	//This would also prevent me from calling demo_function directly with the result from
	//another function, for the same reason
  std::cout << demo_function(4) << "\n";
	std::cout << "After calling demo_function, value is " << value << "\n";
}
