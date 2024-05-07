//* We have std::max to find maximum of 2 or more elements, but what if we want to find the largest element in an array or vector or list or in a sub-section. To serve this purpose, we have std::max_element in C++. std::max_element is defined inside the header file and it returns an iterator pointing to the element with the largest value in the range [first, last). std::max_element can be used in two ways. The comparisons can be performed either usingoperator < (first version), or using a pre-defined function (second version). If more than one element satisfies the condition of being the largest, the iterator returned points to the first of such elements. 
    //todo:      Syntax:

    //? template 
    //? ForwardIterator max_element (ForwardIterator first, ForwardIterator last);

    //? first:     Forward iterator pointing to the beginning of the range.
    //? last:     Forward iterator pointing to the end of the range.

    //? Return Value:     It returns a pointer to the largest 
    //? element in the range, and in case if there are more than 
    //? one such element, then it points to the first one.

    //? It points to the last in case the range is empty.

//! KOKO EATING BANANAS
    bool canEatAll(vector<int>v, int mid, int h){
    int actualHours = 0;
    for(int x:v){
        actualHours += x/mid; //hours
        if(x%mid != 0){
            actualHours++;
        }
    }
    return actualHours <= h;
}
int minimumRateToEatBananas(vector<int> v, int h) {
  int n = v.size();
  int l = 1;
  int r = *max_element(begin(v),end(v));//int e=*max_element(bD.begin(),bD.end());
  while(l<r){
      int mid = l+(r-l)/2;//per hour I can eat mid number of bananas
      if(canEatAll(v,mid,h)){
          r = mid;
      }else{
          l = mid+1;
      }
  }
  return l;
}

//? In the given code, *max_element(begin(v),end(v)) is used to find the maximum element in the vector v. Here's what each part of this expression does:

//? max_element(begin(v), end(v)): This function returns an iterator pointing to the maximum element in the range [begin(v), end(v)). It iterates over the elements of the vector v and returns an iterator pointing to the element with the highest value.
// *: The * operator dereferences the iterator, giving you the value of the element it points to.
// ? So, *max_element(begin(v),end(v)) gives you the maximum element itself, not the iterator pointing to it. This value is then assigned to r, which represents the upper bound of the search range when finding the minimum rate to eat bananas.

//? In summary, *max_element(begin(v),end(v)) is used to get the maximum element from the vector v, which helps in setting an initial upper bound for the binary search algorithm.





// Sure, I'd be happy to help!

// Here are the ceil and floor values for each of the given numbers:

// For 3.4:
// Ceil: 4
// Floor: 3
// For 5.5:
// Ceil: 6
// Floor: 5
// For 6.1:
// Ceil: 7
// Floor: 6
// For 7.7:
// Ceil: 8
// Floor: 7
// For 9.6:
// Ceil: 10
// Floor: 9
// For 2.4:
// Ceil: 3
// Floor: 2

//! FIND THE SMALLES DIVISOR GIVEN THE THRESHOLD

#include<bits/stdc++.h>
int midbyd(vector<int>& arr, int d){
int sum = 0;
int n = arr.size();
for(int i = 0; i<n; i++){
sum = sum + ceil((double)(arr[i])/(double)(d));
}
return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{   
	int low = 1;
	int high = *max_element(arr.begin(),arr.end());
	while(low<=high){
		int mid = (low+high)/2;
		if(midbyd(arr,mid)<=limit){
				high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return low;
}
