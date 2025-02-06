// Given an integer numRows, return the first numRows of Pascal's triangle.
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j];  
            }
            pascalTriangle.push_back(row);
        }
        return pascalTriangle;
    }
};