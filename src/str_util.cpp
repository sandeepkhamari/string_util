#include "../include/str_util.h"

using namespace std;

int length(const std::string& name)
{
   int count=0;

   while(name[count] != '\0')
   {
      count++;
   }

   return count;
}

void to_upper(std::string& name)
{
   int len= length(name);

   for(int i=0; i<len; i++)
   {
      if(name[i] >='a' && name[i] <= 'z')
      {
         name[i]= name[i] - 32;
      }
   }
}

void to_lower(std::string& name)
{
   int len= length(name);

   for(int i=0; i<len; i++)
   {
      if(name[i] >='A' && name[i] <= 'Z')
      {
         name[i]= name[i] + 32;
      }
   }  
}

bool is_palindrome(const std::string& name)
{
   int len= length(name);

   int start=0, end= len-1;

   while(start<end)
   {
      if(name[start]!=name[end])
      {
	std::cout<<name[start]<<"!="<<name[end]<<std::endl;
        return 0;
      }

      std::cout<<name[start]<<"=="<<name[end]<<std::endl;
      start++;
      end--;
   }
   return 1;
}

void reverse_string(std::string&  name)
{
   
}

/*int main()
{ 
   std::string name= "sandeep";

   to_upper(name);
   std::cout<<name<<std::endl;

   to_lower(name);
   std::cout<<name<<std::endl;

   std::string test_string1= "ABAAAABA";
   int ret_val1= is_palindrome(test_string1);
   std::cout<<ret_val1<<std::endl;

   std::string test_string2= "sandeep";
   int ret_val2= is_palindrome(test_string2);
   std::cout<<ret_val2<<std::endl;
		
   return 0;
}*/
