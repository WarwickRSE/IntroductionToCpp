#include <iostream>
#include <vector>


// A simple function
int average(int a, int b){
  return (a+b)/2.0;
}

// Pass by value
int average(std::vector<int> a){
  int av = 0;
  for(auto item : a){
    av += item;
  }
  return av/a.size();
}

// Passing vector by constant reference
// Avoids copies!
int average2(const std::vector<int> & a){
  int av = 0;
  // Use a const reference to avoid any copying
  for(const auto &item : a){
    av += item;
  }
  return av/a.size();
}

int main(){

  std::vector<int> myvec;

  myvec.push_back(1);
  myvec.push_back(10);
  myvec.push_back(11);
  myvec.push_back(2);
  myvec.push_back(1);

  std::cout<< average(myvec)<<'\n';

  std::cout<< average2(myvec)<<'\n';

  // By the way, there is no such thing as a vector literal, but there is something a bit like one:
  // How these really work is complicated, so do be careful. But this lets us check our const reference idea again
  std::cout<<average({1, 2, 3, 3, 4, 5})<<std::endl;

  std::cout<<average2({1, 2, 3, 3, 4, 5})<<std::endl;


}
