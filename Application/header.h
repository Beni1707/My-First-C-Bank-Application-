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
	void login(map <string, User>&);
	void createNewAccount(User & user, map <string,User>&, map<string, string>& box2);
	void modifyPassword(map <string, User>&);
	//void printInformations(User & user);

};