#include <iostream>
#include <stdlib.h>
#include <string>
#include "Matrix.hpp"

using namespace std;
using namespace zich;

        Matrix::Matrix(){
            this->row=0;
            this->col=0;
        }
        Matrix::Matrix(const vector<double> &mat, int row, int col){
            this->row = row;
            this->col = col;
        }
        Matrix Matrix::operator+(Matrix &a){
            return Matrix();
            }
        Matrix Matrix::operator+(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator+(){
            return Matrix();
        }
        Matrix Matrix::operator+=(Matrix &a){
           return Matrix();
        }
        Matrix Matrix::operator+=(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator-(Matrix &a){
            return Matrix();
        }
       Matrix Matrix::operator-(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator-(){
            return Matrix();
        }
        Matrix Matrix::operator-=(Matrix &a){
            return Matrix();
        }
        Matrix Matrix::operator-=(double scalr){
            return Matrix();
        }
        bool Matrix::operator>(Matrix &a){
            return true;
        }
        bool Matrix::operator>=(Matrix &a){
            return true;
        }
        bool Matrix::operator<(Matrix &a){
            return true;
        }
        bool Matrix::operator<=(Matrix &a){
            return true;
        }
        bool Matrix::operator==(Matrix &a){
            return true; 
        }
        bool Matrix::operator!=(Matrix &a){
            return true;
        }
        // Matrix zich::operator*(double scalr){
        //     return Matrix();
        // }

        Matrix Matrix::operator++ (){
            return Matrix();
        }
        Matrix Matrix::operator++ (int n){
            return Matrix();
        }
        Matrix Matrix::operator-- (){
            return Matrix();
        }
        Matrix Matrix::operator-- (int n){
            return Matrix();
        }
        Matrix Matrix::operator*(Matrix &a){
            return Matrix();
        }
        Matrix zich::operator*(double scalr, Matrix &mat){
            return Matrix();
        }
        Matrix Matrix::operator*=(Matrix &a){
            return a;
        }
        Matrix Matrix::operator*=(double scalr){
            return Matrix();
        }
