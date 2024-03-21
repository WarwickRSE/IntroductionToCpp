#include <iostream>
#include <string>

void write(std::string s){
  std::cerr<<"I am the function which takes a string\n";
  std::cout<<s<<'\n';
}

void write(int i){
  std::cerr<<"I am the function which takes an int\n";
  std::cout<<i<<'\n';
}

int main(){

  write("Hello");
  write(1);

}
