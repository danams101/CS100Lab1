#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; 
	test_val[0] = "./c-echo"; 
	test_val[1] = "hello"; 
	test_val[2] = "world";

	EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1];
	test_val[0] = "./c-echo";

	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, OneTwoThree) {
	char* test_val[5];
	test_val[0] = "./c-echo";
        test_val[1] = "1";
        test_val[2] = "2";
	test_val[3] = "3";
	test_val[4] = "!";

	EXPECT_EQ("1 2 3 !", echo(5, test_val));
}

TEST(EchoTest, LongPhrase) {
	char* test_val[2];
	test_val[0] = "./c-echo";
	test_val[1] = "ThisIsAReallyLongPhraseWithoutSpaces.";

	EXPECT_EQ("ThisIsAReallyLongPhraseWithoutSpaces.", echo(2, test_val));
}

TEST(EchoTest, Greeting) {
	char* test_val[7];
	test_val[0] = "./c-echo";
        test_val[1] = "Hi,";
        test_val[2] = "How";
        test_val[3] = "are";
	test_val[4] = "you";
        test_val[5] = "doing";
        test_val[6] = "today?";
        
	EXPECT_EQ("Hi, How are you doing today?", echo(7,test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
