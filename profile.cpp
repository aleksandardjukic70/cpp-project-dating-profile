#include <iostream>
#include "profile.hpp"

 Profile::Profile (std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_sex) {

  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  sex = new_sex;
  
}

std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nCity: " + city;
  bio += "\nCountry: " + country;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nSex: " + sex + "\n";
  std::string hobby_string = "Hobbies:\n";
  
// OVO NE RADI, PROVERI ZASTO
  for(std::string new_hobby : hobbies) {
    hobby_string += " - " + new_hobby + "\n";
  }
  
  return bio + "\n" + hobby_string;
}

void Profile::add_hobby(std::string new_hobby) {

  hobbies.push_back(new_hobby);
}