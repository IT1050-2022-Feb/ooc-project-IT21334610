#include "Recipe.h"
#include "RergisteredUser.h"
#define SIZE 2
class Save
{
	private:
		int save_id;
		char save_list[50];
		char save_date[50];
		
		Recipe*Srecipes;
		RergisteredUser*RrgisteredUser;
		
	public:
		Save();
		Save(int s_id,char s_list[50],char s_date[50]);
		void DisplaySavedRecipe();
		void AddSaveDetails(Recipe*Srecipes1,RergisteredUser*RrgisteredUser1);
		~Save();
		
};


