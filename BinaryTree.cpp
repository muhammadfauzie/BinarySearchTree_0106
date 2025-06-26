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

        //step 1: allocate memory for the new node
        Node *newNode = new Node();

        //step 2: assign value to the data field of the new node
        newNode->info = x;

        //step 3: make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //step 4: locate the node which will be the parent of the new node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //step 5: if parent is NULL, (Tree is empty)
        if (parent == nullptr)
        {
            //5a: mark the new node as ROOT
            ROOT = newNode;

            //5b: exit
            return;
        }

        //step 6: if the value in the data field of new node is less off parent
        if (x < parent->info)
        {
            //6a: make the left child of parent point to the new node
            parent->leftchild = newNode;

             //6b: exit
            return;

        }
    }
};