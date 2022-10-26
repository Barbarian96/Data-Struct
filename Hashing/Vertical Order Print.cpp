//Link: https://www.youtube.com/watch?v=oGsohYOOfRQ&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=137

//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


struct Node
{
    int key;
    Node *left,*right;
};

Node* newnode(int key)
{
    Node* node =new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}

void getverticalorder(Node *root,int hdis,map<int,vi>&mp)
{
    if(root==NULL)return;
    
    mp[hdis].pb(root->key);
    getverticalorder(root->left,hdis-1,mp);
    getverticalorder(root->right,hdis+1,mp);
    
}


void Boom()
{
    //Let's Move

    Node *root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(4);
    root->left->left=newnode(3);
    root->left->right=newnode(11);
    root->right->left=newnode(14);
    root->right->right=newnode(6);

    map<int ,vi>mp;
    int hdis=0;

    getverticalorder(root,hdis,mp);
    

    for(auto x:mp)
    {
        for(auto z:x.se)
        cout<<z<<sp;
        cout<<dl;
    }




}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
