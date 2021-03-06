#ifndef SWAP_H_
#define SWAP_H_

namespace BaseLib {

/**
 * swap the content of arg0 and arg1
 */
template<class T> void swap(T& arg0, T& arg1)
{
  T temp(arg0);
  arg0 = arg1;
  arg1 = temp;
}

} // end namespace BaseLib

#endif //SWAP_H_
