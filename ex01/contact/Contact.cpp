#include "Contact.hpp"


Contact::Contact(void) {
	for(int i = 0; 5 > i; i++) {
		this->fields[i] = std::string();
	}
}

Contact::~Contact(void)
{
}

std::string	Contact::get_field(int index) {
	return this->fields[index];
}

bool	Contact::set_field(int index, std::string value) {
	if(value.length() == 0)
		return false;
	this->fields[index] = value;
	return true;
}

void	Contact::to_string() {
	for(int i = 0; 5 > i; i++) {
		std::cout << this->fields[i].substr(0, 9) << std::endl;
	}
}

