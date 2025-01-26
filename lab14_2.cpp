#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 
void showMatrix(const bool A[][N]){
    for(int i = 0; i < N ; i++){
        for(int u = 0; u < N ; u++){
            cout << A[i][u] << " " ;
        }
        cout << endl ;
    }
}

void inputMatrix(double B[][N]){
    for(int i = 0 ; i < N ; i++){
        cout << "Row " << i+1 << ": " ;
        for(int u = 0 ; u < N ; u++){
            cin >> B[i][u] ;
        }
        
    }
    
   
}

void findLocalMax(const double A[][N], bool B[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int u = 0 ; u < N ; u ++){
            if (i > 0 && i < N - 1 && u > 0 && u < N - 1) {
                if(A[i][u]>=A[i][u-1] && A[i][u]>=A[i][u+1] && A[i][u]>=A[i-1][u] && A[i][u]>=A[i+1][u]){
                    B[i][u] = true ;
                }else{
                    B[i][u] = false ; 
                }
            }else{
                B[i][u] = false ;
            }

        }
    }
}