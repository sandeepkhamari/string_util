#include <iostream>
#include <gtest/gtest.h>
#include "str_util.h"

using namespace std;

// Test for to_upper()
TEST(testToUpper, testAllUpperCase)
{
   std::string name="SANDEEP";
   to_upper(name); 
   ASSERT_EQ(name, "SANDEEP"); 
}

TEST(testToUpper, testAllLowerCase)
{
   std::string name="sandeep";
   to_upper(name);
   ASSERT_EQ(name, "SANDEEP");
}

TEST(testToUpper, testMixedCase)
{
   std::string name="sAnDEep";
   to_upper(name);
   ASSERT_EQ(name, "SANDEEP");
}

TEST(testToUpper, testSpecialCharacters)
{
   std::string name="*sand_eep";
   to_upper(name);
   ASSERT_EQ(name, "*SAND_EEP");
}

TEST(testToUpper, testNumbers)
{
   std::string name= "12345Sandeep";
   to_upper(name);
   ASSERT_EQ(name, "12345SANDEEP");
}

// Test for to_lower()
TEST(testToLower, testAllUpperCase)
{
   std::string name="SANDEEP";
   to_lower(name);
   ASSERT_EQ(name, "sandeep");
}

TEST(testToLower, testAllLowerCase)
{
   std::string name="sandeep";
   to_lower(name);
   ASSERT_EQ(name, "sandeep");
}

TEST(testToLower, testMixedCase)
{
   std::string name="sAnDEep";
   to_lower(name);
   ASSERT_EQ(name, "sandeep");
}

// Test reverse_string()
TEST(testReverseString, testTrue)
{
   std::string name= "sandeep";
   reverse_string(name);
   std::cout<<name<<std::endl;
   ASSERT_EQ(name, "peednas");
}

//TEST(testReverseString, testFalse)
//{
//   std::string name= "sandeep";
//   reverse_string(name);
//   ASSERT_EQ(name, "");
//}

// test length()
TEST(testLength, testNonZeroLength)
{
   std::string name= "sandeep";
   ASSERT_EQ(length(name), 7);
}

TEST(testLength, testZeroLength)
{
   std::string name="";
   ASSERT_EQ(length(name), 0);
}

// test is_palindrome()
TEST(testIsPalindrome, testTrue)
{
   std::string name= "KAYAK";
   //ASSERT_EQ(is_palindrome(name), true);
   ASSERT_TRUE(is_palindrome(name));
}

TEST(testIsPalindrome, testFalse)
{
   std::string name= "BANANA";
   //ASSERT_EQ(is_palindrome(name), false);
   ASSERT_FALSE(is_palindrome(name));
}
