
#include <iostream>
#include <vector>

struct person{
  std::string name;
  int age = -1; // Give this an obviously wrong value
};

std::vector<person> add_new_person(std::vector<person> list, person new_person){

  bool name_is_in_list = false;
  for(auto item : list){
    if(item.name == new_person.name){
      name_is_in_list = true;
      break; // Break out of the loop because we are done - optional
    }
  }
  if(name_is_in_list){
    std::cout<<new_person.name<<" is already in the list\n";
  }else{
    list.push_back(new_person);
  }

  return list;
}

int main(){


  std::vector<person> staff;

  person tmp_person;

  tmp_person.name = "Bob"; tmp_person.age = 21;
  staff.push_back(tmp_person); // This has put a _copy_ of tmp_person into the vector! We can reuse our variable

  tmp_person.name = "Alice"; tmp_person.age = 47;
  staff.push_back(tmp_person);

  tmp_person.name = "Charlie"; tmp_person.age = 32;
  staff.push_back(tmp_person);

  staff = add_new_person(staff, tmp_person);

  tmp_person.name = "Digby"; tmp_person.age = 77;
  staff = add_new_person(staff, tmp_person);

  for(auto item : staff){
    std::cout<<item.name<<", "<<item.age<<'\n';
  }

}
