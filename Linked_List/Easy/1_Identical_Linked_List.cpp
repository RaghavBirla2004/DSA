void traverse1(struct Node* head, vector<int>& v) {
    v.clear();
    struct Node* temp = head;
    while (temp != NULL) {
        v.push_back(temp->data);
        temp = temp->next;
    }
}

void traverse2(struct Node* head, vector<int>& v2) {
    v2.clear();
    struct Node* temp = head;
    while (temp != NULL) {
        v2.push_back(temp->data);
        temp = temp->next;
    }
}

bool areIdentical(struct Node* head1, struct Node* head2) {
    vector<int> v;
    vector<int> v2;
    
    traverse1(head1, v);
    traverse2(head2, v2);
    
    return v == v2;
}
