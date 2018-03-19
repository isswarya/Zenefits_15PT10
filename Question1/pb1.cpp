#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
typedef struct tree
{
    node *data;
    node *lc;
    node *rc;
}node;

void insert(node *data)
{
    node * ptr=head;
    if(head==NULL)
    {
        node *temp=new node;
        temp->data=data;
        temp->lc=NULL;
        temp->rc=NULL;
        node *temp=head;
    }
    else
    {
        node *temp=new node;
        temp->data=data;
        temp->lc=NULL;
    }
}
void inorder(node *ptr)
{
    node *root=ptr;
    cout<<inorder(root->lc);
    cout<<root->data;
    cout<<root->rc;
}
int main()
{
    int n;
    cout<<enter n<<endl;
    cin>>n,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        insert(a[i]);
    }
}
