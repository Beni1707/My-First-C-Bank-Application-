//This file contains all the headers needed for the app 

#pragma once
#include <string>
#include <map>
using namespace std;

//Creating the first Object User 
class User {
private :
	int idConnexion;// The automatic Id COnnexion 
public:
	//All the information about the user 
	string firstName;
	string lastName;
	string emailAdresse;
	string phoneNumber;
	string passWord;
	string postalCode;
	string province;
	string city;
	string country;
	string residenceAdresse;
	
	//This structure for managing security questions 
	struct SecurityQuestions
	{
		string questionContainer;
		string question[4];
		string answer[4];
	};
	
	//Constructor
	User(string emailAdresse, string passWord);
	User();

	//Methods :
	void login(map <string, User>&); // For login in the app
	void createNewAccount(User & user, map <string,User>&, map<string, string>& box2); //Tp create a New Account 
	void modifyPassword(map <string, User>&); //TO modify the passWord 
	//void printInformations(User & user); //We will use it later 

};