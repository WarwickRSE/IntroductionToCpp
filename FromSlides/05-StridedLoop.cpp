#include <iostream>

int main(){
	//In many languages more complex loop strides (like updating the loop variable by 2 each iteration)
	//is a special language construct, but in C++ you just modify the third section 
	for (int i=0;i<10;i+=2){ //i+=2 is the same as i=i+2 (you could use i=i+2, but it is less common)
		std::cout << "Hello from loop iteration " << i << "\n";
	}
}
