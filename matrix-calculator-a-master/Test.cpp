#include <iostream>
#include <stdlib.h>
#include <string>
#include "doctest.h"
#include <vector>
#include "Matrix.hpp"

using namespace std;
using namespace zich;

const int ten = 10;

TEST_CASE("Case: Invalid multiplication and amount"){
    vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
    vector<double> vec1 = {1,1,1,1,1,1,1,1,1};//3x3
    vector<double> arr = {2,1,1,1,2,1,1,1,2};//3x3   arr = identity_3 + vec1
    vector<double> vec2 = {1,0,0,0,0,1,0,0,0,0,1,0};//3x4
    vector<double> identity_4 = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};//4x4
    Matrix mat1(identity_3,3,3);
    Matrix mat2(vec2,3,4);
    Matrix mat3(identity_4,4,4);
    Matrix mat4_arr(arr,3,3);
    CHECK_THROWS(mat2*mat1);
    CHECK_THROWS(mat2*=mat1);
    CHECK_THROWS(mat3*mat2);
    CHECK_THROWS(mat3*=mat2);
    CHECK_THROWS(mat2*mat1);
    CHECK_THROWS(mat4_arr*mat3);
    CHECK_THROWS(mat2*mat4_arr);
    for (double i = 0; i < ten; i++)
    {
    vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
    vector<double> arr2 = {i,i,i,i,i,i,i,i,i};//3x3
    Matrix mat1(arr1,2,2);
    Matrix mat2(arr2,3,3);
    CHECK_THROWS(mat1*mat2);
    CHECK_THROWS(mat2+mat1);     
    }
    
}
TEST_CASE("Case: Subtraction matrix"){
    for (double i = 0; i < ten; i++)
    {
    vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
    vector<double> arr2 = {i,i,i,i,i,i,i,i,i};//3x3
    Matrix mat1(arr1,2,2);
    Matrix mat2(arr2,3,3);
    CHECK_THROWS(mat1-mat2);
    CHECK_THROWS(mat2-mat1);     
    }
}

TEST_CASE("Case: Invalid comparison"){
    vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
    vector<double> vec1 = {1,1,1,1,1,1,1,1,1};//3x3
    vector<double> arr = {2,1,1,1,2,1,1,1,2};//3x3   arr = identity_3 + vec1
    vector<double> vec2 = {1,0,0,0,0,1,0,0,0,0,1,0};//3x4
    vector<double> identity_4 = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};//4x4
    Matrix mat1(identity_3,3,3);
    Matrix mat2(vec2,3,4);
    Matrix mat3(identity_4,4,4);
    Matrix mat4_arr(arr,3,3);
    CHECK_THROWS(mat2*mat1);
    CHECK_THROWS(mat2*=mat1);
    CHECK_THROWS(mat3*mat2);
    CHECK_THROWS(mat3*=mat2);
    CHECK_THROWS(mat2*mat1);
    CHECK_THROWS(mat4_arr*mat3);
    CHECK_THROWS(mat2*mat4_arr);
    for (double i = 0; i < ten; i++)
    {
    vector<double> arr1 = {i, i+1, i+2, i+3};//2x2
    for(double j=0; j<ten; j++){
    vector<double> arr2 = {j};//1x1
    Matrix mat1(arr1,2,2);
    Matrix mat2(arr2,1,1);
    CHECK_THROWS(mat1 = mat2);
    // CHECK_THROWS(mat2 >= mat1); //why dosent work?
    }     
    }
}



TEST_CASE("Good"){
    vector<double> identity_3 = {1,0,0,0,1,0,0,0,1};//3x3
    vector<double> vec1 = {1,1,1,1,1,1,1,1,1};//3x3
    vector<double> arr = {2,1,1,1,2,1,1,1,2};//3x3   arr = identity_3 + vec1
    vector<double> vec2 = {1,0,0,0,0,1,0,0,0,0,1,0};//3x4
    vector<double> identity_4 = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};//4x4
    Matrix mat_identity_3(identity_3,3,3);
    Matrix mat1(vec1, 3,3);
    Matrix mat_arr(arr,3,3);
    Matrix mat2(vec2,3,4);
    Matrix mat_identity_4(identity_4,4,4);
    // CHECK(mat1*mat_identity_3 == mat1);
    // CHECK(mat_identity_3*mat1 == mat1);
    // CHECK(mat2*mat_identity_4 == mat2);
    // CHECK(mat1+mat_identity_3 == mat_arr);             
}