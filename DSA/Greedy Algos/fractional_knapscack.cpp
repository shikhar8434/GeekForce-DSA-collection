#include<bits/stdc++.h>

using namespace std;

struct item{
    long weight;
    long value;
};

bool cmp(struct item a, struct item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double max_loot(int n, int w, struct item arr[])
{
    sort(arr,arr + n, cmp);
    double loot = 0;
    double w_left = w;
    for(int i = 0; w_left>0 && i<n; ++i)
    {
        if(arr[i].weight >= w_left)
        {
            loot += ((double)arr[i].value/(double)arr[i].weight) * (double)w_left;
            w_left = 0;
        }
        else
        {
            loot += arr[i].value;
            w_left -= arr[i].weight;
        }
    }
    cout << loot << "\n\n";       
    return loot;
}

int main()
{
    int n; 
    long w;
    cin >> n >> w;
    item items[n];
    for(int i = 0; i < n; ++i){
        cin >> items[i].value >> items[i].weight;
    }
    cout << fixed << showpoint<< setprecision(4)<< max_loot(n, w, items);
    return 0;
}