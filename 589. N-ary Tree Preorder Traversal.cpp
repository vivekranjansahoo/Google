/*
589. N-ary Tree Preorder Traversal
---------------------------------------
Example -1:
----------------

Input: root = [1,null,3,2,4,null,5,6]
Output: [1,3,5,6,2,4]

Example-2 : 
---------------

Input: root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
Output: [1,2,3,6,7,11,14,4,8,12,5,9,13,10]


*/

//Method-1 
--------------
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root) pre(root,&ans);
        return ans;
    }

    void pre(Node *node,vector<int> *ans){
    ans->push_back(node->val);
    for(Node* child:node->children)
        pre(child,ans);
    }
};


//Method-2 
-------------
  /*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(!root){
            return {};
        }
        vector<int> v;
        v.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            vector<int> ans=preorder(root->children[i]);
            v.insert(v.end(),ans.begin(),ans.end());
        }
        return v;
    }
};
