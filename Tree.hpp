#include<stdio.h>

using namespace std;

struct node {
  public:
  int value;
  node* left;
  node* right;
  node();
  node(int data);

//~node();
  }; 
 // node();
//  node(int data);

namespace ariel{
class Tree {

public:

int s;
node* head;
node* temp;
Tree();
node* find(int i);
int size();
void remove(int x);
bool contains(int x);
void insert(int x);
int right(int i);
int left(int i);
int parentRec(int data, node* t, node* p);
int parent(int i);
void printRec(node* t);
void print();
int root();
//node* findMin(node* t);
node* insertRec(node* t, int i);
//node* containsRec(node* t, int i);
//void removeRec(node* t, int i);

};
}