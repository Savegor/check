#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand (time(NULL));
	int odin[2] = {1,1};
	int n;
	cout << "Enter the size of the matrix = ";
	cin >> n;
	int mas[n][n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = odin[rand()%2];
			cout << "  ";
			cout << mas[i][j];
		}
	cout << endl;
    
    }
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < n; j++ )
    	{
    		if (i != 0)
    		{
    		sum += mas[i][j]*mas[i-1][j];
    		
    		}
    		else if (i == 0 )
    		{
    			sum += mas[i][j]*mas[n-1][j];
    		}

    	}
    }
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < n; j++ )
    	{
    		if (j != 0)
    		{
    		sum += mas[i][j]*mas[i][j-1];
    		
    		}
    		else if (j == 0 )
    		{
    			sum += mas[i][j]*mas[i][n-1];
    		}

    	}
    }
    cout <<"summatrix = "<< sum<< endl;
    

}
	


