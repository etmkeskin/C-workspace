#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   int dataVal;
   struct IntNode_struct* nextNodePtr;
} IntNode;

// Initialization
void InitializeIntNode(int dataInit, IntNode* thisNode) {
   thisNode->dataVal = dataInit;
   thisNode->nextNodePtr = NULL;
}

// Get node value
int GetNodeData(IntNode* thisNode) {
   return thisNode->dataVal;
}

// Get pointer to next node
IntNode* GetNext(IntNode* thisNode) {
   return thisNode->nextNodePtr;
}

/* Insert node after this node.
   Before: this -- next
   After:  this -- node -- next
*/
void InsertAfter(IntNode* thisNode, IntNode* newNode) {
   IntNode* tempNext = NULL;

   tempNext = thisNode->nextNodePtr;
   thisNode->nextNodePtr = newNode;
   newNode->nextNodePtr = tempNext;
}

// Return the largest value in the list
int FindMax(IntNode* headNode) {

   /* Type your code here. */
   if (headNode->nextNodePtr == NULL) {
      return -99;
   }

   IntNode* currNode = headNode->nextNodePtr;
   int currMax = currNode->dataVal;

   while(currNode != NULL){
      if(currNode->dataVal > currMax){
         currMax = currNode->dataVal;
      }
      currNode = currNode->nextNodePtr;
   }

   return currMax;
}

int main() {
   IntNode* headNode;
   IntNode* currNode;
   IntNode* lastNode;
   int max;

   // Initiaize head node
   headNode = (IntNode*)malloc(sizeof(IntNode));
   InitializeIntNode( -1, headNode);
   lastNode = headNode;

   // Add nodes to the list
   for (int i = 0; i < 20; ++i) {
      currNode = (IntNode*)malloc(sizeof(IntNode));
      InitializeIntNode(i, currNode);
      InsertAfter(lastNode, currNode);
      lastNode = currNode;
   }

   max = FindMax(headNode);
   printf("%d\n", max);

   return 0;
}
