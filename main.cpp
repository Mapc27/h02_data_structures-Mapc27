#include <iostream>

#include "array_list.hpp"
#include "linked_list.hpp"

using namespace itis;
using namespace std;

int main(int argc, char **argv) {
  auto linked_list = new LinkedList;
//  linked_list->Add(Element::DRAGON_BALL);
//  linked_list->Add(Element::CHERRY_PIE);
//  linked_list->Add(Element::SECRET_BOX);


  cout << linked_list->IndexOf(Element::GRAVITY_GUN) << endl;
  return 0;
}