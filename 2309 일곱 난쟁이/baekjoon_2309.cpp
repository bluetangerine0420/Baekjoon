#include<iostream>
using namespace std;

int main() {
	int tall[9];
	int sum = 0;
	
	for (int i = 0; i < 9; i++)
	{
		cin >> tall[i];
		sum += tall[i];
	}
	for (int j = 0; j < 9; j++)
	{
		for (int k = 0; k < 9; k++) 
		{
			if(k!=j)
			{
				if (sum - (tall[j]+tall[k]))
				{
					tall[j] = 0;
					tall[k] = 0;
				}
		
		{
			
		}
	}
}