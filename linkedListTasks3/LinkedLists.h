//#pragma once
//#include<iostream>
//#include<list>
//#include"Node.h"
//using namespace std;
//class LinkedLists
//{
//public:
//    Node* head;
//    LinkedLists() : head(nullptr) {}
//    void append(int data) {
//        Node* newNode = new Node(data);
//        if (!head) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//    void PrintList() const {
//        Node* current = head;
//        while (current) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//    void reverse() {
//        Node* prev = nullptr;
//        Node* current = head;
//        Node* next = nullptr;
//        while (current != nullptr) {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        }
//        head = prev;
//    }
//   void search(int value) {
//        Node* current = head;
//        while (current) {
//            if (current->data == value)
//                cout << "value is in the linked list" << endl;
//            current = current->next;
//        }
//       
//    }
//   void sort() {
//       if (!head || !head->next)
//           return; // List is empty or has only one element
//
//       // Implement a simple bubble sort
//       for (Node* i = head; i->next != nullptr; i = i->next) {
//           for (Node* j = head; j->next != nullptr; j = j->next) {
//               if (j->data > j->next->data) {
//                   // Swap data
//                   int temp = j->data;
//                   j->data = j->next->data;
//                   j->next->data = temp;
//               }
//           }
//       }
//   }
// 
//   void merge(LinkedLists& otherList) {
//    
//       if (!otherList.head)
//           return;
//
//   
//       if (!head) {
//           head = otherList.head;
//           otherList.head = nullptr; 
//           return;
//       }
//
//       Node* mergedHead = nullptr;
//       Node* mergedTail = nullptr;
//       Node* thisPtr = head;
//       Node* otherPtr = otherList.head;
//
//     
//       if (thisPtr->data <= otherPtr->data) {
//           mergedHead = thisPtr;
//           thisPtr = thisPtr->next;
//       }
//       else {
//           mergedHead = otherPtr;
//           otherPtr = otherPtr->next;
//       }
//       mergedTail = mergedHead;
//
//       while (thisPtr && otherPtr) {
//           if (thisPtr->data <= otherPtr->data) {
//               mergedTail->next = thisPtr;
//               thisPtr = thisPtr->next;
//           }
//           else {
//               mergedTail->next = otherPtr;
//               otherPtr = otherPtr->next;
//           }
//           mergedTail = mergedTail->next;
//       }
//
// 
//       if (thisPtr)
//           mergedTail->next = thisPtr;
//       else
//           mergedTail->next = otherPtr;
//
//       head = mergedHead;
//
//       otherList.head = nullptr;
//   }
//
//
//};
//
