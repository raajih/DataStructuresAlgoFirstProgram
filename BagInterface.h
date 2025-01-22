#pragma once

template<class T>
class BagInterface
{
public:
	virtual int getCurrentSize() const = 0; //Have const because we don't want to change anything.
	virtual bool isEmpty() const = 0;
	virtual bool add(const T& item) = 0; /*Const before T& because we don't want to change the thing going into the bag. Have it pass by
	reference, so that it doesn't make a copy of the variable which makes the code more efficient / faster.*/
	virtual bool remove(const T& item) = 0;
	virtual void clear() = 0;
	virtual int getFrequencyOf(const T& item) const = 0; 
	virtual bool contains(const T& item) const = 0;
	virtual std::vector<T> toVector() const = 0; 
};