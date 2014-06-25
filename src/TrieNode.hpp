/*
 * TrieNode.hpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#ifndef TRIENODE_HPP_
#define TRIENODE_HPP_

#include <map>

using namespace std;
template <class K>
class TrieNode {
private:
	size_t id;
	K key;
	bool isTerminal;
	map<K,TrieNode>* childrenMap;
public:
	TrieNode(); //: isTerminal(false), id(0) {}
	TrieNode(K key); // :  isTerminal(false), id(0), key(key) {}
	virtual ~TrieNode();
	void setKey(K key){this->key = key;}
	K getKey(){return key;}
	size_t getId(){return id;}
	void setId(const size_t id){this->id = id;}
	void setTerminated(){isTerminal=true;}
	void addChild(TrieNode n){this->childrenMap->insert ( pair<K,TrieNode>(n.getKey() , n) );};
	map<K,TrieNode>* getChildren(){return childrenMap;};
};

#endif /* TRIENODE_HPP_ */
