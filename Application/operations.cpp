// Implementation of connexion and account creating file

#include "header.h"
#include <iostream>
using namespace std;


//Constructor implementation

User::User(string emailAdresse, string passWord) 
	:  emailAdresse(emailAdresse), passWord(passWord) {};
User::User() :
	emailAdresse(), passWord() {};


//Methods implementation
	void User :: createNewAccount(User & user,map<string,User>&box, map<string, string>& box2)
	{

		//Datas stockage 
		SecurityQuestions securityQuestions;// structure for security questions 
		
		int choice;// The choice when user will choose a security question
		
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
		cout << "In case you loose your password, we will have to make sure that you are the one who want to modify your password.In order toorganise it, you will chose 3  among these following questions which are more easy for you to remember the answers, in order to get back your account." << endl << endl;
		cout << "1.What is your Best friend name ? " << endl;
		cout << "2.What is the name of the city you were born ? " << endl;
		cout << "3.What was the childhood name of your father ?" << endl;
		cout << "4.What is the name of your paternal grand-father? " << endl;
		cout << "5.What is the name of your maternal grand-father ?" << endl;
		cout << "6.what is the name of your first dog or cat ?" << endl;
		
		
		//We introduce the for loop to allow the user choosing the 3 security questions
		bool verify1=false;
		bool verify2 =false;
		bool verify3= false;
		bool verify4 = false;
		bool verify5 = false;
		bool verify6 = false;

		for (int i = 0; i < 3; i++)
		{
			string choosenQuestion;
		   //this variable will be used to verify that the user do not choose the same question twice
			cout << endl;
			cout << "Choose The question number " << i+1<<": ";
			cin >> choice;
			cin.ignore();
			 
			
				switch (choice)
				{
				case 1:
				{
						if (verify1==true)
						{
							cout << "You can not choose this question anymore, choose another one please: ";

							cin >> choice;
							cin.ignore();
							//We recall the switch to have the right Question choosen.
							switch (choice)
							{
							case 1:
							{
								if (verify1 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: ";
									cin >> choice;
									cin.ignore();
								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "What is your Best friend name";
									cout << "What is your Best friend name: ";
									getline(cin, choosenQuestion);
								}

								verify1 = true;

							}break;
							case 2:
							{
								if (verify2 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: ";
									cin >> choice;
								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "What is the name of the city you were born ";
									cout << "What is the name of the city you were born: ";
									getline(cin, choosenQuestion);
								}
								verify2 = true;
							}break;
							case 3:
							{

								if (verify3 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: ";
									cin >> choice;
								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "What was the childhood name of your father ";
									cout << "What was the childhood name of your father: ";
									getline(cin, choosenQuestion);

								}verify3 = true;


							}break;

							case 4:
							{
								if (verify4 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: ";
									cin >> choice;

								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
									cout << "What is the name of your paternal grand-father: ";
									getline(cin, choosenQuestion);

								}
								verify4 = true;

							}break;
							case 5:
							{
								if (verify5 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: " << endl;
								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
									cout << "What is the name of your maternal grand-father: ";
									getline(cin, choosenQuestion);


								}verify5 = true;
							}break;

							case 6:
							{
								if (verify4 == true)
								{
									cout << "You can not choose this question anymore, choose another one please: ";
									cin >> choice;
								}
								else {
									//In this case, we save the choosen question , in the string variable securityQuestions.Container
									securityQuestions.questionContainer = "what is the name of your first dog or cat ";
									cout << "What is the name of your first dog or cat: ";
									getline(cin, choosenQuestion);

								}verify6 = true;

							}break;

							default:
								//This message will appear when the user enter the invalide wrong value
								cout << "Bad choice, choose among those 6 questions." << endl;
								break;


							}
						}
						else {
							//In this case, we save the choosen question , in the string variable securityQuestions.Container
							securityQuestions.questionContainer = "What is your Best friend name";
							cout << "What is your Best friend name: ";
							getline(cin, choosenQuestion);
						}
						
						verify1 = true;

				}break;
				case 2:
				{
					if (verify2 == true)
					{
						cout << "You can not choose this question anymore, choose another one please: ";
						cin >> choice;
						cin.ignore();
						
						//We recall the switch to have the correct question
						switch (choice)
						{
						case 1:
						{
							if (verify1 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";

								cin >> choice;
								cin.ignore();
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is your Best friend name";
								cout << "What is your Best friend name: ";
								getline(cin, choosenQuestion);
							}

							verify1 = true;

						}break;
						case 2:
						{
							if (verify2 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of the city you were born ";
								cout << "What is the name of the city you were born: ";
								getline(cin, choosenQuestion);
							}
							verify2 = true;
						}break;
						case 3:
						{

							if (verify3 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What was the childhood name of your father ";
								cout << "What was the childhood name of your father: ";
								getline(cin, choosenQuestion);

							}verify3 = true;


						}break;

						case 4:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;

							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
								cout << "What is the name of your paternal grand-father: ";
								getline(cin, choosenQuestion);

							}
							verify4 = true;

						}break;
						case 5:
						{
							if (verify5 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: " << endl;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
								cout << "What is the name of your maternal grand-father: ";
								getline(cin, choosenQuestion);


							}verify5 = true;
						}break;

						case 6:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "what is the name of your first dog or cat ";
								cout << "What is the name of your first dog or cat: ";
								getline(cin, choosenQuestion);

							}verify6 = true;

						}break;

						default:
							//This message will appear when the user enter the invalide wrong value
							cout << "Bad choice, choose among those 6 questions." << endl;
							break;


						}
					}
					else {
						//In this case, we save the choosen question , in the string variable securityQuestions.Container
						securityQuestions.questionContainer = "What is the name of the city you were born ";
						cout << "What is the name of the city you were born: ";
						getline(cin, choosenQuestion);
					}
					verify2 = true;
				}break;
				case 3:
				{

					if (verify3 == true)
					{
						cout << "You can not choose this question anymore, choose another one please: ";
						cin >> choice;
						cin.ignore();
						//We recall the switch to have the correct question
						switch (choice)
						{
						case 1:
						{
							if (verify1 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";

								cin >> choice;
								cin.ignore();
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is your Best friend name";
								cout << "What is your Best friend name: ";
								getline(cin, choosenQuestion);
							}

							verify1 = true;

						}break;
						case 2:
						{
							if (verify2 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of the city you were born ";
								cout << "What is the name of the city you were born: ";
								getline(cin, choosenQuestion);
							}
							verify2 = true;
						}break;
						case 3:
						{

							if (verify3 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What was the childhood name of your father ";
								cout << "What was the childhood name of your father: ";
								getline(cin, choosenQuestion);

							}verify3 = true;


						}break;

						case 4:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;

							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
								cout << "What is the name of your paternal grand-father: ";
								getline(cin, choosenQuestion);

							}
							verify4 = true;

						}break;
						case 5:
						{
							if (verify5 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: " << endl;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
								cout << "What is the name of your maternal grand-father: ";
								getline(cin, choosenQuestion);


							}verify5 = true;
						}break;

						case 6:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "what is the name of your first dog or cat ";
								cout << "What is the name of your first dog or cat: ";
								getline(cin, choosenQuestion);

							}verify6 = true;

						}break;

						default:
							//This message will appear when the user enter the invalide wrong value
							cout << "Bad choice, choose among those 6 questions." << endl;
							break;


						}
					}
					else {
						//In this case, we save the choosen question , in the string variable securityQuestions.Container
						securityQuestions.questionContainer = "What was the childhood name of your father ";
						cout << "What was the childhood name of your father: ";
						getline(cin, choosenQuestion);

					}verify3 = true;


				}break;

				case 4:
				{
					if(verify4 == true)
					{
						cout << "You can not choose this question anymore, choose another one please: ";
						cin >> choice;
						cin.ignore();
						//We recall the switch to have the correct question
						switch (choice)
						{
						case 1:
						{
							if (verify1 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";

								cin >> choice;
								cin.ignore();
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is your Best friend name";
								cout << "What is your Best friend name: ";
								getline(cin, choosenQuestion);
							}

							verify1 = true;

						}break;
						case 2:
						{
							if (verify2 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of the city you were born ";
								cout << "What is the name of the city you were born: ";
								getline(cin, choosenQuestion);
							}
							verify2 = true;
						}break;
						case 3:
						{

							if (verify3 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What was the childhood name of your father ";
								cout << "What was the childhood name of your father: ";
								getline(cin, choosenQuestion);

							}verify3 = true;


						}break;

						case 4:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;

							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
								cout << "What is the name of your paternal grand-father: ";
								getline(cin, choosenQuestion);

							}
							verify4 = true;

						}break;
						case 5:
						{
							if (verify5 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: " << endl;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
								cout << "What is the name of your maternal grand-father: ";
								getline(cin, choosenQuestion);


							}verify5 = true;
						}break;

						case 6:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "what is the name of your first dog or cat ";
								cout << "What is the name of your first dog or cat: ";
								getline(cin, choosenQuestion);

							}verify6 = true;

						}break;

						default:
							//This message will appear when the user enter the invalide wrong value
							cout << "Bad choice, choose among those 6 questions." << endl;
							break;


						}

					}
					else {
						//In this case, we save the choosen question , in the string variable securityQuestions.Container
						securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
						cout << "What is the name of your paternal grand-father: ";
						getline(cin, choosenQuestion);

					}
					verify4 = true;

				}break;
				case 5:
				{
					if (verify5 == true)
					{
						cout << "You can not choose this question anymore, choose another one please: ";
						cin >> choice;
						cin.ignore();
						//We recall the switch to have the correct question
						switch (choice)
						{
						case 1:
						{
							if (verify1 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";

								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is your Best friend name";
								cout << "What is your Best friend name: ";
								getline(cin, choosenQuestion);
							}

							verify1 = true;

						}break;
						case 2:
						{
							if (verify2 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of the city you were born ";
								cout << "What is the name of the city you were born: ";
								getline(cin, choosenQuestion);
							}
							verify2 = true;
						}break;
						case 3:
						{

							if (verify3 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What was the childhood name of your father ";
								cout << "What was the childhood name of your father: ";
								getline(cin, choosenQuestion);

							}verify3 = true;


						}break;

						case 4:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;

							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
								cout << "What is the name of your paternal grand-father: ";
								getline(cin, choosenQuestion);

							}
							verify4 = true;

						}break;
						case 5:
						{
							if (verify5 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: " << endl;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
								cout << "What is the name of your maternal grand-father: ";
								getline(cin, choosenQuestion);


							}verify5 = true;
						}break;

						case 6:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "what is the name of your first dog or cat ";
								cout << "What is the name of your first dog or cat: ";
								getline(cin, choosenQuestion);

							}verify6 = true;

						}break;

						default:
							//This message will appear when the user enter the invalide wrong value
							cout << "Bad choice, choose among those 6 questions." << endl;
							break;


						}
					}
					else {
						//In this case, we save the choosen question , in the string variable securityQuestions.Container
						securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
						cout << "What is the name of your maternal grand-father: ";
						getline(cin, choosenQuestion);


					}verify5 = true;
				}break;

				case 6:
				{
					if (verify4 == true)
					{
						cout << "You can not choose this question anymore, choose another one please: ";
						cin >> choice;
						cin.ignore();
						//We recall the switch to have the correct question
						switch (choice)
						{
						case 1:
						{
							if (verify1 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";

								cin >> choice;
								cin.ignore();
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is your Best friend name";
								cout << "What is your Best friend name: ";
								getline(cin, choosenQuestion);
							}

							verify1 = true;

						}break;
						case 2:
						{
							if (verify2 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of the city you were born ";
								cout << "What is the name of the city you were born: ";
								getline(cin, choosenQuestion);
							}
							verify2 = true;
						}break;
						case 3:
						{

							if (verify3 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What was the childhood name of your father ";
								cout << "What was the childhood name of your father: ";
								getline(cin, choosenQuestion);

							}verify3 = true;


						}break;

						case 4:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;

							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your paternal grand-father?";
								cout << "What is the name of your paternal grand-father: ";
								getline(cin, choosenQuestion);

							}
							verify4 = true;

						}break;
						case 5:
						{
							if (verify5 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: " << endl;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "What is the name of your maternal grand-father ?";
								cout << "What is the name of your maternal grand-father: ";
								getline(cin, choosenQuestion);


							}verify5 = true;
						}break;

						case 6:
						{
							if (verify4 == true)
							{
								cout << "You can not choose this question anymore, choose another one please: ";
								cin >> choice;
							}
							else {
								//In this case, we save the choosen question , in the string variable securityQuestions.Container
								securityQuestions.questionContainer = "what is the name of your first dog or cat ";
								cout << "What is the name of your first dog or cat: ";
								getline(cin, choosenQuestion);

							}verify6 = true;

						}break;

						default:
							//This message will appear when the user enter the invalide wrong value
							cout << "Bad choice, choose among those 6 questions." << endl;
							break;


						}
					}
					else {
						//In this case, we save the choosen question , in the string variable securityQuestions.Container
						securityQuestions.questionContainer = "what is the name of your first dog or cat ";
						cout << "What is the name of your first dog or cat: ";
						getline(cin, choosenQuestion);

					}verify6 = true;

				}break;

				default:
					//This message will appear when the user enter the invalide wrong value
					cout << "Bad choice, choose among those 6 questions." << endl;
					break;


				}

				
				//We created an array where we saved all the choosen questions and their answers so , we will match each other in an map
				securityQuestions.question[i] = securityQuestions.questionContainer;
				securityQuestions.answer[i] = choosenQuestion;
				box2[securityQuestions.question[i]] = securityQuestions.answer[i];


		}

			
	}
		

		/*
		* cout << "Phone Number: ";
		getline(cin, user.phoneNumber);

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
		
		*/
		

	

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