/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int result = 0;
        for(auto it = employees.begin(); it != employees.end(); ++it) {
            if((*it)->id == id) {
                result += (*it)->importance;
                if((*it)->subordinates.size()) {
                    for(auto i = (*it)->subordinates.begin(); i != (*it)->subordinates.end(); ++i) {
                        result += getImportance(employees, (*i));
                    }
                }
                return result;
            }
        }
    }
};

// runtime 26ms
