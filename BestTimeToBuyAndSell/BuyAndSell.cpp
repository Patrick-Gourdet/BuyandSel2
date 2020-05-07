#include<iostream>
#include <vector>
#include <cassert>


int maxProfit(std::vector<int>& v) {
    int profit = 0;
	for(int i = 0;i <v.size()-1;i++)
        if (v[i + 1] > v[i])
            profit +=  v[i + 1] - v[i];
    return profit;
}
int main(){
    std::vector<int> v = { 5,4,3,2,1 };
    assert( maxProfit(v) == 0);
   v = { 5,3,2,4,8 };
    assert(maxProfit(v) == 6);
    v = { 1,2,3,4,5 };
    assert(maxProfit(v) == 4);
     v = { 2,5,6,2,8,4,7 };
    assert(maxProfit(v) == 13);
     v = { 4,6,2,1 };
    assert(maxProfit(v) == 2);
}