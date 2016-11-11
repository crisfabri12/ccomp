#include "graph.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

graph::graph(vector<int> &start,vector<int>&endd){
        vector<int>::iterator i;
        vector<int>::iterator j;
        map< int,vector<int> >::iterator k;
        j = endd.begin();
        k = d.begin();
        i = start.begin();
        while(i!=start.end()||j!=endd.end()){
            if(start[i]==k->first)
               (k->second).push_back(endd[]);

        }
}
