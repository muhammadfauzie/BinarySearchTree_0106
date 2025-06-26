#include <iostream>
using namespace std;

class Node 
{
public:
    int info;
    Node*leftchild;
    Node*rightchild;

    //constructor for the node class
    Node()
    {
        leftchild = nullptr; //Initialize left child to null
        rightchild = nullptr; //Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initialize ROOT to null
    }

     void search(int elemen, Node *&parent, Node *&currentNode)
     {
        //This function searches the currentNode of the
        //specified Node as well as the current Node of its parent
        currentNode = ROOT; 
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != elemen))
        {
            parent = currentNode; 
            if (elemen < currentNode->info)
                currentNode = currentNode->leftchild; 
            else
                currentNode = currentNode->rightchild; 
        }
     }

     void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;
    }
};