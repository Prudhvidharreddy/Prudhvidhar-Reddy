	
	#include "unity.h"
	#include"test_operations.h"
	#include"sum.h"
	#include"sub.h"
	#include"mul.h"
	#include"mod.h"
	#include"fact.h"

	
	void test_sum(void);
	void test_sub(void);
	void test_mul(void);
	void test_mod(void);
	void test_fact(void);
	void setUp()
	{	}
	void tearDown()
	{	}
	
	

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_sum);
		RUN_TEST(test_sub);
		RUN_TEST(test_mul);
		RUN_TEST(test_mod);
		RUN_TEST(test_fact);
		
		

  		return UNITY_END();
	}

	void test_sum(void)
	{
  		TEST_ASSERT_EQUAL(30, sum(10, 20));
  		TEST_ASSERT_EQUAL(-30, sum(-50, 20));
	}
	void test_sub(void)
	{
  		TEST_ASSERT_EQUAL(30,sub(50,20));
  		TEST_ASSERT_EQUAL(10,sub(30,20));
	}

	void test_mul(void)
	{
  		TEST_ASSERT_EQUAL(6,mul(2,3));
  		TEST_ASSERT_EQUAL(8,mul(2,4));
	}

	

	void test_mod(void)
	{
  		TEST_ASSERT_EQUAL(6,mod(6,11));
  		TEST_ASSERT_EQUAL(8,mod(8,15));
	}

	void test_fact(void)
	{
  		TEST_ASSERT_EQUAL(2,fact(2));
  		TEST_ASSERT_EQUAL(6,fact(3));
	}

	

	



