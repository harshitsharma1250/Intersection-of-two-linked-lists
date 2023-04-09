
int length(ListNode *ptr){
    int d = 0 ;
    while(ptr!=NULL){
        d++ ;
        ptr = ptr->next ;
    }
    return d ;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA ;
        ListNode *p2 = headB ;

        int l1 = length(headA) ;
        int l2 = length(headB) ;

        if(l1<l2){
            int x = l2-l1 ;
            while(x>0){
                p2 = p2->next ;
                x-- ;
            }
        }
        else if(l1>l2){
            int x = l1-l2 ;
            while(x>0){
                p1 = p1->next ;
                x-- ;
            }
        }

        while(p1!=NULL && p2!=NULL){
            if(p1==p2){
                return p1 ;
            }
            p1 = p1->next ;
            p2 = p2->next ;
        }
        return NULL ;
