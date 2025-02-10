#include<iostream>
#include<string.h>
using namespace std;

typedef struct node{
 char k[20];
  char m[20];
 class node *left;
 class node *right; 

}node;

class Dict
{

public:
node *root;
void create();
void display(node *);
void insert(node *root,node *temp);
int search(node *root,char k[20]);
void update(node *root,char k[20]);


};


void Dict::create()
{

class node *temp;
int ch;
do
{
temp=new node;
cout<<"enter the keyword:"<<endl;
cin>>temp->k;
cout<<"enter its meaning:"<<endl;
cin>>temp->m;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{
root=temp;
}
else{
insert(root,temp);
}
cout<<"do want to continue adding the data(yes-1 and no-0):"<<endl;
cin>>ch;
}while(ch==1);

}

void Dict::insert(node *root,node *temp)
{

if( strcmp(temp->k,root->m)<0)
{
if(root->left==NULL)
{
root->left=temp;
}
else
{
insert(root->left,temp);
}
}
else
{
if(root->right==NULL)
{
root->right=temp;
}
else
{
insert(root->right,temp);
}
}

}

int Dict::search(node *root,char k[20])
{
node *temp=root;
int c=0;
while(temp!=NULL)
{
c++;
if(temp->k==k)
{
cout<<"comparison found";
return 1;
}
if(temp->k<k)
{
root=root->left;
}
if(temp->k>k)
{
root=root->right;
}
}
return -1;

}

void Dict::display(node *root)
{

if(root!=NULL)
{
display(root->left);
cout<<"keyword:"<<root->k;
cout<<"meaning:"<<root->m<<endl;
display(root->right);
}

}

int main()
{

Dict d;
int a,l;
do
{
cout<<"\n 1.create \n2.insert \n 3.display\n4.search";
cout<<"enter your choice:";
cin>>a;
switch(a){
case 1:
	d.create();
	break;
	
case 2:
	cout<<"enter the value of "<<root->k<<"to be inserted";
	cin>>root->m;
	d.insert(d.root,d.m);
	break;
case 3:
	d.display(d.root);
	break;
case 4:
	cout<<"enter the element to be searched:"<<endl;
	cin>>l;
	d.search(d.root,l);
	break;
	
default:
	cout<<"enter a valid option:";
}


}while(a!=0);

return 0;

}
