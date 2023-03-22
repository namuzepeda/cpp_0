/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunoz   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:41:09 by nmunoz            #+#    #+#             */
/*   Updated: 2023/03/21 20:41:09 by nmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook/PhoneBook.hpp"
#include <string>
#include <iostream>

std::string FIELDS[] = {
			"First name",
			"Last name",
			"Nickname",
			"Phone number",
			"Darkest secret"
	};

void welcome(void) {
	std::cout << std::endl;
	std::cout << "Welcome to your PhoneBook" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------- COMMANDS ---------------" << std::endl;
	std::cout << "ADD\t - Add a contact." << std::endl;
	std::cout << "SEARCH\t - Search a contact." << std::endl;
	std::cout << "EXIT\t - Exit the program" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

void add(PhoneBook &pbook) {
	std::cout << "Please complete:" << std::endl;
	Contact contact;
	for(int i = 0; 5 > i; i++) {
		std::cout << "[" << FIELDS[i] << "]: " << std::flush;
		contact.set_field(i, read(""));
	}
	pbook.add_contact(contact);
	std::cout << "Contacted added successfully" << std::endl;
}

void	print_ten(std::string value) {
	int bal = value.length();
	if(bal > 10) {
		std::cout << value.substr(0, 10);
	} else {
		std::cout << value;
		for(; bal != 10; bal++) {
			std::cout << " ";
		}
	}
	std::cout << "|";
}

void print_contact(Contact contact, int index) {
	std::cout << "|";
	print_ten(std::to_string(index));
	for(int i = 0; 3 > i; i++) {
		print_ten(contact.get_field(i));
	}
	std::cout << std::endl;
}

void show(PhoneBook pbook) {
	std::cout << "┌-------------------------------------------┐" << std::endl;
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for(int i = 0; pbook.get_max() > i; i++) {
		Contact contact = pbook.get_contacts()[i];
		print_contact(contact, i + 1);
	}
	std::cout << "└-------------------------------------------┘" << std::endl;
}


int main() {
	PhoneBook pbook;
	std::string input;
	welcome();
	do {
		input = read("Enter an option: ");
		if(iequals(input, "add")) {
			add(pbook);
		} else if(iequals(input, "search")) {
			show(pbook);
		} else if(!iequals(input, "exit")){
			std::cout << "Invalid option" << std::endl;
		}
	}while(!iequals(input, "exit"));

	return 0;

}
