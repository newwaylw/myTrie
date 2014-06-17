/*
 * TrieNode.hpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#ifndef TRIENODE_HPP_
#define TRIENODE_HPP_

using namespace std;
template <class K>
class TrieNode {
private:
	size_t id;
	K key;
	bool isTerminal;
	vector<TrieNode> children;
public:
	TrieNode() : isTerminal(false), id(0) {}
	TrieNode(K key) :  isTerminal(false), id(0), key(key) {}
	virtual ~TrieNode();
	void setKey(K key){this->key = key;}
	K getKey(){return key;}
	size_t getId(){return id;}
	void setId(const size_t id){this->id = id;}
	void setTerminated(){isTerminal=true;}
	void addChild(TrieNode n){this->children.push_back(n);};
	vector<TrieNode> getChildren(){return children;};
};

#endif /* TRIENODE_HPP_ */
