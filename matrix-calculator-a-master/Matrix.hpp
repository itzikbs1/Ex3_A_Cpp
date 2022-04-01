#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
// #include <vecintrin.h>

using namespace std;
namespace zich{



class Matrix{

        private:
        vector<double> mat;
        int row;
        int col;

        // Matrix(){
        //     this->mat = {};
        //     this->row = 0;
        //     this->col = 0;
        // }
        // Matrix(std::vector<double> mat={}, int row=0, int col=0){Matrix::mat = mat, Matrix::row = row, Matrix::col = col;}

            // this->mat = mat;
            // this->row = row;
            // this->col = col;
        // }

        // Matrix(vector<double> mat={}, int row=0, int col=0){
        //     this->mat = mat;
        //     this->row = row;
        //     this->col = col;
        // }
        // Matrix(Matrix m){
        //     this->mat = m.mat;
        //     this->row = m.row;
        //     this->col = m.col;
        // }
        public:
        Matrix();
        Matrix(vector<double> mat, int row, int col);
        Matrix operator+(Matrix a);
        Matrix operator+(double scalr);
        Matrix operator+();
        Matrix operator+=(Matrix a);
        Matrix operator+=(double scalr);
        Matrix operator-(Matrix a);
        Matrix operator-(double scalr);
        Matrix operator-();
        Matrix operator-=(Matrix a);
        Matrix operator-=(double scalr);
        Matrix operator>(Matrix a);
        Matrix operator>=(Matrix a);
        Matrix operator<(Matrix a);
        Matrix operator<=(Matrix a);
        Matrix operator==(Matrix a);
        Matrix operator!=(Matrix a);
        friend ostream& operator<<(ostream& os, Matrix &m);
        friend istream& operator>>(istream& os, Matrix m);
        Matrix operator*(double scalr);
        Matrix operator*(Matrix mat);
        // friend Matrix operator*(Matrix mat, double scalr);
        friend Matrix operator*(double scalr, Matrix mat);
        Matrix operator*=(Matrix mat);
        Matrix operator*=(double scalr);
        // void add(Matrix m1, Matrix m2);
        // void add(Matrix m1, double scalr);

        // void (Matrix m1, Matrix m2);


    };
}