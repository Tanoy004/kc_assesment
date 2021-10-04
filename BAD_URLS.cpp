#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st;
	cin >> st;
	string ans;
	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] == '/')
		{
			if (ans.size() > 0 && ans[ans.size() - 1 ] != '/' )
				ans.push_back(st[i]);
		}
		else ans.push_back(st[i]);
	}
	cout << ans << endl;
 return 0;
}

