#ifndef __RB_TREE_H__
#define __RB_TREE_H__
#include <stdlib.h>

enum rb_tree_color
{
  RB_RED,
  RB_BLACK
};

struct rb_tree_node
{
  int		key;
  int		color;
  int count;
  rb_tree_node*	left;
  rb_tree_node*	right;
  rb_tree_node*	p;
};
struct rb_info {
  int duplicates= 0 ;
  int case_1_count =0;
  int case_2_count = 0;
  int case_3_count = 0;
  int left_rotate = 0;
  int right_rotate = 0;
};

class rb_tree
{
  protected:
    rb_tree_node*	T_nil;
    rb_tree_node*	T_root;
    int newSize = 0;
    int newCount =0;
    int* new_input_array ;


  public:
    rb_tree();
    ~rb_tree();
    rb_info rb_tree_i_info;
    rb_tree_node rbTreeNode;

    void insert(int*, int);
    void insert(int);
    int convert(int*, int);

    void reset();
    void inorder_output()
      { inorder_output(T_root, 1); }
    void output()
      { output(T_root, 1); }
      int check_black_height()
      {check_black_height(T_root);}

  protected:
    void insert(rb_tree_node*);
    void insert_fixup(rb_tree_node*&);

    void remove_all(rb_tree_node*);

    void left_rotate(rb_tree_node*);
    void right_rotate(rb_tree_node*);

    void inorder_output(rb_tree_node*, int);
    void output(rb_tree_node*, int);
    int check_black_height(rb_tree_node*);
    int check_height(rb_tree_node*);
};


#endif
