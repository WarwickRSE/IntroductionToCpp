#include <iostream>
#include <string>

//This is a *struct*. It combines several datatypes together so that they are
//carried around with each other. The use of this is obvious because data
//quite often has several linked pieces of primitive data. For example
//a physical object might have three numbers for its position in 3D space
//and another 3 numbers for its velocity (further extensions such as mass,
//colour, price can easily be thought of)
//
//This piece of code declares a struct. It says what data goes into it. It does
//*not* create an actual variable of the type. Note the ; at the end of the
//declaration. That is not optional and the code will not compile if you
//forget it
struct mystruct{
    int i1;
	std::string s1;
	int i2;
};

// If you know C, you may assume this is the same thing as a C type struct. 
// It is not, although it can be used in the same way as one
// C++ structs are actually classes, so can have member functions, but by default
// data in a struct is accessible from the outside (public). Classes default to private data
// members - only usable inside the class
// The syntax is also simpler


int main(){
	mystruct s; //This line creates an instance of mystruct called s

	//You mostly access the elements of a struct using a . (usually called dot).
	//You do the name of the instance of the variable, then a dot, then the name
	//of the data item from the declaration of the struct
	//The name of the data items are the same for all instances of a struct
	//but the values are linked to a specific instance
	//You will sometimes see elements of a struct accessed as s->i1 (for example)
	//this means that s is not an instance of a struct but a pointer to a struct
	//Pointers are like references but are generally avoided in C++. We aren't going
	//to talk about them, but the -> (arrow) notation is so common that it is worth
	//mentioning so that you know that it is not something particularly interesting.
	//(If you have a reference to a struct then you can use the dot just as if you had
	//an instance)
	s.i1=39;
	s.s1 = "Hello world!";
	s.i2 = 4;

	std::cout << s.s1 << " I have an integer i1 = " << s1.i1 
		<< " and another integer i2 =" << s2.i2 << "\n";
}
