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
#include "TrieNode.hpp"
using namespace std;

template<class V>
class Trie {
private:
  TrieNode<char> root;
  vector<V> valVector;

public:
  Trie();
  virtual
  ~Trie();

  void insert(const string& key, V value) {
    char* s = key.c_str();
    size_t id = 0;
    TrieNode<char>* node = root;
    while (*s != '\0') {
      map<char, TrieNode<char>> *childMap = node->getChildren();
      if (childMap->find(s)) {
          node = childMap[*s];
          s++;
          break;
      }
      //not found
      else {
        TrieNode<char> tn(*s);
        node->addChild(tn);
      }

    }
    node->setId(++id);
    node->setTerminated();
    valVector.push_back(value);
  }

  V get(const string& key) {
    char* s = key.c_str();
    size_t id = 0;
    TrieNode<char>* node = root;
    while (*s != '\0') {
      map<char, TrieNode<char>> *childMap = node->getChildren();
      if (childMap->find(s)) {
        node = childMap[*s];
        s++;
        break;
      }
      //not found
      else{
        return null;
      }
      //reach end
      return valVector[node->getId()];
    }
  }
};

#endif /* TRIE_HPP_ */
