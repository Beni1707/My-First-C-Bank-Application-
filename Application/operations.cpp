// Implementation of connexion and account creating file

#include "header.h"
#include <iostream>
using namespace std;


//Constructor implementation

User::User(string emailAdresse, string passWord) 
	:  emailAdresse(emailAdresse), passWord(passWord) {};
User::User() : //This constructor is definied by default 
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
		getline(cin, lastName);// The user enters his lastname

		cout << "Email Adress: ";
		getline(cin, user.emailAdresse); //The user enters his lastname

		cout << "Pass word: ";
		getline(cin, user.passWord); //The user enters his lastname

		//This serie of questions will show up to allows the user to choose security questions which will be suitable for him to easily remember the answers in case he forget his password.
		cout << endl;
		cout << "In case you loose your password, we will have to make sure that you are the one who want to modify your password.In order toorganise it, you will chose 3  among these following questions which are more easy for you to remember the answers, in order to get back your account." << endl << endl;
		cout << "1.What is your Best friend name ? " << endl;
		cout << "2.What is the name of the city you were born ? " << endl;
		cout << "3.What was the childhood name of your father ?" << endl;
		cout << "4.What is the name of your paternal grand-father? " << endl;
		cout << "5.What is the name of your maternal grand-father ?" << endl;
		cout << "6.what is the name of your first dog or cat ?" << endl;
		
		
		//Those boolean variables will turn true when the user will chose one of these question in order to avoid the double choices
		bool verify1=false;
		bool verify2 =false;
		bool verify3= false;
		bool verify4 = false;
		bool verify5 = false;
		bool verify6 = false;

		for (int i = 0; i < 3; i++)
		{
			string choosenQuestion;// we will save each choosen question in this string variable
		   
			cout << endl;// Space
			cout << "Choose The question number " << i+1<<": ";
			cin >> choice;
			cin.ignore();// ignores the space between the lines 
			 
			//This menu manages the choice of the user for the security question 
				switch (choice)
				{
				case 1:
				{
						if (verify1==true) //This condition verifies each time if the boolean is true. If it the case, it means that the question one has already been choosen by the user.

						{
							cout << "You can not choose this question anymore, choose another one please: ";
							//So, He needs to choose again
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
						
						verify1 = true; // We turn the boolean in true so that the user cannot choose it anymore 

				}break;
				case 2:
				{
					if (verify2 == true)// Please View the first case comments to understand 
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
					verify2 = true;// Please View the first case comments to understand 
				}break;
				case 3:
				{

					if (verify3 == true)// Please View the first case comments to understand 
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

					}verify3 = true;// Please View the first case comments to understand 


				}break;

				case 4:
				{
					if(verify4 == true)// Please View the first case comments to understand 
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
					verify4 = true;// Please View the first case comments to understand 

				}break;
				case 5:
				{
					if (verify5 == true)// Please View the first case comments to understand 
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


					}verify5 = true;// Please View the first case comments to understand 
				}break;

				case 6:
				{
					if (verify4 == true)// Please View the first case comments to understand 
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

					}verify6 = true;// Please View the first case comments to understand 

				}break;

				default:
					//This message will appear when the user enter the invalide wrong value
					cout << "Bad choice, choose among those 6 questions: ";
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
					break;


				}

				
				//We created an array where we saved all the choosen questions and their answers so , we will match each other in an map.
				
				securityQuestions.question[i] = securityQuestions.questionContainer;//The array saves the choosen questions  in each iteration 
				securityQuestions.answer[i] = choosenQuestion;// The array saves the answers in each iteration 
				box2[securityQuestions.question[i]] = securityQuestions.answer[i];// The map is connecting each question to his appropriate answer


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
		User user; //We create a variable in the User Type 
		string mailAdress; // This mail adress 
		string passWordKey;// The password 
		cout << endl;
		cout << "\t Login " << endl << endl;
		cout << "Email: ";
		getline(cin, mailAdress); // The user enters his email Adress

		cout << "Pass Word: ";
		getline(cin, passWordKey); // The user enters his password 

		//Verification in the map 
		 
		if (box.empty())// verifies if the map is empty 
		{
			cout << "The account with these informations does not exist, please create one !" << endl;

		}
		else
		{
			//verifies id
			bool found = false;
			for (auto it = box.begin(); it != box.end(); it++) // This loop goes to all the map from the beginning to the end 
			{
				if (it->first == mailAdress) // COmpares the first case of the map , which is the email address saved in #createNewAccount function, to mail address the user is typing to connect
				{
					if (it->second.passWord == passWordKey)// Compares the passWords from the map to this one typed for login 
					{
						cout << "Successfully connected !" << endl;// Connected !
						
						found = true; //	The boolean is true cause we are connected
						break;

					}
					else
					{
						//Wrong password
						cout << "The pass word does not match, please try again !" << endl;
					}
				}
				else {
					//Wrong Email address
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