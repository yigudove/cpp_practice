struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};


int main()
{
    ListNode* head   = new ListNode(1);
    head->next       = new ListNode(2);
    head->next->next = new ListNode(3);

    return 0;
}
