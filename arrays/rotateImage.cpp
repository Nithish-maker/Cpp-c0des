#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0; i < matrix.size(); i++)
    {
		for(int j = 0; j < i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }        
    }
    for(int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
	for(auto i : matrix)
		for(auto j : i)
			cout<<j<<" ";
	cout<<endl;
	return 0;
}
