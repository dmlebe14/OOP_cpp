#include <iostream>
#include <cmath>   
#include <cassert>
#include <string>
using namespace std;

const int N = 10;

class Matrix
{
private:
    double data[10][10];
    
public:
	Matrix();
	double& operator()(int row, int column);
	const double& operator()(int row, int column) const; 
	void operator()();
};
 
Matrix::Matrix()
{
        // РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ
        for (int row = 0; row < N; ++row)
            for (int column = 0; column < N; ++column)
                data[row][column] = 0.0;
}	
 
double& Matrix::operator()(int row, int column)
{
    assert(column >= 0 && column < N);
    assert(row >= 0 && row < N);
 
    return data[row][column];
}
 
const double& Matrix::operator()(int row, int column) const
{
    assert(column >= 0 && column < N);
    assert(row >= 0 && row < N);
 
    return data[row][column];
}

void Matrix::operator()()
{
    for (int row = 0; row < N; ++row)
        for (int column = 0; column < N; ++column)
            data[row][column] = 0 + rand() % 9; 
}


int main()
{
	int row, column;
	cout << "Enter the row's and the column's numbers: " << endl;
	cin >> row >> column;
	Matrix matrix;
	matrix(); 
	for (int row = 0; row < N; ++row)
	{	
		for (int column = 0; column < N; ++column)
			cout << matrix(row, column) << " ";   //РІС‹РІРѕРґ РјР°С‚СЂРёС†С‹
		cout << "\n";
	}	
	cout << "Final result: a(" << row << ", " << column << ") = " << matrix(row, column) << endl;
 
    return 0;
}
