#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int mazeSize = 0;
	double percoalation_Percentage = 0.0;

	//size of the maze
	cout<< "Enter the size of the maze: ";
	cin>> mazeSize;
	cout<<endl;

	cout<<"Enter Percolation Percentage: ";
	cin>>percoalation_Percentage;
	cout<<endl;

	//maze
	int maze[mazeSize][mazeSize] = {0};

	//initialize random seed
	srand(time(NULL));
	for(int row = 0; row < mazeSize; ++row){
		for(int col = 0; col < mazeSize; ++col){
			maze[row][col] = (rand() % 2) < percoalation_Percentage ; 
		}
	}

	//display maze
	for(int row = 0; row < mazeSize; ++row){
		for(int col = 0; col < mazeSize; ++col){
			cout << maze[row][col] << " "; 
		}
		cout<<endl;
	}	
	return 0;
}