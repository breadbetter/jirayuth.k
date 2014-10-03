#include <iostream>
#include <string>
#include "tree.h"
#include <time.h>
#include <ctime>
using namespace std;


void insert_num(Tree<int>& mytree){

	for (int i = 0; i<100; i++)
	{
		mytree.insert(rand() % 101);
	}


}
void main()
{	
	Tree<int> mytree, newtree;
	int random;
	int n, value;
	cout << "Enter insertion: ";
	cin >> n;
	mytree.data = new int[n];
	for (int i = 0; i <n; i++){
		random = rand() % 101;
		
		cout << random << " ";
		mytree.insert(random);
	}
	mytree.inorder();

	//sorry about my lab ,I can't do it. 

}
