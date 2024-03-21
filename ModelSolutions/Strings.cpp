
#include <string>
#include <iostream>

int main(){

  std::string name = "Bob";
  int age = 21;

  std::string mess = "Hello "+name+" you are "+std::to_string(age)+"!\n";

  std::cout<<mess;


}

