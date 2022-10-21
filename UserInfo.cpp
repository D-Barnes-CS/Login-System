#include "UserInfo.h"
/**TODO : fix your checkUsername class, you'll want it to check if a
username has too many characters (max 30) and also ensuring it only has
characters that we allow a-zA-z'_- are the only ones we want */
bool UserInfo::checkUsername(string un)
{
	if (un.length() > 30 || 
		un.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-'") != std::string::npos) {
		return false;
	}
	else {
		return true;
	}
}

void UserInfo::setUsername(string un)
{
	username = un;
}

void UserInfo::setPassword(string pw)
{
	password = pw;
}
/** TODO fix the random password generator and also figure out how to
make it work efficiently. You have the 68 characters you want in each
password now you need to figure out how to add it to a string and create
the default password. We only will want this password for one individual
so make sure others cannot see it. Then might wanna ask if a user
wants to see the password we have it only accessible to the username
which we can check later. */
UserInfo::UserInfo(string un)
{
	setUsername(un);
	char randoPW[68] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
						'h', 'i', 'j', 'k', 'l', 'm', 'n',
						'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
						'w', 'x', 'y', 'z', 'A', 'B', 'C',
						'D', 'E', 'F', 'G', 'H', 'I','J',
						'K', 'L', 'M', 'N', 'O', 'P', 'Q',
						'R', 'S', 'T', 'U', 'V', 'W', 'X',
						'Y', 'Z', '1', '2', '3', '4', '5',
						'6', '7', '8', '9', '-', '_', '@',
						'$', '#', '&', '!'};
	string passwd;
	for (int i = 0; i < 10; i++) {
		passwd += randoPW[rand() % 68];
	}
	setPassword(passwd);
}

UserInfo::UserInfo(string un, string pw)
{
	setPassword(pw); setUsername(un);
}
/** TODO fix delete constructor */
UserInfo::~UserInfo()
{
	delete[] *username;
	delete[] *password;
}

/**TODO
* for passwords but i need to adjust it to include 
* special characters such as the ones in my username random above
* 
/ [A - Z]/
/[a - z]/
/[0 - 9]/
/[^ A - Za - z0 - 9] / 

regex
([A-Za-z'])\w+
*/
