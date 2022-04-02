#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>


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
        Matrix operator+(Matrix &a);
        Matrix operator+(double scalr);
        Matrix operator+();
        Matrix operator+=(Matrix &a);
        Matrix operator+=(double scalr);
        Matrix operator-(Matrix &a);
        Matrix operator-(double scalr);
        Matrix operator-();
        Matrix operator-=(Matrix &a);
        Matrix operator-=(double scalr);
        Matrix operator>(Matrix &a);
        Matrix operator>=(Matrix &a);
        Matrix operator<(Matrix &a);
        Matrix operator<=(Matrix &a);
        Matrix operator==(Matrix &a);
        Matrix operator!=(Matrix &a);

        Matrix operator++ ();
        Matrix operator++ (int n);
        Matrix operator-- ();
        Matrix operator-- (int n);

        Matrix operator*(Matrix &mat);
        Matrix operator*=(Matrix &mat);
        Matrix operator*=(double scalr);

        friend Matrix operator*(double scalr, Matrix& mat);
        friend std::ostream& operator<<(ostream& os,const Matrix &m);
        friend std::istream& operator>>(istream& in, const Matrix& m);
        friend std::ostream& operator<<(ostream& os,const Matrix &m){
            // os << m << endl;
            return os;
        }
        friend std::istream& operator>>(istream& in, const Matrix& m){
            // in >> m >> endl;
            return in;
        }
        friend Matrix operator*(double scalr, Matrix& mat){
            // cout<<scalr*mat;
            return Matrix();
        }
    };
}
        