class dsu {
public:
    vector<int> parent, size;
    dsu(int n) {
        parent.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findparent(int node) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findparent(parent[node]); // Path compression
    }

    void unionbysize(int u, int v) {
        int ulp = findparent(u);
        int vlp = findparent(v);
        if (ulp == vlp) return;
        if (size[ulp] < size[vlp]) {
            parent[ulp] = vlp;
            size[vlp] += size[ulp];
        } else {
            parent[vlp] = ulp;
            size[ulp] += size[vlp];
        }
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        dsu ds(n);
        for (auto it : edges) {
            if (ds.findparent(it[0]) == ds.findparent(it[1])) {
                return {it[0], it[1]};
            }
            ds.unionbysize(it[0], it[1]);
        }
        return {};
    }
};