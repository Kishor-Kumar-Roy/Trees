#include<iostream>
#include<queue>

using namespace std;
class node
{
    public:
  int data;
  node *left, *right;
  node(int value)
  {
    data=value;
    left=right=NULL;
  }
};
node * binarytree()
{
  int x;
  cin>>x;
  if(x==-1)
  {
    return 0 ;
  }
  node *temp=new node(x);
  cout<<"enter left child of "<<x<<": ";
  temp->left=binarytree();
   cout<<"enter right child of "<<x<<": ";
  temp->right=binarytree();
  return temp;
}
int totalNode(node *root)
{
    if(!root)
    return 0;
return (1+totalNode(root->left)+totalNode(root->right));
}
int main()
{
 cout<<"enter root node: ";
 node *root;
 root=binarytree();
 cout<<"size of binary tree: ";
 int size=totalNode(root);
 cout<<size;

 return 0;
}