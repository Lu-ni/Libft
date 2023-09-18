#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strrchr
}

TEST_GROUP(FTStrrchr) {};

TEST(FTStrrchr, FindCharacterInMiddle) {
    const char* str = "Hello, World!";
    CHECK(ft_strrchr(str, 'o') == strrchr(str, 'o'));
}

TEST(FTStrrchr, FindCharacterAtStart) {
    const char* str = "Hello, World!";
    CHECK(ft_strrchr(str, 'H') == strrchr(str, 'H'));
}

TEST(FTStrrchr, FindCharacterAtEnd) {
    const char* str = "Hello, World!";
    CHECK(ft_strrchr(str, '!') == strrchr(str, '!'));
}

TEST(FTStrrchr, CharacterNotInString) {
    const char* str = "Hello, World!";
    CHECK(ft_strrchr(str, 'z') == strrchr(str, 'z'));
}

TEST(FTStrrchr, NullCharacter) {
    const char* str = "Hello, World!";
    CHECK(ft_strrchr(str, '\0') == strrchr(str, '\0'));
}

TEST(FTStrrchr, EmptyString) {
    const char* str = "";
    CHECK(ft_strrchr(str, 'H') == strrchr(str, 'H'));
}

TEST(FTStrrchr, RepeatedCharacter) {
    const char* str = "Hello, World! Hello again!";
    CHECK(ft_strrchr(str, 'l') == strrchr(str, 'l')); // should find the last 'l'
}

