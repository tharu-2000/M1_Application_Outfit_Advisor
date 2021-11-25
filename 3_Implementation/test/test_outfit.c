#include "unity.h"
#include "outfit.h"

/* Modify these two lines according to the project */
#include "outfit.h"
#define PROJECT_NAME    "Outfit_Advisor"

/* Prototypes for all the test functions */
void test_outfit(void);
void test_bust(void);
void test_waist(void);
void test_highHip(void);
void test_hip(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_outfit);
  RUN_TEST(test_bust, 34);
  RUN_TEST(test_waist, 26);
  RUN_TEST(test_highHip, 33);
  RUN_TEST(test_hip, 35);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

int main(void)
{

/* Write all the test functions */ 
    /* Dummy fail*/
  // TEST_ASSERT_EQUAL(0, file does not exist);
  
}