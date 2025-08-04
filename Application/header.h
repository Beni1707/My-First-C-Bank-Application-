#pragma once
#include <string>
#include <map>
using namespace std;
class User {
private :
	int idConnexion;
public:
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
	struct dateOfBirth
	{
		int date;
		string month;
		int year; 
	};

	struct SecurityQuestions
	{
		string question1;
		string question2;
		string question3;
	};
	
	//Constructor
	User(string emailAdresse, string passWord);
	User();

	//Methods :
	void login(map <string, User>&);
	void createNewAccount(User & user, map <string,User>&);
	void modifyPassword(map <string, User>&);
	//void printInformations(User & user);

};