#include "engpar_diffusive_input.h"
namespace engpar {

  DiffusiveInput::DiffusiveInput(agi::Ngraph* g_) : Input(g_) {
    maxIterations = 1000;
    maxIterationsPerType = 100;
    step_factor=0.1;
    sides_edge_type = 0;
    selection_edge_type = 0;
    countGhosts =false;
    if (g->isHyper())
      useDistanceQueue = true;
    else
      useDistanceQueue = false;
    bfsPush = true;
  }

  void DiffusiveInput::addPriority(int type, double tolerance) {
    priorities.push_back(type);
    tolerances.push_back(tolerance);
                                 
  }
}
