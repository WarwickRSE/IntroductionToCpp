#include<iostream>
#include<vector>//Vector has its own header

int main(){
	//Vector is a container that holds data. You tell it what kind of data that it holds in < > after std::vector
  std::vector<int> vec; //This is a vector of integers

	//I'm now going to add the numbers 1 and 14 to the vector
	//"push_back" means "push on at the back of the vector", so
	//it adds at the end of the vector
	vec.push_back(1);
	vec.push_back(14);

	//You can access the elements of a vector by number using [index]
	//The elements start from 0; This access is bidirectional
	//I can print vec[1], but I can also write vec[1]=9 to change the value
	std::cout << "The first element is " << vec[0] << " and it should be 1\n";

  //Some containers have a "push_front" method to add items at the start
  //but vector doesn't. If you want to add an item at the start you have to use
  //"insert". Insert is a bit unhelpful in some senses. On one level it is easy
  //you specify an element and you insert the new element before the specified element.
  //The problem comes because you *don't* specify the element to insert before by index.
	//Instead you use an iterator. We're going to see iterators again a bit later
	//but here you just need to know about the "begin" iterator
	//The begin iterator represents the first element in a vector. You can get the first element
	//with vec.begin(), the second element with vec.begin()+1, the third with vec.begin()+2 etc. etc.
  vec.insert(vec.begin(),7);
  //After this you have [7,1,14] in the vector
	

	//A common thing to do is to loop over the elements of the vector
	//There are three ways and here are all three. We only recommend the first two
	//although the last one is used in some circumstances
	
	//Simplest solution - simple loop
	std::cout << "Loop by index\n";
	//You can get the size of a vector using vector.size()
	for (int i=0;i<vec.size();++i){
		std::cout << vec[i] << " ";
	}
	std::cout << "\n\n";

	//Automatic loop over container
	//This is equivalent to for element in container: in Python
	//You specify a variable (here called "value") that gets each variable
	std::cout << "Loop over container elements\n";
	//This shows a feature of C++ called "auto" typing
	//If the compiler can infer the type of a variable when something is assigned to it
	//then you can use "auto" instead of putting the type of the variable
	//Here I am using auto&. That is used like the reference variables passed to the function earlier
	//This means that "value" is not a copy of the value in the vector, but a reference to it, so by changing
	//value you change the value in the vector
	for (auto &value:vec){
		std::cout << value << " ";
	}
	std::cout << "\n\n";
	
	//If instead (or by accident) I miss out the &, I get copies of the items
	// Modifying these copies wont affect the original!
	// Beware of this as its a common source of hard-to-track-down bugs
	for (auto value:vec){
		++value;
	}
	std::cout<<"After trying to add one to each element, but making a common mistake: \n";
	for (auto value:vec){
		std::cout << value << " ";
	}
	std::cout << "\n\n";

	//Iterate using iterators
	//This is a heavyweight way of iterating over items, and it doesn't have many advantages
	//but you might see it so we list it here. It works by creating an "iterator" object which
	//can be moved through the list and access the element that it is current pointing to
	//You get an iterator pointing to the start of the vector using the "begin" method
	//The "end" method doesn't return you an iterator pointing to the last element of the vector
	// but a special element that indicates that you have passed the end of the array.
	// There are different types of iterator, but pretty much all of them can be moved to the next
	// item with ++ or moved to the previous element with --
  // Note: it is best to check the end condition with "!=" as we do here and not use < as not all
  // iterators support this
	std::cout << "Loop using iterators\n";
	for (auto it=vec.begin();it!=vec.end();++it){
		std::cout << *it << " "; //You access the element that an iterator is pointing to by putting an * before the name of it
		//You can access the result of the "begin" iterator, but not the "end" iterator (see above for why)
	}

	std::cout << "\n";
	
}
