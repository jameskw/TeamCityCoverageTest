// TeamCityCoverageTests.UnitTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "../TeamCityCoverageTest/TeamCityCoverageTest2.h"

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Addition, CanAddTwoNumbers)
{
	TeamCityCoverageTest2 testObject;
	ASSERT_EQ(testObject.add(3, 5), 8);
}

