//This program simulates a little login application in order to master Qt 

#include <iostream>
#include "header.h"
#include <string>
using namespace std;


//main function 
int main ()
{
	
	User user1;
	map<string, User> box;

	user1.createNewAccount( user1,box);
	user1.modifyPassword(box);
	user1.login(box);

}

