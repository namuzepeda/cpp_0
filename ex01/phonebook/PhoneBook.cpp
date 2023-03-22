#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void) {
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

Contact	*PhoneBook::get_contacts(void) {
	return this->contacts;
}

int		PhoneBook::get_max() {
	return this->index;
}

void	PhoneBook::add_contact(Contact contact) {
	this->contacts[this->index == 8 ? 0 : this->index++] = contact;
}

