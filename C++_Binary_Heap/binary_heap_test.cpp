#include "catch.hpp"
#include "heap.h"

using namespace std;

TEST_CASE( "Testing operations on binary heap", "[Heap]") {

    Heap* testHeap = new Heap();

    SECTION("Checking if empty") {
      REQUIRE(testHeap->isempty() == true);
    }

    SECTION("Inserting an element") {
      testHeap->insert(100);
      REQUIRE(testHeap->findmin() == 100);
    }
    
    SECTION("Finding minimum element") {
        REQUIRE(testHeap->findmin() == 100);
    }

    SECTION("Deleting minimum element") {
      testHeap->insert(200);
      REQUIRE(testHeap->deletemin() == 100);
    }
}
