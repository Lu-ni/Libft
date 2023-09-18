#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strchr
}

TEST_GROUP(FTStrchr) {};

TEST(FTStrchr, FindCharacterInMiddle) {
    const char* str = "Hello, World!";
    CHECK(ft_strchr(str, 'o') == strchr(str, 'o'));
}

TEST(FTStrchr, FindCharacterAtStart) {
    const char* str = "Hello, World!";
    CHECK(ft_strchr(str, 'H') == strchr(str, 'H'));
}

TEST(FTStrchr, FindCharacterAtEnd) {
    const char* str = "Hello, World!";
    CHECK(ft_strchr(str, '!') == strchr(str, '!'));
}

TEST(FTStrchr, CharacterNotInString) {
    const char* str = "Hello, World!";
    CHECK(ft_strchr(str, 'z') == strchr(str, 'z'));
}

TEST(FTStrchr, NullCharacter) {
    const char* str = "Hello, World!";
    CHECK(ft_strchr(str, '\0') == strchr(str, '\0'));
}

TEST(FTStrchr, EmptyString) {
    const char* str = "";
    CHECK(ft_strchr(str, 'H') == strchr(str, 'H'));
}

TEST(FTStrchr, RepeatedCharacter) {
    const char* str = "Hello, World! Hello again!";
    CHECK(ft_strchr(str, 'l') == strchr(str, 'l')); // should find the first 'l'
}

