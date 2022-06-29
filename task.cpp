#include "unity.h"
#include <ATM-machine.h>


#include <ATM-machine.h>
#define PROJECT_NAME    "ATM-machine"




void test_login(void);
void test_checkBalance(float balance);
float test_moneyDeposit(float balance);
float test_moneyWithdraw(float balance);
void test_menuExit(void);
void test_errorMessage(void);



void setUp(){}

void tearDown(){}


int main()
{

  UNITY_BEGIN();


  RUN_TEST(test_login);<br/>
  RUN_TEST(test_checkBalance);
  RUN_TEST(test_moneyDeposit);
  RUN_TEST(test_moneyWithdraw);
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);

  
  return UNITY_END();
}
