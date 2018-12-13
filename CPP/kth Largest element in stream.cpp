
#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

class minheap{
        int *arr;
        int capacity;
        int heap_size;
    public:
        minheap(int a[], int size);
        void buildHeap();
        void minheapify(int i);
        int parent(int i)   {   return  (i-1)/2;    }
        int left(int i)     {   return  (2*i)+1;    }
        int right(int i)    {   return  (2*i)+2;    }
        int extractmin();
        int getmin()        {   return arr[0];      }
        void replacemin(int i)  {   arr[0] = i;     minheapify(0);  }
        void heapprint()    { 
            for(int i=0;i<heap_size;i++) 
                cout<<"heap is"<<arr[i];
        }
};

minheap::minheap(int a[], int size)
{
    heap_size = size;
    arr = a;
}

void minheap::buildHeap()
{
    int i = (heap_size-1)/2;
    while( i>=0 )
    {
        minheapify(i);
        i--;
    }
}

void minheap::minheapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;

    if(l < heap_size && arr[l] < arr[i])
        smallest = l;
    
    if(r < heap_size && arr[r] < arr[smallest])
        smallest = r;

    if(smallest!=i)
    {
        swap(&arr[i], &arr[smallest]);
        minheapify(smallest);
    }
}

int minheap:: extractmin()
{
    if(heap_size == 0)
    {
        return INT_MIN;
    }

    int root = arr[0];

    if(heap_size > 1)
    {
        arr[0] = arr[heap_size -1];
        minheapify(0);
    }
    heap_size--;

    return root;
}


void kthLargest(int k)
{
    int count = 0;
    int x=0;
    int *a = new int[k];
    minheap minheap_object(a, k);

    while(1)
    {
        cout<<" Enter next element to stream";
        cin>>x;

        if(count < k-1)
        {
            a[count] = x;
            count++;
        }
        else{
            if(count == k-1)
            {
                a[count] = x;
                minheap_object.buildHeap();
            }
            else{
                if(x > minheap_object.getmin())
                    minheap_object.replacemin(x);
                    cout<<"  printing heap" ;
                    minheap_object.heapprint();
                    cout<<endl;
            }
            count++;
            cout<<"Kth largest element is "<<minheap_object.getmin()<<endl;
            
        }
    }

    int arr[k];
}

int main()
{
    int k = 3; 
    cout << "K is " << k << endl; 
    kthLargest(k); 
    return 0;
}













