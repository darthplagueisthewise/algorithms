
template<ItemType type>
class BucketList {

  struct Node {
    type stored_data;
    Node* next; 
    
    Node(type d, Node* np) 
    {
      stored_data = d;
      next = np;
    }
  };
  
  
  private:
  
    int N, M; // Number of buckets and entries in those buckets 
    Node heads; // Nodes at the start of the buckets
    
    Node Search(
