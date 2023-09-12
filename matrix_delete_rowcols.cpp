#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

const int N = 4;

class Matrix
{
private:
    double data[N][N];
    int row, column;
    
public:
	Matrix();
	void operator()(int row, int column);
};
 
Matrix::Matrix()
	{
        // РљРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ
        for (int row = 0; row < N; ++row)
	{
		for (int column = 0; column < N; ++column)
		{
            	    data[row][column] = 0 + rand() % 9;
		    cout << data[row][column] << " ";
		}
	cout << "\n";
	}
}
 
void Matrix::operator()(int row, int column)
{
	for (int i = row-1; i < N; ++i)
    	    for (int j = 0; j < N; ++j)
        		    data[i][j] =  data[i+1][j];
	for (int i = 0; i < N; ++i)
    	    for (int j = column-1; j < N; ++j)
        		    data[i][j] = data [i][j+1];
        for (int i = 0; i < N-1; ++i)
	{
		for (int j = 0; j < N-1; ++j)
		{
		 cout << data[i][j] << " ";
		}
		
	cout << "\n";
	}

}

int main()
{
	int row, column;
	bool check = false;
	cout << "---------------------------------" << endl;
	Matrix matrix;
	cout << "---------------------------------" << endl;
	
	while (check == false)
	{
	cout << "Enter the row's and the column's numbers: " << endl;	
	cin >> row >> column;
		if (row > 0 && row <= N && column > 0 && column <= N)
		check = true;
		else
		{
		cout << "Please, enter adequate values" << endl;
		cout << "---------------------------------" << endl;
		}
	}
	cout << "---------------------------------" << endl;
	matrix(row, column); 
 
    return 0;
}
