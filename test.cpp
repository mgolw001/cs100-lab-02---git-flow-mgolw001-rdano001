#include "c-echo.h"

#include "gtest/gtest.h"

//test 1/5
TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

//test 2/5
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

//test 3/5
TEST(EchoTest, LongString) {
    char* test_val[9]; test_val[0] = "./c-echo"; test_val[1] = "Hi"; test_val[2] = "there"; test_val[3] = "my"; test_val[4] = "name"; test_val[5] = "is"; test_val[6] = "Rachel."; test_val[7] = "What's"; test_val[8] = "yours?";
    EXPECT_EQ("Hi there my name is Rachel. What's yours?", echo(9,test_val));
}

//test 4/5
TEST(EchoTest, NewlineOnly) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\n"; 
    EXPECT_EQ("\n", echo(2,test_val));
}

//test 5/5
TEST(EchoTest, Numbers) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "8675309";
    EXPECT_EQ("8675309", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
