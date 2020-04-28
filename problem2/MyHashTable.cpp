#include <sstream>
#include "MyHashTable.h"

using namespace std;

// Default constructor. Do not modiify.
MyHashTable::MyHashTable() {
  for (size_t i = 0; i < CAPACITY; i++) {
    table[i] = new vector<pair<string, int>>;
  }
}

// Simple hash function. Do not modify.
size_t MyHashTable::hash(string name) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < name.size(); i++) {
		accumulator += name.at(i);
	}
	return accumulator % CAPACITY;
}

void MyHashTable::insertItem(string name, int perm) {

}

void MyHashTable::deleteItem(string name) {

}

string MyHashTable::toString() const {
  return "";
}


MyHashTable::MyHashTable(const MyHashTable &orig) {

}

MyHashTable::~MyHashTable() {

}
