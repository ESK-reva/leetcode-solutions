#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int value) {

    struct ListNode* newNode =
        (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct ListNode* mergeTwoLists(
    struct ListNode* list1,
    struct ListNode* list2) {

    struct ListNode dummy;
    struct ListNode* current = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {

        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        }
        else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL) {
        current->next = list1;
    }
    else {
        current->next = list2;
    }

    return dummy.next;
}

void printList(struct ListNode* head) {

    struct ListNode* current = head;

    while (current != NULL) {

        printf("%d", current->val);

        if (current->next != NULL) {
            printf(" -> ");
        }

        current = current->next;
    }

    printf(" -> NULL\n");
}

int main() {

    // Test Case 1 - Typical case
    struct ListNode* list1 = createNode(1);
    list1->next = createNode(2);
    list1->next->next = createNode(4);

    struct ListNode* list2 = createNode(1);
    list2->next = createNode(3);
    list2->next->next = createNode(4);

    struct ListNode* result1 =
        mergeTwoLists(list1, list2);

    printf("Test Case 1: ");
    printList(result1);


    // Test Case 2 - Edge case: one list is empty
    struct ListNode* list3 = NULL;

    struct ListNode* list4 = createNode(0);

    struct ListNode* result2 =
        mergeTwoLists(list3, list4);

    printf("Test Case 2: ");
    printList(result2);

    return 0;
}