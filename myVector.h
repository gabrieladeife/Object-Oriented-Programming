#ifndef MYVECTOR_H
#define MYVECTOR_H

template <typename T>
class myVector
{
  private:
  int size, capacity;
  T* vec;
  public:
  myVector();
  myVector(int capacity);
  myVector(const myVector &vec);
  ~myVector();
  void insertBeg(T value);
  void insertEnd(T value);
  void removeBeg();
  void removeEnd();
  void increaseCapacity();
  void decreaseCapacity();
  int getCapacity() const;
  int getSize() const;
};

//no-arg constructor
template<typename T>
myVector<T>::myVector()
{
capacity = 4;
size = 0;
vec = new T[capacity];
}

//constructor
template<typename T>
myVector<T>::myVector(int capacity){
  this->capacity = capacity;
  size = 0;
  vec = new T[capacity];
}

//copy constructor
template<typename T>
myVector<T>::myVector(const myVector &vec)
{
  this->vec = new T[vec.getCapacity()];
  size = vec.getSize();
  capacity = vec.getCapacity();
  for (int i = 0; i < size; i++)
  {
    this->vec[i] = vec.vec[i];
  }
}

//destructor
template<typename T>
myVector<T>::~myVector()
{
  delete [] vec;
}

//function to insert value at beginning of array and shifts array to the right. first shift array one element to the right and then it puts value at the beginning.
template<typename T>
void myVector<T>::insertBeg(T value){
  increaseCapacity();

  for(int i=size; i >=0; i--){
    vec[i] = vec[i - 1];
  }
  vec[0] = value;
  size++;
}

//function to insert value at end of array. adds value at size and post-increments it.
template<typename T>
void myVector<T>::insertEnd(T value){
increaseCapacity();

vec[size++] = value;
}

//function to remove value at beginning of array and shifts array elements to the left. first shifts elements to the left and then decrements the size.
template<typename T>
void myVector<T>::removeBeg(){
  decreaseCapacity();

  for(int i = 1; i < size; i--){
    vec[i - 1] = vec[i];
  }
  size--;
}

//function to remove value at the end. decrements size of array.
template<typename T>
void myVector<T>::removeEnd(){
  if (size == capacity / 2 ) decreaseCapacity();
size--;
}

//doubles capacity if size is greater than or equal to capacity.
template<typename T>
void myVector<T>::increaseCapacity(){
  if (size >= capacity)
  capacity *=2;
}

//halves capacity if size is equal to the capacity.
template<typename T>
void myVector<T>::decreaseCapacity(){
  if(size == capacity / 2) 
  capacity /=2;
}

//getter function for private data field capacity.
template<typename T>
int myVector<T>::getCapacity() const{
  return capacity;
}

//getter function for private data field size.
template<typename T>
int myVector<T>::getSize() const {
  return size;
}

#endif