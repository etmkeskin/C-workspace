#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   int dataVal;
   struct IntNode_struct* nextNodePtr;
} IntNode;

// Allocate a node for initData
IntNode* IntNode_Create (int initData) {
   IntNode* newNode = (IntNode*)malloc(sizeof(IntNode));
   newNode->dataVal = initData;
   newNode->nextNodePtr = NULL;
   return newNode;
}

/* Insert newNode after node.
 Before: thisNode -- next
 After:  thisNode -- newNode -- next
 */
void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode) {
   IntNode* tmpNext = NULL;

   tmpNext = thisNode->nextNodePtr;               // Remember next
   thisNode->nextNodePtr = newNode;               // this -- new -- ?
   newNode->nextNodePtr = tmpNext;                // this -- new -- next
}

// Print dataVal
void IntNode_PrintNodeData(IntNode* thisNode) {
   printf("%d ", thisNode->dataVal);
}

// Grab location pointed by nextNodePtr
IntNode* IntNode_GetNext(IntNode* thisNode) {
   return thisNode->nextNodePtr;
}

/* ******** New functions ********/

// Return the length of the list
int IntNode_Length(IntNode* firstNode) {
   int length = 0;
   IntNode* currentNode = firstNode;
   while(currentNode != NULL) {
      ++length;
      currentNode = currentNode->nextNodePtr;
   }

   return length;
}

IntNode* IntNode_GetNth(IntNode* firstNode, int pos) {
   int i = 1;
   IntNode* currentNode = firstNode;
   while(currentNode != NULL) {
      if (i == pos) {
         return currentNode;
      }
      ++i;
      currentNode = currentNode->nextNodePtr;
   }

   return NULL; // Return NULL if the position is not found in the list
}

void IntNode_PrintList(IntNode* firstNode) {
   IntNode* currentNode = firstNode;
   while(currentNode != NULL) {
      IntNode_PrintNodeData(currentNode);
      currentNode = currentNode->nextNodePtr;
   }
}

int IntNode_SumList(IntNode* firstNode) {
   int sum = 0;
   IntNode* currentNode = firstNode;
   while(currentNode != NULL) {
      sum += currentNode->dataVal;
      currentNode = currentNode->nextNodePtr;
   }

   return sum;
}

int main(void) {
   IntNode* firstNode = NULL;
   IntNode* lastNode = NULL;
   IntNode* newNode = NULL;
   IntNode* curNode = NULL;
   int listSize;                                  // how many integers to read
   int increment;                                 // increment between consecutive node values
   int firstNum;                                  // first node value

   // New node for newNum will be inserted after position newPos (first node = 1)
   int newPos;
   int newNum;

   int i;

   // Input:
   scanf("%d %d %d%d %d", &listSize, &firstNum, &increment, &newNum, &newPos);

   // Create the list
   firstNode = IntNode_Create(firstNum);
   // Create node for first value
   // New list has just one node, so lastNode is same as firstNode
   lastNode = firstNode;

   // Add nodes to the list
   for (i = 1; i < listSize; ++i) {
      // Create a new node for the next nmber
      newNode = IntNode_Create((increment * i) + firstNum);
      // Add the node to the end of the list
      IntNode_InsertAfter(lastNode, newNode);
      lastNode = newNode;
   }

   // Print the list
   printf("%d element list: ", IntNode_Length(firstNode));
   IntNode_PrintList(firstNode);
   printf("\n");

   // If list length > 1 print the list starting at the second element
   printf("From second element: ");
   if (IntNode_Length(firstNode) <=1) {
      printf("No second element\n");
   }
   else {
      IntNode_PrintList(IntNode_GetNext(firstNode));
      printf("\n");
   }

   // Print the sum
   printf("sum: %d\n", IntNode_SumList(firstNode));

   // Add a node after node newPos
   newNode = IntNode_Create(newNum);
   curNode = IntNode_GetNth(firstNode, newPos);
   IntNode_InsertAfter(curNode, newNode);
   printf("New list: ");
   IntNode_PrintList(firstNode);
   printf("\n");

   return 0;
}
