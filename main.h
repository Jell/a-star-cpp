#include <stdio.h>
#include"SortedList.h"
#include"Node.h"
#define TABLESIZE 20

//Variables
int startI, startJ, endI, endJ;
char table[][20] = {
  {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ','#',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
  {'#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
  {'#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
  {'#',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},
  {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#'},
  {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
};
SortedList *sl;

// Functions
int printTable();
Node * astarStep();
