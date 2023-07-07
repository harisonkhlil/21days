template <typename T> class destructivecopy_ptr {
private:
  T *object;

public:
  destructivecopy_ptr(T *input) : object(input) {}
  ~destructivecopy_ptr() { delete object; }

  // copy vonstructor
  destructivecopy_ptr(destructivecopy_ptr &source) {
    object = source.object;

    // destroy source
    source.object = 0;
  }

  // copy assignment operator
  destructivecopy_ptr &operator=(destructivecopy_ptr &source) {
    if (object != source.object) {
      delete object;
      object = source.object;
      source.object = 0;
    }
  }
};

int main() {
  destructivecopy_ptr<int> num(new int);
  destructivecopy_ptr<int> copy = num;
}
