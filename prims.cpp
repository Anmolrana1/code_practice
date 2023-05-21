#include<bits/stdc++.h>
using namespace std;
struct Node{
	int value;
	 Node* next=NULL;
	 
};  

void Heapify(Node v[],int i,int n){
	int x=v[i].value; 	int min;
	while(2*i<=n)
	{	

	int l=2*i;
	int r=l+1;
		if(v[l].value<v[r].value || r>n){
		  min=l;
		  }
		else{
		  min=r; 
		  }
		if(x>v[min].value){
			v[i].value=v[min].value;
			i=min;
			}
		else 
		break;
	  }
   v[i].value=x;

}
void Build_Heap(Node v[],int n){
	for(int i=(n/2);i>=1;i--){

			Heapify( v,i,n);
	}
}
int Delete(Node v[],int n,int i){
	int x=v[i].value;
	v[1].value=v[n].value;
	n--;
	Heapify(v,1,n);
	return x;
}

void addNewNode(int n,Node v[],int p,int ne){
	Node* newNode=new Node;
	newNode->value=ne;
	if(v[p].next==NULL){
		v[p].next=newNode;
	}
	else {
		newNode->next=v[p].next;
		v[p].next=newNode;
	
	}
}

void MST_prims(int p,Node V[],int n,int w[][5]){
	
		int cost[n];int par[n];	int u,v;
		for(int i=0;i<n;i++){
			par[i]=-1;
			cost[i]=-1;
		}
		Node* ptr;
		cost[p]=0;
	    queue<int>q;
	    Build_Heap(V, n);
	   	for(int i=0;i<n;i++){
	   		
			q.push(V[i].value);
		}
	
		while(!q.empty()){
			u = Delete(V,n,1);
			cout<<u;
		ptr=V[u].next;	
		while(ptr!=NULL){
		v=ptr->value;
		if(cost[v]>w[u][v]){
			cost[v]=w[u][v];
			par[v]=u;
		}
		
	}
}
}

int main(){
	int n;int w[5][5];
	cout<<"enter no of vertices:";
	cin>>n;
	Node v[n];
	for(int i=0;i<n;i++){
		v[i].value=i;
	}
	addNewNode(n,v,2,4);
	addNewNode(n,v,1,4);
	addNewNode(n,v,3,4);
	addNewNode(n,v,0,2);
	addNewNode(n,v,2,3);

    MST_prims( 2,v, n,w);
    
return 0;
}
