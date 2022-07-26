#include <bits/stdc++.h>
using namespace std;
void printKMax(int arr[], int n, int k)
{   
    std::deque<int> window(k);
    int i;
	for (i = 0; i < k; ++i)
	{
		while ((!window.empty()) && arr[i] >=arr[window.back()])
			window.pop_back();
    	window.push_back(i);
	}
    for (; i < n; ++i)
	{
		cout << arr[window.front()] << " ";
    	while ((!window.empty()) && window.front() <=i - k)
			window.pop_front();
    	while ((!window.empty()) && arr[i] >=arr[window.back()])
			window.pop_back();
    	window.push_back(i);
	}
    cout << arr[window.front()];
}
int main()
{
	int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
	printKMax(arr, n, k);
	return 0;
}
