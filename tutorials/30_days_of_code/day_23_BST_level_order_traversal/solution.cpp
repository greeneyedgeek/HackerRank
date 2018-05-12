/**
* Author: greeneyedgeek
* Date: 2018-05-12
*/

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
	void levelOrder(Node * root){

        if (root != nullptr) {
            queue<Node*> nodeQueue;
            nodeQueue.push(root);

            do {
                Node* node = nodeQueue.front();
                cout << node->data << ' ';
                nodeQueue.pop();
                
                if (node->left != nullptr) {
                    nodeQueue.push(node->left);
                    
                }
                
                if (node->right != nullptr) {
                    nodeQueue.push(node->right);
                    
                }
                    

            } while (!nodeQueue.empty());
        }
	}
};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
