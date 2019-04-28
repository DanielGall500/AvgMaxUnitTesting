#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include </Users/dannyg/Desktop/CompSci/CompSci_Semester2/InProgress/SoftwareProject/UnitTestingA3/UnitTesting/avg_and_max.h>


void test_average(void) {
    
    double arr_t1[2] = {}; //empty set
    double arr_t2[1] = {10}; //one number
    double arr_t3[4] = {55, 12, 30, 6}; //four unique numbers
    
    double arr_t4[4] = {12,0,0,2}; //multiple zero values
    double arr_t5[4] = {1,1,1,1}; //multiple values > zero
    double arr_t6[3] = {-3,2,-5}; //multiple values < zero
    
    
    CU_ASSERT(average(arr_t1, 2) == 0);
    CU_ASSERT_FALSE(average(arr_t2, 1) == 10);
    CU_ASSERT_FALSE(average(arr_t3, 4) == 25.75);
    
    CU_ASSERT_FALSE(average(arr_t4, 4) == 3.5);
    CU_ASSERT_FALSE(average(arr_t5, 4) == 1);
    CU_ASSERT_FALSE(average(arr_t6, 3) == -2);
}

void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("CUnit_Test_Avg", 0, 0);
   
    CU_add_test(suite, "test_average", test_average);
    
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main() {
    
    runAllTests();
    
    return 0;
    
}
