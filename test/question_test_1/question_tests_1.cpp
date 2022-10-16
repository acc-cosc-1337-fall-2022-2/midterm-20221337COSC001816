#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Get Cookies") 
{
	REQUIRE(get_cookie_ingredients(48) == "1.5, 1, 2.75");
	REQUIRE(get_cookie_ingredients(96) == "3, 2, 5.5");
	REQUIRE(get_cookie_ingredients(24) == ".75, .5, 1.375");

}