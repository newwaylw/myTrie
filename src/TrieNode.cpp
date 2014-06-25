/*
 * TrieNode.cpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#include "TrieNode.hpp"

TrieNode::TrieNode() : isTerminal(false), id(0) {
  childrenMap = new map<K, TrieNode>();
}

TrieNode::~TrieNode() : isTerminal(false), id(0), key(key){
  childrenMap = new map<K, TrieNode>();
}
