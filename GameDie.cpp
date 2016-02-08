#include <iostream>
#include <cstdlib>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	number = 0;
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
	int n;
	cout<<"enter a number between 4 and 20"<<endl;
	cin>>n;
	number = rand() % n + 1;
	cout<<"random number  = "<<number<<endl;
}
