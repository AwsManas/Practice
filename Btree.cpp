class node
{
public :
int data;
node *left;
node *right;
node(int k=0)
  {
   left=NULL;
   right=NULL;
   data = k;
  }
};
class bt
{
 public:
 node *start;
  public:
  bt(int k)
   {
    start = new node(k);
   }
  void insert(int l)
   {
    node *temp = start;
    node *t = new node(l);
    while(temp!=NULL)
       {
         if(temp->data<l)
         {
          if(temp->right==NULL)
           {temp->right=t; return; }
         temp = temp->right;
        }
        else
            {
              if(temp->left==NULL)
              { temp->left = t; return; }
              temp = temp->left;
            }
       }
   // temp = t;
  //  cout<<"Insertion completed \n";
   }
  friend void ino (node *start);
};
void ino (node *t)
{
  node *start = t;
  if(start==NULL)
  return;
  else
   {
    ino(start->left);
    cout<<start->data<<" ";
    ino(start->right);
   }
}
int main()
{
 bt k(6);
cout<<"Tree constructed \n";
 ino(k.start);
cout<<endl;
 k.insert(3);
 cout<<endl;
 ino(k.start);
 k.insert(19);
 cout<<endl;
 ino(k.start);
return 0;
}
