#ifndef MYSET_H
#define MYSET_H

class MySet
{
  private:
  unsigned int range;
  unsigned int size;
  bool *set;

  public:
  MySet(unsigned);
  MySet(const MySet&);
  ~MySet();
  void insertElement(int);
  void deleteElement(int);
  void printSet() const;
  bool isEqualTo(const MySet&) const;
  int countPrimeNumbers() const;
};

#endif
