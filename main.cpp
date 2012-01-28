#include "main.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

  int i, j;

  startI = 5;
  startJ = 10;
  endI = 15;
  endJ = 10;


  table[startI][startJ] = 'S';
  table[endI][endJ] = 'A';


  printTable();

  sl = new SortedList();

  sl->Insert(new Node(startI, startJ, 0 , abs(startI - endI) + abs(startJ - endJ),abs(startI - endI) + abs(startJ - endJ), NULL));

  Node *testNode = NULL;
  Node *nodeTmp = NULL;

  while(testNode == NULL){

    printf("\n\n");

    testNode = astarStep();
  }

  sl->View();

  while(testNode){
    table[testNode->i][testNode->j] = 'o';
    nodeTmp = testNode->parent;
    free(testNode);
    testNode = nodeTmp;
  }
  sl->Clear();

  table[startI][startJ] = 'S';
  table[endI][endJ] = 'A';

  printTable();

  string stop;
  getline(cin,stop,'\n');

  return 0;


}

int printTable(){
  int i, j;

  printf(" \n");

  for(j=0;j<TABLESIZE;j++){

    for(i=0;i<TABLESIZE;i++){
      printf("%c", table[i][j]);
    }

    printf("\n");
  }
  return 0;
}

Node * astarStep(){
  Node * anode = sl->Pop();
  int i = anode->i;
  int j = anode->j;
  int f = anode->f;
  int g = anode->g;
  int h = anode->h;

  if(i == endI && j == endJ) return anode;


  if(table[i+1][j] != '#' && table[i+1][j] != '.'){

    table[i+1][j] = '.';

    sl->Insert(new Node(i+1,
          j,
          g+10,
          10 * (abs(endI - i - 1) + abs(endJ - j)),
          g + 10 + 10 * (abs(endI - i - 1) + abs(endJ - j)),
          anode));
  }

  if(table[i-1][j] != '#' && table[i-1][j] != '.'){

    table[i-1][j] = '.';

    sl->Insert(new Node(i-1,
          j,
          g+10,
          10 * (abs(endI - i + 1) + abs(endJ - j)),
          g + 10 + 10 * (abs(endI - i + 1) + abs(endJ - j)),
          anode));
  }

  if(table[i][j+1] != '#' && table[i][j+1] != '.'){

    table[i][j+1] = '.';

    sl->Insert(new Node(i,
          j+1,
          g+10,
          10 * (abs(endI - i) + abs(endJ - j - 1)),
          g + 10 + 10 * (abs(endI - i) + abs(endJ - j - 1))
          , anode));
  }

  if(table[i][j-1] != '#' && table[i][j-1] != '.'){

    table[i][j-1] = '.';

    sl->Insert(new Node(i,
          j-1,
          g+10,
          10 * (abs(endI - i) + abs(endJ - j + 1)),
          g + 10 + 10 * (abs(endI - i) + abs(endJ - j + 1)),
          anode));
  }


  if(table[i+1][j+1] != '#' && table[i+1][j+1] != '.'){

    table[i+1][j+1] = '.';

    sl->Insert(new Node(i+1,
          j+1,
          g+14,
          10 * (abs(endI - i - 1) + abs(endJ - j -1)),
          g + 14 + 10 * (abs(endI - i - 1) + abs(endJ - j -1)),
          anode));
  }

  if(table[i-1][j+1] != '#' && table[i-1][j+1] != '.'){

    table[i-1][j+1] = '.';

    sl->Insert(new Node(i-1,
          j+1,
          g+14,
          10 * (abs(endI - i + 1) + abs(endJ - j -1)),
          g + 14 + 10 * (abs(endI - i + 1) + abs(endJ - j -1)),
          anode));
  }

  if(table[i+1][j-1] != '#' && table[i+1][j-1] != '.'){

    table[i+1][j-1] = '.';

    sl->Insert(new Node(i+1,
          j-1,
          g+14,
          10 * (abs(endI - i -1) + abs(endJ - j + 1)),
          g + 14 + 10 * (abs(endI - i - 1) + abs(endJ - j + 1)),
          anode));
  }

  if(table[i-1][j-1] != '#' && table[i-1][j-1] != '.'){

    table[i-1][j-1] = '.';

    sl->Insert(new Node(i-1,
          j-1,
          g+14,
          10 * (abs(endI - i+1) + abs(endJ - j + 1)),
          g + 14 + 10 * (abs(endI - i+1) + abs(endJ - j + 1)),
          anode));
  }

  return NULL;
}
