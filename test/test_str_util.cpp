#include <iostream>
#include <gtest/gtest.h>
#include "../include/str_util.h"

using namespace std;

TEST(testToUpper, testUpper)
{
   std::string name="SANDEEP";
   to_upper(name); 
   ASSERT_EQ(name, "SANDEEP"); 
}

TEST(testToUpper, testLower)
{
   std::string name="sandeep";
   to_upper(name);
   ASSERT_EQ(name, "SANDEEP");
}

TEST(testToUpper, testMixed)
{
   std::string name="sAnDEep";
   to_upper(name);
   ASSERT_EQ(name, "SANDEEP");
}
