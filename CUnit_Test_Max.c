#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include </Users/dannyg/Desktop/CompSci/CompSci_Semester2/InProgress/SoftwareProject/UnitTestingA3/UnitTesting/avg_and_max.h>


void test_max(void) {
    
    double arr_t1[2] = {}; //empty set
    double arr_t2[1] = {35}; //one number
    double arr_t3[4] = {7,12,13,45}; //four unique numbers
    
    double arr_t4[4] = {2,1,0,0}; //multiple zero values
    double arr_t5[4] = {3,3,3,2}; //multiple values > zero
    double arr_t6[3] = {-1,-18,2}; //multiple values < zero
    
    
    CU_ASSERT_FALSE(max(arr_t1, 2) == 0);
    CU_ASSERT(max(arr_t2, 1) == 35);
    CU_ASSERT(max(arr_t3, 4) == 45);
    
    CU_ASSERT(max(arr_t4, 4) == 2);
    CU_ASSERT(max(arr_t5, 4) == 3);
    CU_ASSERT(max(arr_t6, 3) == 2);
}

void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("CUnit_Test_Max", 0, 0);
   
    CU_add_test(suite, "test_max", test_max);
    
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main() {
    
    runAllTests();
    
    return 0;
    
}
