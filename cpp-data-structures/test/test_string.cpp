#include "pch.h"
#include "my_string.h"

TEST(strlen, non_zero_length) {
	char* string = "abc";
	EXPECT_EQ(3, my_lib::strlen(string));
}

TEST(strlen, zero_length) {
	char* string = "";
	EXPECT_EQ(0, my_lib::strlen(string));
}