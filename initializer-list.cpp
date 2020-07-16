//Initialize the containers using uniform initializer with {10,20,1,3,8} 
#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>

int main(){
    //std::array
    std::array<int,6> arr1{{10,20,1,3,8,10}}; //double braces required in c++11 prior to CWG 1270 revision
                                        //(not needed after the revision and in c++14 and beyond)
    std::array<int,6> arr2 = {10,20,1,3,8,10}; //double bracket never required after =
    for(auto i : arr2) std::cout<<i<<" ";
    std::cout<<"\n";

    //std::vector
    std::vector<int> v1{10,20,1,3,8,10};
    std::vector<int> v2 = {10,20,1,3,8,10};
    for(auto i : v2) std::cout<<i<<" ";
    std::cout<<"\n";

    //std::set
    std::set<int> s1{10,20,1,3,8,10};
    std::set<int> s2 = {10,20,1,3,8,10};
    for(auto i : s2) std::cout<<i<<" ";
    std::cout<<"\n";

    //std::unorders_multiset
    std::unordered_multiset<int> ms{10,20,1,3,8,10};
    std::unordered_multiset<int> ms1 = {10,20,1,3,8,10};
    for(auto i : ms1) std::cout<<i<<" ";
    std::cout<<"\n";

    return 0;
}