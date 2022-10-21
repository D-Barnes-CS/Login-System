#pragma once
#include <iostream>
#include <string>
//TODO : add a delete constructor to get rid of memory (userinfo)
using std::cout; using std::cin; using std::endl; using std::string;

class UserInfo
{
	private:
		string username;
		string password;
	public: 
		bool checkUsername(string un);
		string checkPassword(string pw);
		void setUsername(string un);
		void setPassword(string pw);
		UserInfo(string un);
		UserInfo(string un, string pw);
		~UserInfo();
};

