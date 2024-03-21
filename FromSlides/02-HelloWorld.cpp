//C++ requires that you include "header" files to use certain features
//Printing requires the iostream header
#include <iostream>

//Note that all code lines in C++ that do not start a block (i.e. open {) end
//with a ;. If there is no ; then the line has not ended even if it is on two lines
//in your editor

int main(){
	//std::cout is the main printing function in C++. You say what to print using 
	//the << (insertion) operator. You can chain multiple insertion operators on a single lines
  std::cout << "Hello world\n";
  //The \n at the end of the line puts in a newline character
  //By default C++ doesn't go to the next line after a call to cout so you have to put one
	//if you want one. \n is the easiest way of doing that
	std::cout << "Hello " << "again " 
		<< " world\n";
	//As a technical note, std is not part of the name of the printing function, it is a
	//*namespace*, here the namespace of all standard (built in) functions, so you are running
	//the function "cout" from the namespace "std". We don't cover it, but you can create
	//your own namespaces to ensure that you never have to worry about creating two functions
	//with the same name in large codebases
}
