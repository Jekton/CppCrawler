
#include <cstddef>
#include <string>

namespace jekton {

class Slice {
 public:
  Slice(): data_(nullptr), size_(0) { };

  Slice(const std::string& str): data_(str.data()), size_(str.size()) { }

  size_t size() {
    return size_;
  }

  const char* data() {
    return data_;
  }

 private:
  const char* data_;
  size_t size_;
};

}