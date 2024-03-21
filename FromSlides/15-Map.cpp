#include <iostream>
#include <map> //This is the header file for the map container
#include <string> //This is the header file for the strings again

int main(){

	//std::map is a container like std::vector, but rather a series of numbered slots
	//it is a sparse mapping between a key and a value.
	//When you specify a map, you specify two type parameters in <> which is the 
	//type of the key first and then the type of the value that they key maps to
	//std::string is a class representing a string. It is the easiest way of using strings in C++
	std::map<int,std::string> mymap;//This creates a map from an integer key to a string value

	//You select elements in a map with [key] and you can assign values to the map by assignment
	mymap[0]="Hello world";//This creates a map from 0 -> "Hello world"
	mymap[7]="Hello there"; //And this creates a map from 7 -> "Hello world'
	//Note that unlike a vector creating values 0 and 7 does not require the existence of 
	//the 1 to 6 elements. Maps are a *sparse* mapping and only keys that you use exists
	
	std::cout << "Printing map element 7 - should be ""Hello there""\n";
	std::cout << mymap[7] << "\n";
	
	//You will immediately see a problem. I hadn't created elements 0 and 7 anywhere, so what
	//happens if I try and print an element that doesn't exist?
	std::cout << "Printing map element 5 which doesn't exist. Should be a blank line\n";
	std::cout << mymap[5] << "\n";
	
	//When you access an element that hasn't previously been used it is created with a
	//default value (which varies depending on the type of the value)
	//If you want to find out if a key is in the map you have to use "find"
	//"find" is easy to use but it doesn't return an item it returns an interator
	//so you check whether it found the element by comparing that iterator to the special
	//iterator returned by the "end" method, just like you saw in the iterator
	//loop over the vector. If the result of "find" is that special "end" iterator then
	//the key that you searched for isn't in the map. If it isn't that special iterator
	//then it is in the map and the iterator can be accessed with * to get the
	//value associated with that key

	std::cout << "Does element 6 exist in the map (should be 0) " << (mymap.find(6)!=mymap.end()) << "\n";
	std::cout << "Does element 7 exist in the map (should be 1) " << (mymap.find(7)!=mymap.end()) << "\n";
	std::cout << "Does element 5 exist in the map (should be 1) " << (mymap.find(5)!=mymap.end()) << "\n";

	//Note that we accidentally created element 5 when we printed it! It is in the map now.
	//You have to be careful!
	
	//Unlike vector where the key is always a number you can have almost any type as the key for a map
	//(Strictly the requirement is that there are < and > operators for the key)
	std::map<std::string,int> agemap;//This map maps from a string to an integer
	agemap["James"]=28;
	agemap["Jane"]=32;
	std::cout << "Jane is " << agemap["Jane"] << " years old\n\n";

	//You can iterate over maps, but you don't just get the keys or just the value
	//You get something called std::pair<type1,type2> which is the key and the value stuck together
	//type1 is the key type and type2 is the value type
	//You can access the key using the "first" member of the std::pair and the value using the
	//"second" member
	
	std::cout << "Iterating over map\n";
	for (auto &a:agemap){
		std::cout << a.first << " is " << a.second << " years old\n";
	}
}
