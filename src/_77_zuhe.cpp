//
// Created by 17819 on 2022/12/1.
//

#include "_77_zuhe.h"
#include <vector>
using namespace std;
class Solution{
private:
    vector<vector<int>> result;// 存放符合条件结果的集合
    vector<int> path;// 用来存放符合条件结果
    void backtracking(int n,int k,int startIndex){
        if (path.size()==k){
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <=n; i++) {
            path.push_back(i);//处理节点
            backtracking(n,k,i+1);//    递归
            path.pop_back();//  回溯，撤销处理的节点
        }
    }
public:
    vector<vector<int>> combine(int n,int k){
        result.clear();
        path.clear();
        backtracking(n,k,1);
        return result;
    }
};