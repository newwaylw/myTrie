/*
 * Trie.cpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#include "Trie.hpp"

Trie::Trie() {
	// TODO Auto-generated constructor stub
	root = new TrieNode<char>();
}

Trie::~Trie() {
	// TODO Auto-generated destructor stub
}

void Trie::insert(const string& key) {
	char* s = key.c_str();
	size_t id = 0;
	TrieNode<char>* node = root;
	while (*s != '\0'){
		vector<TrieNode<char>> *child = node->getChildren();
		//do a linear search for child node and see if key already exist
		//we can later turn this into binary search with a sorted list
		vector<TrieNode<char>>::iterator it = child->begin();
		for(;it != child->end(); it++){
			if (it->getKey() == *s){
				node = it;
				s++;
				break;
			}
		}
		//not found
		if(it == child->end()){
			TrieNode<char> tn(*s);
			node->addChild(tn);
		}

	}
	node->setId(++id);
	node->setTerminated();
}
