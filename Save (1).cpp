#include "Save.h"
#include<string.h>
#include<iostream>
using namespace std;

Save::Save(){
	save_id=0;
	strcpy(save_list,"");
	strcpy(save_date,"");	
	
}

Save::Save(int s_id,char s_list[50],char s_date[50]){
	
	save_id = s_id;
	strcpy(save_list,s_list);
	strcpy(save_date,s_date);
}

void Save::AddSaveDetails(Recipe*Srecipes1,RergisteredUser*RrgisteredUser1){
	Srecipes = Srecipes1;
	RrgisteredUser = RrgisteredUser1;
	
}

void Save::DisplaySavedRecipe(){
	
	
	
}

~Save(){
	
	cout << "Delete save recipe";
	
}
