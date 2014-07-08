/*
 * Trie.hpp
 *
 *  Created on: 13 Jun 2014
 *      Author: wei
 */

#ifndef TRIE_HPP_
#define TRIE_HPP_

#include <string>
#include <vector>
#include <iostream>
#include "TrieNode.hpp"
using namespace std;

template<class V>
class Trie {
private:
  TrieNode<char>* root;
  vector<V> valVector;

public:
  Trie(){root = new TrieNode<char>();}
  virtual ~Trie(){delete root;}

  void insert(const string& key, V value) {
    const char* s = key.c_str();
    size_t id = 0;
    TrieNode<char>* node = root;
    map<char, TrieNode<char>* > *childMap;
    while (s) {
      childMap = node->getChildren();
      cout<<*s<<endl;
      if (childMap->find(*s) != childMap->end()) {
    	  cout<<"node found!" <<endl;
          node = childMap->at(*s);
          s++;
          break;
      }
      //not found
      else {
        TrieNode<char> *tn = new TrieNode<char>(*s);
        node->addChild(tn);
      }

    }
    node->setId(++id);
    node->setTerminated();
    valVector.push_back(value);
  }

  V get(const string& key) {
    const char* s = key.c_str();
    //size_t id = 0;
    TrieNode<char>* node = root;
    map<char, TrieNode<char>* > *childMap;
    while (*s != '\0') {
      childMap = node->getChildren();
      if (childMap->find(*s)!= childMap->end()) {
    	node = childMap->at(*s);
        s++;
      }
      //not found
      else{
        return 0;
      }
    }
    if (node->isTerminated())//reach end
      return valVector[node->getId()];
    else return 0;
  }
};

#endif /* TRIE_HPP_ */
