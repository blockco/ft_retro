#include "E_Cluster.class.hpp"
#include <unistd.h>

E_Cluster::E_Cluster() {
  int i;
  i = 0;
  this->_size = 50;
  this->_clust = new Enemy[_size];
  while (i < this->_size) {
    this->_clust[i].Random();
    i++;
    _clust[i].setw(rand() % Env::_winw);
    _clust[i].seth(-50);
  }
}

bool E_Cluster::PlayerCollision(int h, int min_w, int max_w) {
  int i;
  i = 0;
  int enemy_h;
  int enemy_w;
  while (i < this->_size) {
    enemy_h = this->_clust[i].get_h();
    enemy_w = this->_clust[i].get_w();
    if ((enemy_h == h) && ((enemy_w >= min_w) && (enemy_w <= max_w)))
      return true;
    ++i;
  }
  return false;
}

bool E_Cluster::BulletCollision(int h, int w) {
  int i;
  i = 0;
  int enemy_h;
  int enemy_w;
  while (i < this->_size) {
    enemy_h = this->_clust[i].get_h();
    enemy_w = this->_clust[i].get_w();
    if (enemy_h == h && enemy_w == w)
      return true;
    ++i;
  }
  return false;
}

void E_Cluster::Action() {
  int i = 0;
  while (i < this->_size) {
    this->_clust[i].Action();
    i++;
  }
}

void E_Cluster::Print() {
  int i = 0;
  while (i < this->_size) {
    this->_clust[i].Print();
    i++;
  }
}

E_Cluster::~E_Cluster() {}
