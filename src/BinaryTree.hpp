/*
 * BinaryTree.hpp
 *
 *  Created on: 7 Jun 2014
 *      Author: wei
 */

//#ifndef BINARYTREE_HPP_
//#define BINARYTREE_HPP_

//function templates must go here
template <class T>
struct node {
	size_t id;
	T value;
	node* lchild;
	node* rchild;
};

template <class T>
class BinaryTree {
private:
	node<T> *root;

  public:
	BinaryTree();
	BinaryTree(node<T>* r);
	~BinaryTree();

	static node<T>* buildTree(const T values[], size_t start, size_t end);
	void insert(const T key);
	node<T>* search(const T key);
	void deleteTree(node<T>* r);

};

template <class T>
BinaryTree<T>::BinaryTree() {
	root = 0;
}

template <class T>
BinaryTree<T>::BinaryTree(node<T>* r){
	root = r;
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

//static only needs to be in declaration, not definition here.
template <class T>
node<T>* BinaryTree<T>::buildTree(const T values[], size_t start, size_t end) {
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
//#endif /* BINARYTREE_HPP_ */
