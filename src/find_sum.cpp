#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int l = 0;
    int r = data.size()-1;
    int curr_sum = data[l] + data[r];
    while (l<r){
      if (curr_sum == sum){
        return std::make_pair(l,r);
      }
      if (curr_sum<sum){
        l+=1;
      }
      else{
        r-=1;
      }
      curr_sum = data[l] + data[r];
    }
    return std::nullopt;
  }

}  // namespace assignment