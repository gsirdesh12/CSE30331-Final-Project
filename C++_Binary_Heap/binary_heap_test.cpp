#include "catch.hpp"

using namespace std;

TEST_CASE( "Elements can be inserted into binary heap ", "[insert]") {

    Heap* testHeap = new Heap();

    testHeap->insert(100);
    REQUIRE(testHeap->deletemin() == 100);

}
