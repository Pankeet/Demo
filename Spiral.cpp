// Spiral Question Leetcode
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> anss;
    vector<int> ans(vector<vector<int>>& matrix){
        anss.clear();
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0 ;
        int startingCol = 0 ;
        int endingRow = row - 1 ;
        int endingCol = col - 1 ;

        int total = row * col ;
        int count = 0 ;

        while(count < total){
            
            // Printing Starting Row 
            for(int index = startingCol ;count < total && index <= endingCol ; index++){
                anss.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // Printing ending coloumn
            for(int index = startingRow ;count < total && index <= endingRow ; index++){
                anss.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // Printing ending Row
            for(int index = endingCol ; count < total &&  index >= startingCol ; index--){
                anss.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // Printing starting Coloumn
            for(int index = endingRow ;count < total && index >= startingRow ; index--){
                anss.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return anss;
    }
}; 

int main(){
    vector<vector<int>> matrix = {{1,2,3} , {4,5,6},{7,8,9}};
    Solution S1;
    vector<int> pankeet = S1.ans(matrix);

    for(auto &i : pankeet){
        cout << i << "  ";
    }
    return 0;
}