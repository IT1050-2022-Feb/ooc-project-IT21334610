#pragma once
class User
{
protected :
	char first_name[20];
	char last_name[20];
	char address[20];
	int age;
	char tel_number[10];
	char email[20];
	char gender[8];

public :
	User();
	User(char f_name[20], char l_name[20], char user_add[20],int userage, char tel_num[10], char user_mail[20], char user_gender[8]);
	
	void AddUserDetails(char f_name[20], char l_name[20], char user_add[20], int userage, char tel_num[10], char user_mail[20], char user_gender[8]);
	void DeleteUserdetails();
	void UpdateUserDetails(char f_name[20], char l_name[20], char user_add[20], int userage, char tel_num[10], char user_mail[20], char user_gender[8]);
	void Display();
	~User();

};
