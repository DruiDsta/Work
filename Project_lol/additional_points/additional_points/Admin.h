#pragma once
#include<string>
#include<vector>
#include <map>

class Test;
class Guest;
class Admin {
private:
	std::string login;//generated by program and can be changed + encrypted
	std::string password;// same

	//vector<Test> tests;

	//map<string,string> adminlog;


public:
	void CreateAdmin();
	void ChangeLogPass();

	void CreateUser(Guest*);
	void DeleteUser(Guest*);

	void ShowStats();
	void AddTest();
	void ChangeTest();


	long long Encrypt(std::string);
	
};