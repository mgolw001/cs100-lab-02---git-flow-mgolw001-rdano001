#include "c-echo.h"
#include "c-count.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo-count"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, SingleChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "h";
    EXPECT_EQ("h", echo(2,test_val));
}


TEST(EchoTest, Number) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "7";
    EXPECT_EQ("7", echo(2,test_val));
}

TEST(EchoTest, SpecialChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "$";
    EXPECT_EQ("$", echo(2,test_val));
>>>>>>> master
}


int main(int argc, char **argv) {
<<<<<<< HEAD
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
=======
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();}

