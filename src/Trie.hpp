/*
 * Trie.hpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#ifndef TRIE_HPP_
#define TRIE_HPP_

#include <string>
#include "TrieNode.hpp"
using namespace std;

class Trie {
private:
	TrieNode<char> root;
	size_t mSize;
	vector valVector;

public:
	Trie() : mSize(0) {}
	virtual ~Trie();

	void insert(const string& key);
	size_t get(const string& key);
};

#endif /* TRIE_HPP_ */
