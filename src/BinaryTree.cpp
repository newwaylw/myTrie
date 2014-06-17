/*
 * BinaryTree.cpp
 *
 *  Created on: May 28, 2014
 *      Author: wei
 */
#include <iostream>
#include "BinaryTree.hpp"
/*
template <class T>
BinaryTree<T>::BinaryTree() {
	root = 0;
}

template <class T>
BinaryTree<T>::~BinaryTree() {
	//delete all nodes
	deleteTree(root);
}

template <class T>
void BinaryTree<T>::deleteTree(node<T>* r) {
	if(r->lchild==0 && r->rchild==0){
      delete r;
      return;
	}
	deleteTree(r->lchild);
	deleteTree(r->rchild);
}

template <class T>
node<T>* BinaryTree<T>::search(const T key) {
	while(root){
        if(key == root->value)
    	    return root;
        if(key > root->value){
    	    root = root->rchild;
        }else{
        	root = root->lchild;
        }
	}
	return 0;
}

template <class T>
node<T>* BinaryTree<T>::buildTree(const T values[], size_t start, size_t end){
	if(start == end){
		node<T>* n = new node<T>();
		n->value = values[start];
		return n;
	}else{
		size_t mid = start + (end-start)/2;
		node<T>* n = new node<T>();
		n->value = values[mid];
		//std::cout <<"node:"<< n <<" value="<< n->value << std::endl;
		n->lchild = buildTree(values, start, mid);
		n->rchild = buildTree(values, mid+1, end);
		return n;
	}

}
*/

