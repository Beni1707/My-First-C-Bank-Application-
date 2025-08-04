// Implementation files 

#include "header.h"
#include <iostream>


//Constructor implementation

User::User(string emailAdresse, string passWord) 
	:  emailAdresse(emailAdresse), passWord(passWord) {};
User::User() :
	emailAdresse(), passWord() {};


//Methods implementation
	void User :: createNewAccount(User & user,map<string,User>&box)
	{

		//Datas stockage 
		
		//Variables declaration 
		//int age;
		dateOfBirth date;
		
		cout << endl;// space 
		//printing and command 
		cout << "\t Creating a new Account" << endl << endl;
		cout << "First Name: ";
		getline(cin, user.firstName);
		
		cout << "Last Name: ";
		getline(cin, lastName);

		cout << "Email Adress: ";
		getline(cin, user.emailAdresse);
		cout << "Pass word: ";
		getline(cin, user.passWord);

		cout << endl;
		cout << "In case you loose your password, we will have to make sure that you are the one who want to modify your password.\n In order to"
			"organise it, you will chose 3  among these following questions which are more easy for you to remember the answers, in order to get back your account." << endl << endl;
		cout << "1.What is your Best friend name ? " << endl;
		cout << "2.What is the name of the city you were born ? " << endl;
		cout << "3.What was the childhood name of your father ?" << endl;
		cout << "4.What is the name of your paternal grand-father? " << endl;
		cout << "5.What is the name of your maternal grand-father ?" << endl;
		cout << "6.what is the name of your first dog or cat ?" << endl;


		cout << "Phone Number: ";
		getline(cin, user.phoneNumber);

		/*
		* cout << "Date of birthday (month/date/year): ";
		cout << "Adress: ";
		cout << " Age: "; 
		age = 2025 - date.year;
		*/
		cout << "Residence Adress: ";
		getline(cin, user.residenceAdresse);

		cout << "Postal Code : ";
		getline(cin, user.postalCode);

		cout << "Province: ";
		getline(cin,user.province );

		cout << "City: ";
		getline(cin, user.city);

		cout << "Country: ";
		getline(cin, user.country);

		
		box[user.emailAdresse] = user;
		cout << endl;
		cout << "Le numero de telephone de " << box[user.emailAdresse].firstName << " est " << box[user.emailAdresse].phoneNumber << endl;
		

	}

	//login function 
	void User::login(map<string, User>& box)
	{
		User user;
		string mailAdress;
		string passWordKey;
		cout << endl;
		cout << "\t Login " << endl << endl;
		cout << "Email: ";
		getline(cin, mailAdress);

		cout << "Pass Word: ";
		getline(cin, passWordKey);

		//Verification in the map 
		 
		if (box.empty())// verifies if the map is empty 
		{
			cout << "The account with these informations does not exist, please create one !" << endl;

		}
		else
		{
			//verifies id
			bool found = false;
			for (auto it = box.begin(); it != box.end(); it++)
			{
				if (it->first == mailAdress)
				{
					if (it->second.passWord == passWordKey)
					{
						cout << "Successfully connected !" << endl;
						
						found = true;
						break;

					}
					else
					{
						cout << "The pass word does not match, please try again !" << endl;
					}
				}
				else {
					cout << "The account with this email Adress does not exist, please try again !" << endl;
				}
			}
			
		}

	}

	
	//Forgot the passWord
	void User:: modifyPassword(map <string, User>&box)
	{
		string emailAdress;
		string newPassword;

		//Asking user to give his email
		cout << endl;
		cout << "\t Modify Password" << endl;
		cout << "Email: ";
		getline(cin, emailAdress);

		//Verify the existing of the account 
		if (box.empty())
		{
			cout << "There is no account created yet." << endl;//appears if the map is empty 

		}
		else
		{
			//Verifies all the map to match the mail with the account 
			for (auto it = box.begin(); it != box.end(); it++)
			{
				if (it->first == emailAdress)
				{
					//if the email exists, the user can put his new password 
					cout << "Enter the new password: ";
					getline(cin, newPassword);
					it->second.passWord = newPassword;
					cout << "Password changed successfully" << endl;
				}
					
				else
				{
					//if it doesn't match, the user has to retry or to create a new one
					cout << "There is no account matching with this email. Please Try again or create a new account!" << endl;
				}
			}
		}
	}