// Engine that controls the flow of the game by using the notion of state, transition, and command. 
// The state represents a certain phase of the game and dictates what are the valid actions or user commands that take place in this phase. 
// Some actions or commands may eventually trigger a transition to another state, which is what controls the flow of the game. 
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Orders.h"
#include "Map.h"
#include "Cards.h"
#include "Player.h"

using namespace std;
using std::list;