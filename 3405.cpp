#include <iostream>
#include <vector>
using namespace std;

const int column=8;
const int line=100; 

int tab[line][column];

vector<int>tabV;
int copyTableToVector()
{
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<line;j++)
		{
			tab[j][i]=rand()%101;//zakres liczb pseudolosowych 0-100
			if(j==5) // wybieramy 5 zamiast 0
			{
				tabV.push_back(tab[j][i]);
			}
		}
	}
	int* last=&tabV[tabV.size()-1];//wskaźnik na ostatnim elemencie vectora;
	return *last;
	
}

int main()
{
	cout<<"ostani element vectora: "<<copyTableToVector()<<"\n";
	
	return 0;
}
