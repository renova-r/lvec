#ifndef iterator_h
#define iterator_h

#include <iterator>
#include "val_ref.h"

namespace ldat {

  template<typename T>
  class lvec;

  template<typename T>
  class lvec_iterator {
    public: 
      typedef std::bidirectional_iterator_tag iterator_category;
      typedef T value_type;
      typedef std::ptrdiff_t difference_type;
      typedef const T* pointer;
      typedef lvec_val_ref<T> reference;

      lvec_iterator(lvec<T>& vec, unsigned int pos) : vec_(vec), pos_(pos) {};
      lvec_iterator(const lvec_iterator& it) : vec_(it.vec_), pos_(it.pos_) {};
      ~lvec_iterator() {};

      lvec_iterator& operator++() {
        pos_++;
        return *this;
      }

      lvec_iterator& operator--() {
        pos_--;
        return *this;
      }

      lvec_iterator& operator=(const lvec_iterator& it) {
        vec_ = it.vec_;
        pos_ = it.pos_;
        return *this;
      }

      lvec_iterator operator++(int) {
        lvec_iterator old = *this;
        pos_++;
        return old;
      }

      lvec_iterator operator--(int) {
        lvec_iterator old = *this;
        pos_--;
        return old;
      }

      lvec_iterator operator+(int n) const {
        return lvec_iterator(vec_, pos_ + n);
      }

      lvec_iterator operator-(int n) const {
        return lvec_iterator(vec_, pos_ - n);
      }

      int operator-(const lvec_iterator& rhs) const {
        return pos_ - rhs.pos_;
      }

      lvec_iterator& operator+=(int n) {
        pos_ += n;
        return *this;
      }

      lvec_iterator& operator-=(int n) {
        pos_ -= n;
        return *this;
      }

      bool operator<(const lvec_iterator& rhs) const {
        return pos_ < rhs.pos_;
      }

      bool operator>(const lvec_iterator& rhs) const {
        return pos_ > rhs.pos_;
      }

      bool operator<=(const lvec_iterator& rhs) const {
        return pos_ <= rhs.pos_;
      }

      bool operator>=(const lvec_iterator& rhs) const {
        return pos_ >= rhs.pos_;
      }

      bool operator==(const lvec_iterator& rhs) const {
        return pos_ == rhs.pos_;
      }

      bool operator!=(const lvec_iterator& rhs) const {
        return !(pos_ == rhs.pos_);
      }

      lvec_val_ref<T> operator*() const {
        return lvec_val_ref<T>(vec_, pos_);
      }

      lvec_val_ref<T> operator*() {
        return lvec_val_ref<T>(vec_, pos_);
      }


    private:
      lvec<T>& vec_;
      unsigned int pos_;
  };


}

#endif

