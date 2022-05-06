#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips: итеративно пройдитесь по элементам массива
    for (int i = 0; i < data.size(); ++i) {
      if (search_element == data[i]){
        return i;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment