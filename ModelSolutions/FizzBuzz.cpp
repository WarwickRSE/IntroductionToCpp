#include <iostream>


int main(){

  const int fz=3, bz=5; // Const means the compiler should not let me change these
  const int end = 100;

  std::string fz_s = "Fizz\n", bz_s="Buzz\n", fzbz_s="Fizzbuzz\n";

  for(int i = 1; i < end; ++i){

    // I could organize these checks in a few different ways but this way
    // we check the most restrictive thing first, then go to the other options
    // I think this is the simplest. See below for another way
    if(i%(fz*bz) == 0){
      std::cout<<fzbz_s;
    }else if(i%bz == 0){
      std::cout<<bz_s;
    }else if(i%fz == 0){
      std::cout<<fz_s;
    }else{
      std::cout<<i<<'\n';
    }
  }

}
/*
You may have done the checks like this, which also works perfectly
but is a bit more complicated than it needs to be.

    if(i%3 == 0 && i%5 != 0){
      std::cout<<fz_s;
    }else if(i%5 == 0 && i%3 != 0}
      std::cout<<bz_s;
    }else if(i%3 == 0 && i%5 == 0){
      std::cout<<fzbz_s;
    }else{
      std::cout<<i<<'\n';
    }

*/

