#include <iostream>

using namespace std;








template<typename T, typename K>
K swap(T i, T j,K m )
{

	int t;
	for ( i = 0; i <5; i++)
	{
		for ( j = i; j <5; j++)
		{
			t = m[i][j];
		m[i][j] = m[j][i];
			m[j][i] = t;
			
		}
		
	}
	return m;
}



int main()
{
	const int i = 5;
	const int j = 5;
	int m[5][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	//Matrix matrix(3, 3);//

	swap(5,5,m);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			cout << m[i][j]<<"  ";
		cout << '\n';
	}
	return 1;
}
	  
