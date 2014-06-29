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
	map<K,TrieNode<K> >* childrenMap;
public:
	TrieNode(): isTerminal(false), id(0) {childrenMap = new map<K, TrieNode<K> >();}
	TrieNode(K key) :  isTerminal(false), id(0), key(key) {childrenMap = new map<K, TrieNode<K> >();}
	virtual ~TrieNode() {delete childrenMap;}
	void setKey(K key){this->key = key;}
	K getKey(){return key;}
	size_t getId(){return id;}
	void setId(const size_t id){this->id = id;}
	void setTerminated(){isTerminal=true;}
	bool isTerminated(){return isTerminal;}
	void addChild(TrieNode n){this->childrenMap->insert ( std::pair<K,TrieNode<K> >(n.getKey() , n) );};
	map<K,TrieNode>* getChildren(){return childrenMap;};
};

#endif /* TRIENODE_HPP_ */
