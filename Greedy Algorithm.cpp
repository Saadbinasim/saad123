// C++ program to find the minimum time required  
// to finish all jobs using Binary Search  
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum job duration  
int getMax(vector<int> &job) {
    int res = job[0];

    // Find the maximum time among all jobs  
    for (int i = 1; i < job.size(); i++) {  
        if (job[i] > res) {  
            res = job[i];  
        }
    }
    return res;
}