#include "pch.h"
#include "C:\Users\Admin\Documents\VisualStudioProjects\UnitTesting\GoogleTest\GoogleTestProject\GoogleTestProject\gtestproj.h"

TEST(TestCaseName, TestName) {
	Func t;
	
	EXPECT_EQ(10, t.doSomeMath(2));
	EXPECT_EQ(25, t.doSomeMath(5));
	EXPECT_EQ(115, t.doSomeMath(23));
	EXPECT_EQ(-30, t.doSomeMath(-6));
	EXPECT_TRUE(true);
	
}

TEST(TestCaseName1, TestName1) {
	Func t;

	EXPECT_EQ(20, t.doSomeMath(4));
	EXPECT_EQ(35, t.doSomeMath(7));
	EXPECT_EQ(40, t.doSomeMath(8));
	EXPECT_EQ(-500, t.doSomeMath(-100));
	EXPECT_TRUE(true);

}

TEST(TestCaseName2, TestName2) {
	Func t;

	EXPECT_EQ(10, t.doSomeMath(2));
	EXPECT_EQ(10, t.doSomeMath(2));
	EXPECT_EQ(10, t.doSomeMath(2));
	EXPECT_EQ(10, t.doSomeMath(2));
	EXPECT_TRUE(true);

}