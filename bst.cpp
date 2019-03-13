/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			bst.cpp
 * Author(s):		Peter Bauer
 * Due Date:		May 31, 2017
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "bst.h"
#include <stdlib.h>
#include "general.h"

struct Node{
  int element;
  Node* left;
  Node* right;
};

Bst new_bst()
{
  return 0;
}
void delete_bst(Bst bst)
{
  if (bst==0)
  {
    return;
  }
  delete_bst(bst->left);
  delete_bst(bst->right);
  sfree(bst);
}
int get_depth(Bst bst)
{
  if(bst == 0)
  {
      return 0;
  }
  else
  {
    int leftTree = get_depth(bst->left);
    int rightTree = get_depth(bst->right);

    if(leftTree <= rightTree)
    {
      return rightTree+1;
    }
    else
    {
      return leftTree+1;
    }
  }
}
void add(Bst* bst, int value)
{
  if ((*bst)==0)
  {
    Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->element = value;
    newnode->left = 0;
    newnode->right = 0;
    (*bst) = newnode;
    return;
  }
  if (value<=(*bst)->element)
  {
    if ((*bst)->left==0)
    {
      Node* newnode = (struct Node*)malloc(sizeof(struct Node));
      newnode->element = value;
      newnode->left = 0;
      newnode->right = 0;
      (*bst)->left = newnode;
    }
    else
    {
      Node* bst_to_add = (*bst)->left;
      add(&bst_to_add, value);
    }
  }
  else
  {
    if ((*bst)->right==0)
    {
      Node* newnode = (struct Node*)malloc(sizeof(struct Node));
      newnode->element = value;
      newnode->left = 0;
      newnode->right = 0;
      (*bst)->right = newnode;
    }
    else
    {
      Node* bst_to_add = (*bst)->right;
      add(&bst_to_add, value);
    }
  }
}
int root_value(Bst bst)
{
  if (bst->element == 0)
  {
    return 0;
  }
  return bst->element;
}
Bst left_subtree(Bst root)
{
  if (root==0)
  {
    return 0;
  }
  return root->left;
}
Bst right_subtree(Bst root)
{
  if (root==0)
  {
    return 0;
  }
  return root->right;
}
int traverse_pre_order(Bst bst, int *elements, int start)
{
  return 0;
}
int traverse_in_order(Bst bst, int *elements, int start)
{
  return 0;
}
int traverse_post_order(Bst bst, int *elements, int start)
{
  return 0;
}
bool are_equal(Bst bst1, Bst bst2)
{
  return false;
}
void most_left_longest_branch(Bst bst, Bst* branch)
{

}
int get_number_of_subtrees(Bst bst)
{
  return 0;
}
