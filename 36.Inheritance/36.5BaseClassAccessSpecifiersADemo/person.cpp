#include <iostream>
#include "person.h"

Person::Person(std::string_view full_name, int age, const std::string_view address)
    : m_full_name(full_name), m_age(age), m_address(address)
{

}

Person::~Person() {

}

std::ostream& operator<<(std::ostream& out , const Person& person){
   out << "Person [Full name :" << person.get_full_name() <<
                      ", Age:" << person.get_age() <<
                      ", Address:" << person.get_address() << "]";
  return out;
}