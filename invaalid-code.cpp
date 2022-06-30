/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findNodeRec(Node *head, int n)
{
    // Write your code here
    if (head == NULL)
        return -1;
    if (n == head->data)
        return 0;
    else
    {
        int pos = findNodeRec(head->next, n);
        if (pos != -1)
            return 1 + pos;
        else
            return -1;
    }
}
