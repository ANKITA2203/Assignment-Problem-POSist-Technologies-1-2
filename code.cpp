/*
ANKITA AGNIHOTRI
JUET GUNA,INDIA
*/

#include <bits/stdc++.h>
using namespace std;

#define etm cerr << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms" << '\n'
// Numeric Constants
#define mod 1000000007
#define maxs 250005
#define mins 1005
#define eps 0.000000000001
#define imax 2000000200
#define llmax 1000000002000000000ll
#define pi 3.141592653589793
#define MAXO (int) 1e5
const int MAXN = 1e5+5;
#define llc(n) ll n;cin>>n
//write llc(n); with ; in the code
//and n ccan be any varialble m,x,a,b
#define llt ll t;cin>>t;while(t--)

//for bitmasking pos start form 0
#define check_bit(var,pos) ((var) & (1<<(pos)))
// Function to check if x is power of 2
bool isPowerOfTwo (int x)
{
// First x in the below expression is for the case when x is 0
//  return (x&&(!(x&(x-1)))) ;
    return (x&&(!(x&(x-1))));
}
//others
#define pb push_back
#define lp(i,a,b) for(int i=a;i<b;i++)
#define lpr(j,a,b) for(int j=a;j>=b;j--)//confused j-- and --j
#define ll long long int
#define p_pq priority_queue
#define ub upper_bound
#define lb lower_bound
#define F first
#define S second
#define siter set<int>::iterator
#define mp make_pair
#define riterate(container, it) for(typeof(container.begin()) it = container.end()-1; it >= container.begin(); --it)
#define iterate(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); ++it)
#define minof(x,y,z) (x < y ? (x < z ? x : z) : (y < z ? y : z))
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


int readline( char * str ) {int i = 0;char ch;while ( (ch = getchar() ) != '\n' ) {str[i++] = ch;}str[i] = '\0';return i;}

//struct HASH{
//  size_t operator()(const pair<ll,ll>&x)const{
//    return hash<ll>()(((ll)x.first)^(((ll)x.second)<<64));
//  }
//};
struct date
{
    int day,month,year;
};
string encryption_function(string data)
{
    lp(i,0,data.size())
    {
        data[i]+=3;
    }

}
struct node
{
    struct date timestamp;
    string data;
    vector<node *>childReferenceNodeId;
    int nodeNumber;
    string nodeId;//32 bit id that uniquely identifies a node
//     referenceNodeId;
   // int childReferenceNodeId;
};
struct node *newNode(string item )
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    //temp->left = temp->right = NULL;
    return temp;
}
/* A function to insert a new node with given key */
struct node* insert(struct node* node, string data)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(data);

   //function to check the feasibility of addition
   // Sum of a set of value of siblings should never be greater than the value
    //of the root node.
    return node;
}
void Trickledown(node * root)
{
    if (root==NULL)
        return;

    // Standard level order traversal code
    // using queue
    queue<node *> q;  // Create a queue
    q.push(root); // Enqueue root
    while (!q.empty())
    {
        int n = q.size();

        // If this node has children
        while (n > 0)
        {
            // Dequeue an item from queue and print it
            node * p = q.front();
            q.pop();

            for (int i=0; i<p->childReferenceNodeId.size(); i++)
                q.push(p->childReferenceNodeId[i]);
            n--;
        }

        cout << endl; // Print new line between two levels
    }
}
int maxDepth(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
       /* compute the depth of each subtree */
       //use dfs for each of the child to find the max height

   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct node *root = NULL;
cout<<"Enter the index as input for your operation"<<endl;
cout<<"1. Create the Genesis Node. Genesis Node has parent node as null."<<endl;
cout<<"2. Create set of child nodes of a particular node."<<endl;
cout<<"3. Create a child node that originates from a particular node."<<endl;
cout<<"4. Encrypt and decrypt the data inside the node."<<endl;
cout<<"5. Verify the owner of the node, with the encryption key. "<<endl;
cout<<"6. Edit value of a node."<<endl;
cout<<"7. Transfer ownership of a particular node value. "<<endl;
cout<<"8. Find the longest chain of the genesis node."<<endl;
cout<<"9. Find the longest chain of any node."<<endl;
cout<<"10. Merge 2 nodes; data is added of the 2 nodes, ownership of the longer chain node are retained after a"<<endl;
    int n;cin>>n;
    switch (n)
    {
        case 1:
            root = insert(root,"ankita");
            break;
        case 2:
            (root->childReferenceNodeId).push_back(newNode("agnihotri"));
            break;
        case 3:
            (root->childReferenceNodeId[0]->childReferenceNodeId).push_back(newNode("posisit"));
            break;
        case 4:
            //root->childReferenceNodeId[0].data=encryption_function(root->childReferenceNodeId[0].data);
            break;
        case 8:
            //implementation of max depth
            break;

    }
    return 0;
}


