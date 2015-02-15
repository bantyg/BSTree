#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,teardown,fixtureSetup,fixtureTearDown,test_to_create_node_for_tree,test_to_create_binary_search_tree,test_to_indert_data_in_binary_search_tree,test_to_insert_data_at_left_side_of_binary_search_tree,test_createBSTree_creates_a_tree_with_NULL_root,test_insert_inserts_5_as_root_of_the_tree_when_root_is_NULL_and_returns_1,test_insert_inserts_at_left_when_root_5_and_2_sent_to_insert_and_returns_2_as_number_of_nodes_in_the_tree,test_insert_inserts_at_right_when_root_5_and_6_sent_to_insert_and_returns_number_of_nodes_in_the_tree;
Test test[] = {"test_to_create_node_for_tree",test_to_create_node_for_tree,"test_to_create_binary_search_tree",test_to_create_binary_search_tree,"test_to_indert_data_in_binary_search_tree",test_to_indert_data_in_binary_search_tree,"test_to_insert_data_at_left_side_of_binary_search_tree",test_to_insert_data_at_left_side_of_binary_search_tree,"test_createBSTree_creates_a_tree_with_NULL_root",test_createBSTree_creates_a_tree_with_NULL_root,"test_insert_inserts_5_as_root_of_the_tree_when_root_is_NULL_and_returns_1",test_insert_inserts_5_as_root_of_the_tree_when_root_is_NULL_and_returns_1,"test_insert_inserts_at_left_when_root_5_and_2_sent_to_insert_and_returns_2_as_number_of_nodes_in_the_tree",test_insert_inserts_at_left_when_root_5_and_2_sent_to_insert_and_returns_2_as_number_of_nodes_in_the_tree,"test_insert_inserts_at_right_when_root_5_and_6_sent_to_insert_and_returns_number_of_nodes_in_the_tree",test_insert_inserts_at_right_when_root_5_and_6_sent_to_insert_and_returns_number_of_nodes_in_the_tree};
char testFileName[] = {"BSTreeTest.c"};
void _setup(){/*CALL_SETUP*/}
void _teardown(){/*CALL_TEARDOWN*/}
void fixtureSetup(){}
void fixtureTearDown(){}
//code to be updated ends

int testCount;
int passCount;
int currentTestFailed;

int assert_expr(int expr, const char* fileName, int lineNumber, const char* expression){
	if(expr) return 0;
	currentTestFailed = 1;
	printf("\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
	return 1;
}
int assert_equal(int val1, int val2, const char* fileName, int lineNumber,const char* expr1,const char* expr2){
	if(val1 == val2) return 0;
	currentTestFailed = 1;
	printf("\t %d == %d: failed in assertEqual(%s,%s) at %s:%d\n",val1,val2,expr1,expr2, fileName,lineNumber);
	return 1;
}

void runTest(char* name, TestFn test){
	testCount++,currentTestFailed=0;
	printf("**  %s\n",name);
	_setup();
		test();
	_teardown();
	if(!currentTestFailed) passCount++;	
}
int main(int argc, char const *argv[]){		
	int i,total = sizeof(test)/sizeof(Test);	
	fixtureSetup();
	testCount=0,passCount=0;
	printf("**------ %s ------\n",testFileName);
	for (i = 0; i < total; ++i)
		runTest(test[i].name,test[i].fn);	
	printf("** Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
	fixtureTearDown();	
	return 0;
}