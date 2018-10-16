#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode * left;
    BstNode * right;
};
bool Search(BstNode* r,int d)
{
    if(r==NULL)
        return false;
   if(r->data==d)
    return true;
   else if(d<=r->data)
   {
       return Search(r->left,d);
   }
   else
    return Search(r->right,d);
}
BstNode* NewNode(int d)
{
    BstNode* n=new BstNode();
    n->data=d;
    n->left=NULL;
        n->right=NULL;
      return n;
}
BstNode* Insert(BstNode* r,int data)
{
    if(r==NULL)
    {
        r=NewNode(data);
    }
    else if(data<=r->data)
    {
        r->left=Insert(r->left,data);
    }
    else
        r->right=Insert(r->right,data);
    return r;
}
int main()
{
    BstNode* root=NULL;
    root=Insert(root,12);
    root=Insert(root,35);
    root=Insert(root,3);
    root=Insert(root,5);root=Insert(root,315);
    if(Search(root,3150))
        cout<<"found";
     else
        cout<<"not found";
}
