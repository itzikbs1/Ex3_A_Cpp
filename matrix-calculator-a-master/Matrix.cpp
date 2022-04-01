#include <iostream>
#include <stdlib.h>
#include <string>
// #include <vector>
// #include <vecintrin.h>
#include "Matrix.hpp"
#include <stdexcept>

using namespace std;
using namespace zich;

        Matrix::Matrix(){
            
        }
        Matrix::Matrix(vector<double> mat, int row, int col){

        }
        Matrix Matrix::operator+(Matrix a){
                return Matrix();
            }

        Matrix Matrix::operator+(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator+(){
            return Matrix();
        }

        Matrix Matrix::operator+=(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator+=(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator-(Matrix a){
            return Matrix();
        }

       Matrix Matrix::operator-(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator-(){
            return Matrix();
        }
        Matrix Matrix::operator-=(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator-=(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator>(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator>=(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator<(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator<=(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator==(Matrix a){
            return Matrix(); 
        }
        Matrix Matrix::operator!=(Matrix a){
            return Matrix();
        }
        Matrix Matrix::operator*(double scalr){
            return Matrix();
        }
        Matrix Matrix::operator*(Matrix a){
            return Matrix();
        }
        Matrix operator*(double scalr, Matrix mat){
            return Matrix();
        }
        Matrix Matrix::operator*=(Matrix a){
            return a;
        }
        Matrix Matrix::operator*=(double scalr){
            return Matrix();
        }
        ostream& operator<<(ostream& os, Matrix &m){
            return os;
        }
        //hello
        istream& operator>>(istream& in, Matrix m){
            return in;
        }
