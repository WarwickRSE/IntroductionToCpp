#include <iostream>


// If demo function _should_ be able to take a literal as an argument then
// it cannot do anything which changes it, so we can mark it as const
// This is a reference, but one which we are not allowed to use to modify the value it refers to
int demo_function(const int &i){

  // Attempting to do anything that modifies i here will now be a compile error. E.g.
  // i++;
  std::cout<<"Address of passed value is:  "<<&i<<"\n";
  // Note that & is used for the reference modifier and is also the address-of operator
  // which tells us the memory location of the data
  // In modern C++ you should probably never be using the latter, but here we want
  // to illustrate that i is the same data as value
  // By the way, this is a STRANGE thing to do to a literal so don't read too much into
  // what happens in the second call

  return i+1;
}

int main(){
	int value = 10;

    std::cout<<"Address of defined value is: "<< & value<<"\n";

    std::cout << demo_function(value) << "\n";

    std::cout << demo_function(4) << "\n";
	std::cout << "After calling demo_function, value is " << value << "\n";


}
