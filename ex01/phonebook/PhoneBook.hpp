#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include "../shared/Utils.hpp"
# include "../contact/Contact.hpp"

class PhoneBook {
public:

	PhoneBook(void);
	~PhoneBook(void);

	Contact	*get_contacts(void);
	void	add_contact(Contact contact);
	int		get_max();



private:

	int 	index;
	Contact contacts[8];

};



#endif
