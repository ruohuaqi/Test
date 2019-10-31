#include<iostream>
struct node{
    char  val;
    node * left;
    node * right;
}*treenode
void creat(treenode &t)
{
    char ch;
    ch=cin.get();
    if(ch==' ')
        t=NULL;
    else
    {
        t=(tree*)malloc(sizeof(tree));
        t->val=ch;
        creat(t->left);
        creat(t->right);
    }
}
int main()
{
    treenode t;
    creat(t);
    cout<<"生成树"<<endl;
}
