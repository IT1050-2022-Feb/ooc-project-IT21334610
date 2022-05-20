#include "User.h"
#include<string.h>
User::User() {
	strcpy(first_name, "");
	strcpy(last_name, "");
	strcpy(address, "");
	age = 0;
	strcpy(tel_number, "");
	strcpy(email, "");
	strcpy(gender, "");
}

User::User(char f_name[20], char l_name[20], char user_add[20], int userage, char tel_num[10], char user_mail[20], char user_gender[8])
{
	strcpy(first_name, f_name);
	strcpy(last_name, l_name);
	strcpy(address, user_add);
	age = userage;
	strcpy(tel_number, tel_num);
	strcpy(email, user_mail);
	strcpy(gender, user_gender);
};

void User:: AddUserDetails(char f_name[20], char l_name[20], char user_add[20],int userage,  char tel_num[10], char user_mail[20], char user_gender[8])
{

};
void User:: DeleteUserdetails()
{

};
void User::UpdateUserDetails(char f_name[20], char l_name[20], char user_add[20], int userage, char tel_num[10], char user_mail[20], char user_gender[8])
{

};
void User::Display()
{

};
User::~User()
{
	//This is Destructors
};



