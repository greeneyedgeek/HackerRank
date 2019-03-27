// Interview Preparation Kit - Sock Merchant
// Author: Gabriel Fontaine-Escobar
// Date: 2019-03-27

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int calc_pairs(std::vector<int> ar){
    std::sort(ar.begin(), ar.end());
    int count{1}, pairs{0};
    for (int i = 1; i < ar.size(); ++i){
        if (ar.at(i) == ar.at(i-1)){
            count++;
            if (count == 2){ 
                pairs++;
                count = 0;
            }
        } else {
            count = 1;
        }
    }
    return pairs;
}

std::vector<int> get_array(){
    int n;
    std::cin >> n;
    std::vector<int> ar;
    while (std::cin >> n) {ar.push_back(n);}
    return ar;
}

int main(){ 
    std::vector<int> v;
    v = get_array();
    int pairs = calc_pairs(v);
    std::cout << pairs << '\n';
    return 0; 
}
