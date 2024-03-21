
#include <iostream>

int main(){

  int test=4;
  int lowerbound = 1;
  int upperbound = 5;

	//This shows how to combine two logical statements in a single test
	//&& means "AND" and || means "OR". C++ has logical short circuiting
	//This means that the first condition reading from left to right that allows it to know the truth value
	//of a compound expression is the final condition to be evaluated
	//Normally this doesn't matter but if you have functions called as part of a test
	//you might be surprised to find that the call doesn't happen if an earlier condition short
	//circuits

   if (test >= lowerbound && test <= upperbound) {
      std::cout << "Test is within bounds\n";
    } else {
      std::cout << "Test is not within bounds\n";
    }
	//Be very careful with && and || because if you misremember or mistype & or | then
	//it will still work, but you are now performing bitwise comparisons rather than
	//logical comparisons - this gives the same answer but is much slower and doesn't
	//short circuit

}
