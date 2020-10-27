#include<bits/stdc++.h>

using namespace std;

int min_refuels(long d, int m, int n, int stops[])
{
    long d_trav = 0;
    int i, refuel_station, prev_stop, refuels = 0;
    while(true)
    {
        prev_stop = d_trav;
        d_trav += m;
        if(d_trav >= d)
            break;
        else
        {
            for(i = 0; i < n; ++i)
            {
                if(stops[i] > d_trav)
                {
                    if(i > 0)
                        refuel_station = stops[i-1];
                    else 
                        return -1;
                    break;
                }
            }
            if(i==n){
                refuel_station = stops[n-1];
            }
            if(refuel_station!= prev_stop)
            {
                d_trav = refuel_station;
                refuels++;
            }
            else{
                return -1;
            }            
        }
    }
    return refuels;
}

int main()
{
    long d;
    int m,n;
    cin >> d >> m >> n;
    int stops[n];
    for(int i= 0; i < n; ++i){
        cin >> stops[i];
    }
    cout << min_refuels(d,m,n,stops);
    return 0;
}