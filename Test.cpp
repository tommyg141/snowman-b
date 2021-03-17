/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}
TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(12312312)) == nospaces("      \n _===_\\\n(O..)\n ( : )\\\n(\" \")"));
    CHECK(nospaces(snowman(22222222)) == nospaces(" _____\n .....\n\\(o.o)/\n (] [) \n (  \"  \")"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41114411)) == nospaces("  ___  \n (_*_)\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114441)) == nospaces("_===_\n(.,.)\n(   )\n( : )"));
    CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(> <)\n( : )"));
    CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(nospaces(snowman(11234411)) == nospaces("_===_\n(o,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11324411)) == nospaces("_===_\n(O,o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11444411)) == nospaces("_===_\n(-,-)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11244411)) == nospaces("_===_\n(o,-)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33221111)) == nospaces("   _  \n  /_\\\n(o_o)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11221122)) == nospaces("_===_\n(o,o)\n<(] [)>\n(  \"  \")"));
    CHECK(nospaces(snowman(11221133)) == nospaces("_===_\n(o,o)\n<(> <)>\n( __ )"));
    CHECK(nospaces(snowman(21223111)) == nospaces(" _____\n .....\n(o,o)\n/( : )>\n( : )"));
    CHECK(nospaces(snowman(31123311)) == nospaces("   _  \n  /_\\\n(.,o)\n/( : )\\\n( : )"));
    CHECK(nospaces(snowman(41221134)) == nospaces("  ___  \n (_*_)\n(o,o)\n<(> <)>\n(   )"));
    CHECK(nospaces(snowman(11221114)) == nospaces("_===_\n(o,o)\n<( : )>\n(   )"));
    CHECK(nospaces(snowman(11221111)) == nospaces("_===_\n(o,o)\n<( : )>\n( : )"));
}
// const string H[] ={" ", "      \n _===_", " _____\n .....", "   _  \n  /_\\", "  ___  \n (_*_)"};
TEST_CASE("Hat"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces(" _____\n .....\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(31114411)) == nospaces("   _  \n  /_\\\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41114411)) == nospaces("  ___  \n (_*_)\n(.,.)\n( : )\n( : )"));
}
//{"",",", ".", "_", " "};
TEST_CASE("Nose"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(. .)\n( : )\n( : )"));

}
//={"","." ,"o","O" ,"-" }; HNLRXYTB
TEST_CASE("LeftEye"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

}
//={"","." ,"o","O" ,"-" }; HNLRXYTB
TEST_CASE("RightEye"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));

}
//{""," " ,"\\" ," " ," " };
//{"","<" ," " ,"/" ," " };HNLRXYTB
TEST_CASE("LeftArm"){
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11112411)) == nospaces("_===_\n\\(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11113411)) == nospaces("_===_\n(.,.)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

}
//{""," " ,"/" ," " ," " };
// {"",">" ," " ,"\\" ," " };HNLRXYTB
TEST_CASE("RightArm"){
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11114211)) == nospaces("_===_\n(.,.)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114311)) == nospaces("_===_\n(.,.)\n( : )\\\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

}
//{""," : " ,"] [" ,"> <" ,"   " };HNLRXYTB
TEST_CASE("Torso"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(> <)\n( : )"));
    CHECK(nospaces(snowman(11114441)) == nospaces("_===_\n(.,.)\n(   )\n( : )"));

}
//{"" , " : " ,"  \"  \"" ," __ " ,"   " };HNLRXYTB
TEST_CASE("Base"){
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n(  \"  \")"));
    CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n( __ )"));
    CHECK(nospaces(snowman(11114414)) == nospaces("_===_\n(.,.)\n( : )\n(   )"));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(444444444));
    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(15111111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11115111));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(01111111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111110));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11271));
    CHECK_THROWS(snowman(121411));
    CHECK_THROWS(snowman(1412123));
  
}



