//This program simulates a little login application in order to master Qt 

#include <iostream>
#include "header.h"
#include <string>
using namespace std;


//main function 
int main ()
{
	
	User user1;// Creation the variable User1
	map<string, User> box;// TThe first map which has all the informations about the User 
	map<string, string>box2;// The second map which has all the informations about the security questions 

	user1.createNewAccount( user1,box,box2);
	//user1.modifyPassword(box); // We will use it later 
	//user1.login(box); we will use it later 

}

