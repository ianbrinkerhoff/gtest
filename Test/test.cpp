#include "pch.h"
#include "GoogleTestProject/gtestproj.h"

GoogleTestProject gtp = new GoogleTestProject();

Tests t = new Tests();

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

