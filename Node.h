// Mersimoy Gurmu
// Assignment 4-Binary Search Tree
// CSCS2421-Data Structure and Program Design

#include <iostream>
using namespace std;

class node {
private:
    node* left;// left child
    node* right;// right child
    int data;// data
public:
    // default cnstructor
    node()
    {
        left = NULL;
        right = NULL;
        data = -1;
    }
    // constructor with one argumanet
    node(int d) {
        left = NULL;
        right = NULL;
        data = d;
    }

    // setter and getter methods
    void setLeft(node* t)
    {
        left = t;
    }
    node* getLeft()
    {
        return(left);
    }
    void setRight(node* t)
    {
        right = t;
    }
    node* getRight()
    {
        return(right);
    }
    void setData(int d)
    {
        data = d;
    }
    int getdata()
    {
        return(data);
    }
};



