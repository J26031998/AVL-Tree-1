
#include "functions.h"
#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
  Node *root = NULL;
  Node *min= NULL;
  Node *max= NULL;

  float arr[]={10,4,3,2,1,7,20,24,6};
  create(arr,&root);
  printAVL(root);
  cout<<endl;
  
  minGet(root, &min);
  maxGet(root, &max);
  cout<<"El menor nodo es "<<min->num<<endl;
  cout<<"El mayor nodo es "<<max->num<<endl;

  Node *found_node= NULL;
  int error = avl_search(root, 24, &found_node);

  cout<<"Código:"<<error<<endl;
  cout<<"Valor del nodo:"<<(*found_node).num<<endl;

  error = avl_search(root, 11, &found_node);

  cout<<"Código:"<<error<<endl;
  cout<<"Valor del nodo:"<<(*found_node).num<<endl;


    return 0;
}
