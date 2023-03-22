#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include "../shared/Utils.hpp"

class Contact {
public:

	Contact(void);
	~Contact(void);

	bool		set_field(int index, std::string value);
	std::string	get_field(int index);
	void		to_string();


private:

	std::string fields[5];

};



#endif
