#include "E_Cluster.class.hpp"
#include <unistd.h>

E_Cluster::E_Cluster() {
  int i;
  i = 0;
  this->_size = 10;
  this->_clust = new Enemy[_size];
  while (i < this->_size) {
    this->_clust[i].Random();
    i++;
    _clust[i].setw(rand() % Env::_winw);
    _clust[i].seth(5);
  }
}

bool E_Cluster::PlayerCollision(int h, int min_w, int max_w) {
  int i;
  i = 0;
  int enemy_h;
  int enemy_w;
  while (i < this->_size) {
    if (this->_clust[i].getstate() == false) return false;
    enemy_h = this->_clust[i].get_h();
    enemy_w = this->_clust[i].get_w();
    if ((abs(enemy_h - h) < 1) && ((enemy_w >= min_w) && (enemy_w <= max_w)))
      return true;
    ++i;
  }
  return false;
}

E_Cluster::E_Cluster(const E_Cluster &src) { *this = src; }
E_Cluster &E_Cluster::operator=(const E_Cluster &src) {
  _h = src._h;
  _w = src._w;
  _velocity = src._velocity;
  _score = src._score;
  _image = src._image;
  _state = src._state;
  return *this;
}

bool E_Cluster::BulletCollision(int h, int w) {
  int i;
  i = 0;
  int enemy_h;
  int enemy_w;
  while (i < this->_size) {
    enemy_h = this->_clust[i].get_h();
    enemy_w = this->_clust[i].get_w();
    if (enemy_h == h && enemy_w == w) {
      this->_clust[i].setstate(false);
      Env::_score += 100;
    }
    ++i;
  }
  return true;
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

E_Cluster::~E_Cluster() { delete[] this->_clust; }
