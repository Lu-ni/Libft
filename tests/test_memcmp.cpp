#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_memcmp
}

TEST_GROUP(FTMemcmp) {};

TEST(FTMemcmp, EqualMemory) {
    const char* mem1 = "Hello, World!";
    const char* mem2 = "Hello, World!";
    CHECK(ft_memcmp(mem1, mem2, 13) == memcmp(mem1, mem2, 13));
}

TEST(FTMemcmp, UnequalMemory) {
    const char* mem1 = "Hello, World!";
    const char* mem2 = "Hello, world!";
    CHECK(ft_memcmp(mem1, mem2, 13) == memcmp(mem1, mem2, 13));
}

TEST(FTMemcmp, EqualMemoryLimitComparison) {
    const char* mem1 = "Hello, World!";
    const char* mem2 = "Hello, world!";
    CHECK(ft_memcmp(mem1, mem2, 7) == memcmp(mem1, mem2, 7)); // Only comparing "Hello, "
}

TEST(FTMemcmp, DifferentLengthMemory) {
    const char* mem1 = "Hello, World";
    const char* mem2 = "Hello, ";
    CHECK(ft_memcmp(mem1, mem2, 13) == memcmp(mem1, mem2, 13));
}

TEST(FTMemcmp, NullCharacterComparison) {
    const char* mem1 = "Hello";
    const char* mem2 = "Hello\0World!";
    CHECK(ft_memcmp(mem1, mem2, 11) == memcmp(mem1, mem2, 11));
}

TEST(FTMemcmp, ZeroLengthComparison) {
    const char* mem1 = "Hello, World!";
    const char* mem2 = "Hello, world!";
    CHECK(ft_memcmp(mem1, mem2, 0) == memcmp(mem1, mem2, 0)); // Should always be 0 as nothing is compared
}

TEST(FTMemcmp, EmptyMemory) {
    const char* mem1 = "";
    const char* mem2 = "";
    CHECK(ft_memcmp(mem1, mem2, 5) == memcmp(mem1, mem2, 5));
}

TEST(FTMemcmp, SpecialCharacters) {
    const char* mem1 = "Hello, \t\nWorld!";
    const char* mem2 = "Hello, \t\nworld!";
    CHECK(ft_memcmp(mem1, mem2, 13) == memcmp(mem1, mem2, 13));
}

