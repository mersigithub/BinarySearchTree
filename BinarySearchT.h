
// Assignment 4-Binary Search Tree
// CSCS2421-Data Structure and Program Design

#include <iostream>
#include "node.h"
using namespace std;

class BinarySearchT {
private:
    node* root_node;
public:
    // default constructor
    BinarySearchT() {
        root_node = NULL;
    }

    // the function add data in tree
    void store_Data(int d) {
        node* nod = new node(d);
        if (root_node == NULL) {
            root_node = nod;
        }
        else {
            node* store = root_node;
            while (store != NULL)
            {
                if (store->getdata() < d)// right
                {
                    if (store->getRight() == NULL)
                    {
                        store->setRight(nod);
                        break;
                    }
                    else
                    {
                        store = store->getRight();
                    }
                }
                // left
                else {
                    if (store->getLeft() == NULL) {
                        store->setLeft(nod);
                        break;
                    }
                    else {
                        store = store->getLeft();
                    }
                }
            }
        }
    }

    // searh data from tree
    bool search(int dat) {

        node* store = root_node;
        while (store != NULL) {
            // data found
            if (store->getdata() == dat) {
                return true;
            }
            else {
                if (store->getdata() < dat) {
                    store = store->getRight();
                }
                else {
                    store = store->getLeft();
                }
            }
        }
        return false;
    }

    // order
    void inOrder(node* tree) {
        if (tree == NULL) {
            return;
        }
        else {
            inOrder(tree->getLeft());
            cout << tree->getdata() << " ";
            inOrder(tree->getRight());
        }
    }

    // hpre order
    void pre_Order(node* t) {
        if (t == NULL) {
            return;
        }
        else {
            cout << t->getdata() << " ";
            pre_Order(t->getLeft());
            pre_Order(t->getRight());
        }
    }

    // post order
    void post_Order(node* p) {
        if (p == NULL) {
            return;
        }
        else {
            post_Order(p->getLeft());
            post_Order(p->getRight());
            cout << p->getdata() << " ";
        }
    }

    void in_Order() {
        inOrder(root_node);
    }
    void pre_Order() {
        pre_Order(root_node);
    }
    void post_Order() {
        post_Order(root_node);
    }

    // find max data
    int find_Max(int x, int y) {
        return(x > y ? x : y);
    }

    // height of tree of node
    int height(node* h) {
        if (h == NULL)
            return 0;

        return find_Max(height(h->getLeft()), height(h->getRight())) + 1;
    }
    int height() {
        return(height(root_node));
    }
};

