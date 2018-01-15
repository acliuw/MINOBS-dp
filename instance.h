#ifndef INSTANCE_H
#define INSTANCE_H 

#include <vector>
#include "variable.h"
#include "types.h"
class Instance {
  public:
    Instance(std::string fileName);
    int getN() const;
    int getK() const;
    const Variable &getVar(int i) const;
    friend std::ostream& operator<<(std::ostream &os, const Instance& I);
  private:
    int n, k;
    std::vector<Variable> vars;
};

#endif /* INSTANCE_H */
