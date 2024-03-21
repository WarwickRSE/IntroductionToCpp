
#include <iostream>
#include <vector>

int main(){

  int max_val = 46;
  std::vector<int> fibs;

  if(max_val > 46){
    std::cout<<"Max val is too big! I will overflow. Let me turn it down for you"<<'\n';
    max_val = 46;
  }

  fibs.push_back(1);
  fibs.push_back(1);

  // REMEMBER - the first value in the vector is fibs[0]!

  // ----------------------------------------------------------------

  // METHOD 1 - use push_back
  for(int i = 2; i < max_val; ++i){
    fibs.push_back(fibs[i-1] + fibs[i-2]);
  }

  // ----------------------------------------------------------------
  // OR
  // ----------------------------------------------------------------

  // METHOD 2 - resize and set
  fibs.resize(max_val);
  for(int i = 2; i < fibs.size(); ++i){
    fibs[i] = fibs[i-1] + fibs[i-2];
  }
  // ----------------------------------------------------------------


  for(auto item: fibs){
    std::cout<<item<<'\n';
  }

}

