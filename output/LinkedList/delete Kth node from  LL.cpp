if (temp->next != NULL) {
        temp->next->prev = temp->prev; // Update the previous pointer of the next node
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next; // Update the next pointer of the previous node
    }