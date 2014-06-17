/*
 * main.cpp
 *
 *  Created on: 7 Jun 2014
 *      Author: wei
 */

#include <iostream>
#include <algorithm>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, const char* argv[]){
	int arr[8] = {2,4,92,52,13,38,9,21};
	sort(arr,arr+8);
	cout <<"building tree" << endl;
	node<int>* r = BinaryTree<int>::buildTree(arr,0,7);

	BinaryTree<int> *btree = new BinaryTree<int>(r);
	node<int> *d = btree->search(13);
	cout << d->value <<endl;
	delete btree;
}


