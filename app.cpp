#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam ("Sam Drakkila", 22, "Barcelona", "Spain", "male");

  sam.add_hobby("listening to audiobooks and podcasts");
  std::cout << sam.view_profile();
}