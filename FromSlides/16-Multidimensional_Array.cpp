#include <iostream>
#include <array>
#include <vector>
//#include <boost/multi_array.hpp> //Uncomment the start of this line to use Boost multiarray

int main(){
	//Modern C++ does not have any new mechanisms for multi dimensional arrays
	//So you have to use either a library or some kind of workaround
	//In all of these cases setting and reading elements of the arrays are inverses of each other
	//None of them have whole array functions like Numpy/Matlab/Fortran do

	//The first way is to use C style stack arrays, but this style has two major drawbacks
	// 1) You have to specify the size of the array at compile time - you can't switch that 20 for a variable
	// 2) Because of how this array is allocated you will be unable to make larger ones before you run out of total memory
	// (look up stack array for more details)
	// A more minor problem is that this is seen as "old fashioned" and isn't really in a C++ style
	//This defines an integer array of 20x20. You can create higher ranks with more square brackets
	int arr_C[20][20];
	//You can then access elements using square brackets again
	for(int i = 0; i < 20; ++i) {
		for(int j = 0; j < 20; ++j) {
			//You access the elements using nested [] operators
			arr_C[i][j] = i * j;
		}
	}

//There is a C++ style version of the C array - std::array, but it is 1 dimensional
//You can create an array of arrays and that will produce essentially the same result
//as the C style array above. Unfortunately, it has all of the same problems as the C style arrays
//and (I think) has an uglier syntax
	std::array<std::array<int,20>,20> arr_CPP;
  //You can then access elements using square brackets again
  for(int i = 0; i < 20; ++i) {
    for(int j = 0; j < 20; ++j) {
      //You access the elements using nested [] operators
      arr_CPP[i][j] = i * j;
    }
  }


	//This uses a vector of vectors to give you a multidimensional array
	//On the internet many people will recommend this solution, but it is
	//not a good solution really
	//On the plus side
	//1) You can finally have an array of a size selected at runtime
	//2) You can still access elements easily by using two sets of square brackets
	//3) If you want to then you can use this construct to have arrays where all of the columns are
	//of different length
	//On the minus side
	//1) This is not an array! The defining feature of an array is that all of the elements are
	//stored one after the other in memory. Because vectors can be resized, they cannot store their data
	//inside themselves so an array of arrays does not put the data contiguously like that
	//2) There is a performance penalty. This is actually related to the non-contiguity of the data
	//Depending on what you do the performance cost can be substantial
  std::vector<std::vector<int> > arr_vector;
	arr_vector.resize(20); //Resize adds items to the vector without you having to push them into it
	//Resizing the outer vector gives you the inner vectors, but you have to size them as well
	for (auto &sub:arr_vector) sub.resize(20);
  //You can then access elements using square brackets again
  for(int i = 0; i < 20; ++i) {
    for(int j = 0; j < 20; ++j) {
      //You access the elements using nested [] operators
      arr_vector[i][j] = i * j;
    }
  }

	std::vector<int> arr_1dvector;
	arr_1dvector.resize(20*20);//Now we allocate a 1D vector with as many elements as a 20x20 array	
  for(int i = 0; i < 20; ++i) {
    for(int j = 0; j < 20; ++j) {
			//Now you only use one square bracket. You calculate an offset into the 1D array to ensure that
			//each (i,j) element has a unique location. There are an infinite number of possible ways of doing this
			//but the simplest ones are either
			//1) Make the index jump by NJ(20) for each increment in i and one for each increment in j
			//2) Make the index jump by NI(also 20) for each change in j and one for each increment in i
      arr_1dvector[i*20+j] = i * j;
    }
  }

	//This section uses the Boost library's multi array
	//Boost is a really common library, but it is a library
	//If you have boost installed, uncomment these lines and
	//the include file at the start of the file
	/*
	//This line alloctes a 2D (rank 2) array of 20x20 elements
	boost::multi_array<int, 2> arr_Boost(boost::extents[20][20]);

	for(int i = 0; i < 20; ++i) {
	for(int j = 0; j < 20; ++j) {
	//You access the elements using nested [] operators
	arr_Boost[i][j] = i * j;
	}
	}
	*/

}
