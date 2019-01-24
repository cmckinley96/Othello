/******************************************************************
// File: main.cc
//
//  Main engine for running Othello game
//
//  Colin McKinley || Ohio University
//  Today's Date 8/13/18
*******************************************************************/
#include "game.h"
#include "piece.h"
#include "othello.h"
using namespace std;

int main(){
  main_colin::game::who result;
  Othello myg;
  result = myg.play();
  if (result == main_colin::game::HUMAN) {
    cout << "Player wins!" << endl;
  } else if (result == main_colin::game::COMPUTER) {
    cout << "Computer wins!" << endl;
  } else {
    cout << "It's a tie!" << endl;
  }
  return 0;
}
