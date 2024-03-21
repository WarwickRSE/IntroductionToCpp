
#include <iostream>

int main(){

  int max_val = 46;
  int fib_first=1, fib_second=1, fib_current;

  if(max_val > 46){
    std::cout<<"Max val is too big! I will overflow. Let me turn it down for you"<<'\n';
    max_val = 46;
  }

  std::cout<<fib_first<<'\n'<<fib_second<<'\n';

  for(int i = 3; i <= max_val; ++i){
    fib_current = fib_first + fib_second;
    fib_first = fib_second;
    fib_second = fib_current;
    std::cout<<fib_current<<'\n';
  }


}

