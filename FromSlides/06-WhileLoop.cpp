#include <iostream>

int main(){

  int i=0;
	//You can use a while loop to repeat code until a condition is met
	//the condition is tested before starting each iteration of the loop 
	std::cout << "While loop\n";
	while (i<10){
		std::cout << "I is currently " << i << "\n";
		i++;
	}

	//As an alternative you can use do while
	//and then the condition is tested at then end of the iteration
	//rather than the start. Mostly this makes no difference, but this
	//loop is guaranteed to happen at least once even if the condition is already met
	std::cout << "Do while loop\n";
	do{
    std::cout << "I is currently " << i << "\n";
    i++;
	} while(i<10);


  //You can also use a for loop by changing the three sections
	i=0;
	std::cout << "For loop\n";
	for (;i<10;){
		std::cout << "I is currently " << i << "\n";
		i++;
	}


}
