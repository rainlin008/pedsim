//
// pedsim - A microscopic pedestrian simulation system. 
// Copyright (c) 2003 - 2012 by Christian Gloor
//                              

#ifndef _tree_h_
#define _tree_h_ 1

#include <QGraphicsItem>
#include <QQueue>

#include <iostream>
#include <set>

#include "ped_tree.h"

class Scene;

using namespace std;


class Tree : public Ped::Ttree {
 private:
  QGraphicsScene *graphicsscene;
  QGraphicsRectItem *rect;
  Scene *scene;
  
  /*
  double x;
  double y;
  double w;
  double h;

  int depth;
  int agentcount;
  set<Ped::Tagent*> agents;

  */


  
 public:
  
  Tree(QGraphicsScene *graphicsscene, Scene *pedscene, int depth, double x, double y, double w, double h);  
  /* Tree(int depth, double x, double y, double w, double h);  */
  virtual ~Tree();

  virtual void addChildren();

  /*
  void addAgent(Ped::Tagent *a, Scene *pedscene);
  void moveAgent(Ped::Tagent *a, Scene *pedscene);
  set<Ped::Tagent*> getAgents();

  bool intersects(double px, double py, double pr);
  
  int cut(Scene *pedscene);

  Tree *tree1;
  Tree *tree2;
  Tree *tree3;
  Tree *tree4;

  bool isleaf;
  */
};

#endif
