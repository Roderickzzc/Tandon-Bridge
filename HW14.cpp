
#include <iostream>
#include<vector>
#include <ctime>

using namespace std;


template <class T>
vector<T> findMinMax(vector<T> &input, int start,int end){
    T min, max;
    if(start==end){
        min = input[start];
        max = input[end];
    }
    else {
        int mid;
        mid = (start + end) / 2;
        
        
        vector<T> vec1, vec2;
        vec1=findMinMax(input, start, mid);
        vec2=findMinMax(input, mid+1, end);
        T min1, min2, max1, max2;
        min1 = vec1[0]; min2 = vec2[0];
        max1 = vec1[1]; max2 = vec2[1];
        if(min1<=min2){
            min = min1;
        }
        else{
            min = min2;
        }

        if (max1 >= max2) {
            max = max1;
        }
        else {
            max = max2;
        }
    }
    vector<T> minmax;
    minmax.push_back(min);
    minmax.push_back(max);
    return minmax;
}

template <class T>
vector<T> findMinMax(vector<T> &input) {
    
    return findMinMax(input, 0, input.size()-1);

}

int main() {
    vector<int> arr;
    arr = { 5000,5, 100, 10, 6, 34, -1210, 1, 88, 3, 900, 45, 29,-1500 };
    vector<int> min_max;

    min_max = findMinMax(arr);
    cout << "min: " << min_max[0] << endl;
    cout << "max: " << min_max[1] << endl;

    return 0;
}
