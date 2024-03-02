// Copyright 2024 Tushentsova Karina

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrime, TestEasy) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
}

TEST(CheckPrime, TestBigData) {
    EXPECT_TRUE(checkPrime(1e9 + 7));
}

TEST(NPrime, TestEasy) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrime, TestBigData) {
    EXPECT_EQ(nPrime(50000), 611953);
    EXPECT_EQ(nPrime(100000), 1299709);
}

TEST(NextPrime, TestEasy) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(NextPrime, TestBigData) {
    EXPECT_EQ(nextPrime(1e9 + 6), 1e9 + 7);
    EXPECT_EQ(nextPrime(1e9 + 7), 1e9 + 9);
}

TEST(SumPrime, TestEasy) {
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(7), 10);
}

TEST(SumPrime, TestBigData) {
    EXPECT_EQ(sumPrime(50000), 121013308);
    EXPECT_EQ(sumPrime(60000), 171848738);
}

TEST(SumPrime, TestDiffSum) {
    uint64_t s1 = sumPrime(7);
    uint64_t s2 = sumPrime(3);
    EXPECT_EQ(s1 - s2, 8);
}

TEST(SumPrime, TestSumSum) {
    uint64_t s1 = sumPrime(7);
    uint64_t s2 = sumPrime(11);
    EXPECT_EQ(s1 + s2, 27);
}

TEST(SumPrime, TestSumLess2Mill) {
    EXPECT_EQ(sumPrime(2 * 1e6), 142913828922);
}
