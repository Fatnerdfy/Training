class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        int cnt, split;
        map<string, int> m;
        for(int i = 0; i < cpdomains.size(); ++i) {
            split = cpdomains[i].find(" ");
            cnt = stoi(cpdomains[i].substr(0, split));
            cpdomains[i] = cpdomains[i].substr(split + 1);
            while(cpdomains[i].size()) {
                m[cpdomains[i]] += cnt;
                split = cpdomains[i].find(".");
                if(split == string::npos) break;
                cpdomains[i] = cpdomains[i].substr(split + 1);
            }
        }
        vector<string> v;
        for(auto it = m.begin(); it != m.end(); ++it) {
            v.push_back(to_string(it->second) + " " + it->first);
        }
        return v;
    }
};

// runtime 16ms
