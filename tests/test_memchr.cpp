#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_memchr
}

TEST_GROUP(FTMemchr) {};

TEST(FTMemchr, FindCharacterInMiddle) {
    const char* mem = "Hello, World!";
    CHECK(ft_memchr(mem, 'o', 13) == memchr(mem, 'o', 13));
}

TEST(FTMemchr, FindCharacterAtStart) {
    const char* mem = "Hello, World!";
    CHECK(ft_memchr(mem, 'H', 13) == memchr(mem, 'H', 13));
}

TEST(FTMemchr, FindCharacterAtEnd) {
    const char* mem = "Hello, World!";
    CHECK(ft_memchr(mem, '!', 13) == memchr(mem, '!', 13));
}

TEST(FTMemchr, CharacterNotInMemory) {
    const char* mem = "Hello, World!";
    CHECK(ft_memchr(mem, 'z', 13) == memchr(mem, 'z', 13));
}

TEST(FTMemchr, NullCharacter) {
    const char* mem = "Hello\0World!";
    CHECK(ft_memchr(mem, '\0', 13) == memchr(mem, '\0', 13));
}

TEST(FTMemchr, ZeroLengthSearch) {
    const char* mem = "Hello, World!";
    CHECK(ft_memchr(mem, 'H', 0) == memchr(mem, 'H', 0)); // Should always be NULL as nothing is searched
}

TEST(FTMemchr, EmptyMemory) {
    const char* mem = "";
    CHECK(ft_memchr(mem, 'H', 5) == memchr(mem, 'H', 5));
}

TEST(FTMemchr, SpecialCharacters) {
    const char* mem = "Hello, \t\nWorld!";
    CHECK(ft_memchr(mem, '\t', 13) == memchr(mem, '\t', 13));
}

