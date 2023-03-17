
// Assignment 4-Binary Search Tree
// CSCS2421-Data Structure and Program Design

#include <iostream>
#include "BinarySearchT.h"
using namespace std;
int main() {
    int disp_data;
    BinarySearchT tree; // class object
    // read data from user
    while (true) {
        cout << "Enter data [Press -1 for stop] : ";
        cin >> disp_data;
        if (disp_data == -1) {
            break;
        }
        else {
            tree.store_Data(disp_data);
        }
    }

    // print
    cout << endl;
    cout << endl;
    cout << "Pre order : ";
    tree.pre_Order();
    cout << endl;
    cout << "In order : ";
    tree.in_Order();
    cout << endl;
    cout << "Post order : ";
    tree.post_Order();

    cout << endl;
    cout << endl;
    cout << "Height of Node : ";
    cout << tree.height();
    cout << endl;
    cout << endl;
    cout << endl;
    // read data
    while (true) {
        cout << "Enter data for serach [Press -1 for stop] : "; // user input
        cin >> disp_data;
        if (disp_data == -1) {
            break;
        }
        else {
            if (tree.search(disp_data) == true) {
                cout << "Data found." << endl;
            }
            else {
                cout << "Data not found." << endl;;
            }
        }
    }

    cout << endl;
    return 0;
}
