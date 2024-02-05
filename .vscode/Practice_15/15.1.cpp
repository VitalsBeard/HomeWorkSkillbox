#include<iostream>
#include<vector>

using namespace std;





void findMaxSumSubarrayIndices(const vector<int>& nums) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    int start = 0, end = 0, s = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];

        if (maxSum < currentSum) {
            maxSum = currentSum;
            start = s;
            end = i;
        }

        if (currentSum < 0) {
            currentSum = 0;
            s = i + 1;
        }
    }

    cout << "From " << start << " to " << end  << " with summ " << maxSum << endl;
}

int main() {
    int check;
   
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    findMaxSumSubarrayIndices(a);
    // cin >> check; 

    return 0;
}













// int main(){
    
//    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
//    int maximum_num1 = 0;
//    int maximum_num2 = 0; 
   

//    for(int i = 0; i!= a.size()-1; i++)
//    {
//         for(int j = 0; j!=a.size()-1; i++)
//         {
//             maximum_num1 = a[i] + a[j-i] + a[j-i] + a[j-i] ;
//         }
//         cout << maximum_num1;
//         cin >> maximum_num1;
//    }

// return 0;
// }