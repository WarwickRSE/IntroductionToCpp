#include <vector>
#include <algorithm> //There are some common algorithms for working on containers here
#include <iostream>

int main(){

	std::vector<int> v;
	v.push_back(1);v.push_back(17);v.push_back(4);v.push_back(-4);v.push_back(1034);
	std::cout << "Before sort : ";
	for (auto val:v) std::cout << val << " ";
	std::cout << "\n";

	//For example this performs a sort on the data in a vector
	//It doesn't guarantee any particular algorithm but requires average and worst
	//case complexities of Nln(N) and N^2 so is comparable to quicksort or mergesort
	// We pass sort the iterators to the start and end of the data we want to sort
	// Usually these are begin and end, but they don't have to be
	std::sort(v.begin(),v.end());
  std::cout << "After sort : ";
  for (auto val:v) std::cout << val << " ";
  std::cout << "\n";

}
