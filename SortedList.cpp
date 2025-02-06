
#include "SortedList.h"


template<class T>
SortedList<T>::SortedList() {

}

template<class T>
void SortedList<T>::MakeEmpty() {

}

template<class T>
bool SortedList<T>::IsFull() const {
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool SortedList<T>::Contains(T someItem) {
    return false;
}

template<class T>
void SortedList<T>::PutItem(T item) {
    // Edge Case: List is full
    if (IsFull()) return;

    // Initialize new node for inserted item
    NodeT *newNode = new NodeT;
    newNode->info = item;
    newNode->next = nullptr;
    length++;

    // Edge Case: Empty List
    if (head == nullptr) {
        head = new NodeT;
        length++;
        return;
    }



    NodeT *prevNode = nullptr;
    NodeT *curNode = head;

    while (curNode != nullptr) {
        if (item < curNode->info) {
            newNode->next = curNode;

            // Edge Case: Adding to beginning of list
            if (prevNode == nullptr) {
                head = newNode;
            }else {
                // Reassign pointer for prevNode
                prevNode->next = newNode;
            }


            length++;
            return;
        }
        prevNode = curNode;
        curNode = curNode->next;
    }

    // Edge Case: Adding to end of list

    prevNode->next = newNode;
}

template<class T>
void SortedList<T>::DeleteItem(T item) {

}

template<class T>
void SortedList<T>::ResetIterator() {

}

template<class T>
int SortedList<T>::GetNextItem() {
    if (currentPos >= length) {
        throw "Out of bounds";
    }

    return T();
}

