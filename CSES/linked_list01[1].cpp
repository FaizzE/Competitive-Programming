#include<bits/stdc++.h>
using namespace std;
class  node{
    public:
    node* next;
    int data;
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

void input_array(vector<int>&arr,int n){
    cout<<"\nenter the element of the array = ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
}
void print_array(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
}
node* convert_array_in_ll(vector<int>&arr,int n){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1;i<n;i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print_ll(node* head){
    node* mover = head;
    while(mover!=nullptr){
        cout<<mover->data<<"    ";
        mover = mover->next;
    }
    cout<<endl;
}

//? now my code is start for your question;

//* Write a program to reverse k alternate nodes of a linked list
// *Ex: 1->2->3->4->5->6->7->8->9
// *If k is 3 Output should be: 3->2->1->6->5->4->9->8->7 */

// *brute force space complexity O(n) time = O(2n+O(n*k)) overall time O(n);
node* reverse_k_group(node* head,int k){
    
    vector<int>arr;
    
    node* mover = head;
    while(mover!=nullptr){
        arr.push_back(mover->data);
        mover = mover->next;
    }
    if(k>arr.size()) return head;
    for (int i = 0; i < arr.size(); i += k) {
        int start = i;
        // Make sure to stay within the array bounds
        int end = min(i + k - 1, (int)arr.size() - 1);  

        // Reverse the subarray from 'start' to 'end'
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    node* update_head = convert_array_in_ll(arr,arr.size());
    return update_head;

}

// ! optimal code time = O((n/k) * k) = O(n) space =  O(1);
//* reverse the linked list */
node* reverse(node*head){
    node* mover = head;
    node* prev_node = nullptr;
    while(mover!=nullptr){
        node* next_node = mover->next;
        mover->next = prev_node;
        prev_node = mover;
        mover = next_node;
    }
    return prev_node;
}
node* reverse_the_ll_in_k_group(node* head ,int k){
    node* mover = head;
    node* prev_pointer = nullptr;
    while(mover!=nullptr){
        int cnt = k-1;
        node* temp_head = mover;
        while(mover!=nullptr && cnt!=0){
            mover = mover->next;
            cnt--;
        }
         if (mover == nullptr) {
            if (prev_pointer != nullptr) {
                prev_pointer->next = temp_head;
            }
            return head;  // Return without reversing
        }
        node* front_node = mover->next;
        mover->next = nullptr; 

        // Reverse the k-group
        node* reverse_head = reverse(temp_head);
   
        if(head==temp_head){
            head = reverse_head;
            
        }
        else{
            prev_pointer->next = reverse_head;
        }
        prev_pointer = temp_head;
        mover = front_node;
    }
    return head;
}


int main(){
    int n;
    cout<<"\nenter the size of the array = ";
    cin>>n;
    vector<int>arr;
    input_array(arr,n);
    node* head = convert_array_in_ll(arr,n);
    print_ll(head);
    node* update_head = reverse_the_ll_in_k_group(head,3);
    print_ll(update_head);


}
